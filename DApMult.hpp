#pragma once

#include "ExprTraits.hpp"

namespace ET
{

class DApMult
{
public:
    static inline double apply(const double i_a, const double i_b)
    { return i_a*i_b; }
};

}