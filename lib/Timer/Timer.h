#ifndef TIMER_H
#define TIMER_H

#include <Arduino.h>

struct TimerTask {
  void (*function)();
  unsigned long interval;
  unsigned long timeLeft;
  bool enabled;
};

class Timer {
public:
  const static uint8_t MAX_TIMERS = 18;

  Timer();
  ~Timer();

  int8_t setTimeout(void (*function)(), unsigned long timeout);
  int8_t setInterval(void (*function)(), unsigned long interval);
  void enableTimer(uint8_t slot);
  void disableTimer(uint8_t slot);
  void deleteTimer(uint8_t slot);
  void update();
  void deleteAllTimers();

private:
  int8_t findTimerSlot();

  struct TimerTask *tasks[MAX_TIMERS];

  unsigned long lastUpdate;
};

#endif
