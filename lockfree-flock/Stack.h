// Adapted from lockbased/Stack.h

#pragma once

#include "Deque.h"

namespace lockfree_flock {

template <typename T>
class Stack : Deque {
 public:
  void push(T const& data) { return Deque::push_front(data); }
  int pop() { return Deque::pop_front(); }
};

}  // namespace lockfree_flock
