// 2025 by Polevoi Dmitry under Unlicense

#include <stacka/stacka.hpp>

#include <memory>
#include <stdexcept>

StackA::StackA(const StackA& src) {
  if (!src.is_empty()) {
  }
}

StackA::~StackA() {
}

StackA& StackA::operator=(const StackA& src) {
  if (this != &src) {
  }
  return *this;
}

bool StackA::is_empty() const noexcept {
  return false;
}

void StackA::pop() noexcept {
}

void StackA::push(const int64_t val) {
}
  
int64_t& StackA::top() {
  int64_t dummy;
  return dummy; 
}

int64_t StackA::top() const  {
  int64_t dummy;
  return dummy; 
}

void StackA::clear() noexcept {
}
