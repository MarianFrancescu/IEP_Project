#include "headers/Lock.h"

Lock::Lock(){
    mutexPtr = new std::mutex;
    mutexPtr->unlock();
    lockedOperation = false;
}

Lock::~Lock(){
    if(lockedOperation){
        mutexPtr->unlock();
        lockedOperation = false;
    }
}

void Lock::lock(){
    if(!lockedOperation){
        mutexPtr->lock();
        lockedOperation = true;
    }
}

void Lock::unlock(){
    if(lockedOperation){
        mutexPtr->unlock();
        lockedOperation = false;
    }
}