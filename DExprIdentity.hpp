#pragma once

namespace ET
{

class DExprIdentity
{
public:
  inline double operator()(const double i_val) const { return i_val; }
};

}