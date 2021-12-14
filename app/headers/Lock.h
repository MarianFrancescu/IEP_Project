#ifndef LOCKDB_LOCK_H
#define LOCKDB_LOCK_H

#include <iostream>
#include <mutex>

class Lock{
    private:
        std::mutex *mutexPtr;
        bool lockedOperation;

    public:
        explicit Lock();
        Lock(const Lock&) = delete;
        ~Lock();
        void lock();
        void unlock();
};
#endif