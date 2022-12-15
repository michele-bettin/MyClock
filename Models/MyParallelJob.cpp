#include "MyParallelJob.h"
#include <Windows.h>


void MyParallelJob::startThread()
{
    if(_thread == nullptr) // This condition prevents the thread from being started twice.
    {
        _threadRunning = true; // Set thread loop condition to true
        _thread = new std::thread(&MyParallelJob::parallel, this); // Create thread
    }
}

void MyParallelJob::stopThread()
{
    if(_thread != nullptr) // Prevents from stopping an stopped thread
    {
        _threadRunning = false; // Set thread loop condition to false
        _thread->join(); // Wait for thread to finish
        delete _thread; // Delete thread
        _thread = nullptr; // Set thread pointer to nullptr
    }
}

void MyParallelJob::parallel() // Function valled by thread
{
    while(_threadRunning == true) // While thread loop condition variable is true(=> stopThread() not called)...
    {
        //Asynchronous jobs here. (eg. function call)
        f();

        Sleep(1000); // Sleep one second
    }

}
