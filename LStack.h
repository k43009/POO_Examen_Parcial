#pragma once
#include <forward_list>
#include <stdexcept>

template <typename T>
class LStack {
private:
    std::forward_list<T> list; // tope = front()
    size_t count = 0;

public:
    LStack() = default;

    void Push(const T& value) {     // O(1)
        list.push_front(value);
        ++count;
    }

    T Pop() {                       // O(1)
        if (count == 0) throw std::out_of_range("stack vacía");
        T top = list.front();
        list.pop_front();
        --count;
        return top;
    }

    T Peek() const {
        if (count == 0) throw std::out_of_range("stack vacía");
        return list.front();
    }

    size_t Count() const { return count; }
};
