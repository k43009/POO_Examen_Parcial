#pragma once
#include "SentinelLinkedList.h"

template <typename T>
class LQueue {
private:
    SentinelLinkedList<T> data;

public:
    LQueue() {}

    int GetCount() const { return data.GetCount(); }

    void Enqueue(const T& value) {      // al final
        data.Append(value);             // usa el Append que ya trae tu lista (O(1))
    }

    T Dequeue() {                       // del frente
        return data.PopFront();         // O(1)
    }

    T Front() {                         // tu lista ya tiene Front()
        return data.Front();
    }
};
