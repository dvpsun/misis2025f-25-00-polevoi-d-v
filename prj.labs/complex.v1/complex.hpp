// 2025 by Polevoi Dmitry

#ifndef COMPLEX_COMPLEX_HPP
#define COMPLEX_COMPLEX_HPP

struct Complex {
  Complex& operator+=(const Complex& rhs) { return *this; }
};

inline Complex operator+(const Complex& lhs, const Complex& rhs) { return Complex(lhs) += rhs; }

Complex operator/(const Complex& lhs, const Complex& rhs);

#endif