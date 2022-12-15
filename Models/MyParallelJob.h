#ifndef PARALLELJOB_H
#define PARALLELJOB_H

#include <thread>
#include <atomic>
#include <Windows.h>
#include "orario.h"
#include<functional>



class MyParallelJob
{
private:
    std::thread* _thread = nullptr;
    std::atomic<bool> _threadRunning = false;
    const std::function <void()> f;

public:
    MyParallelJob(const std::function <void()>& lF)
        : f(lF)
    {}

    void startThread();

    void stopThread();

    void parallel();
};

#endif // PARALLELJOB_H
