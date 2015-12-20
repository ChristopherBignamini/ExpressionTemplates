#pragma once

#include <cmath>

namespace ET
{

class DApExp
{
public:
    static inline double apply(const double i_a)
    { return std::exp(i_a); }
};

class DApLog
{
public:
    static inline double apply(const double i_a)
    { return std::log(i_a); }
};

}