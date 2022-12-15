#ifndef CALLBACKTIMER_H
#define CALLBACKTIMER_H

#include <thread>
#include <atomic>
#include <Windows.h>
#include<functional>

class CallBackTimer
{
public:
    CallBackTimer();

    ~CallBackTimer();

    void stop();

    void start(int interval, std::function<void(void)> func);

    bool is_running() const noexcept;

private:
    std::atomic<bool> _execute;
    std::thread _thd;
};

#endif // CALLBACKTIMER_H
