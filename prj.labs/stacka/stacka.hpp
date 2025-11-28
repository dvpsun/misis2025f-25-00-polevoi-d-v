// 2025 by Polevoi Dmitry under Unlicense

#pragma once
#ifndef STACKL_STACKA_HPP_20251128
#define STACKL_STACKA_HPP_20251128

#include <cstdint>

class StackA {
public:
  StackA() = default;

  StackA(const StackA& src);

  ~StackA();
  
  StackA& operator=(const StackA& src);

  [[nodiscard]] bool is_empty() const noexcept;

  void pop() noexcept;

  void push(const int64_t val);
  
  [[nodiscard]] int64_t& top();

  [[nodiscard]] int64_t top() const;

  void clear() noexcept;

private:
  int64_t* data_ = nullptr;
};

#endif
