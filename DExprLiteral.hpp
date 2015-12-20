#pragma once

namespace ET
{
    
class DExprLiteral
{
public:

  DExprLiteral(const double i_val):
    const_val_(i_val)
  {}

  inline double operator()(const double i_val) const { return const_val_; } 

private:
  const double const_val_;

};

}
