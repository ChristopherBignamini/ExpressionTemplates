#pragma once

template <typename Expression>
class DExpr
{
public:
  
  DExpr(void)
  {}
  
  DExpr(const Expression& i_expr):
    expr_(i_expr)
  {}

  inline double operator()(const double i_val) const { return expr_(i_val); }
    
private:
  Expression expr_;
};
