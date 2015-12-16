#pragma once

#include "ExprTraits.hpp"

template <typename ExprA, typename ExprB, typename Op>
class DBinExprOp
{

public:
  
  DBinExprOp(const ExprA& i_a, const ExprB& i_b):
    a_(i_a),
    b_(i_b)
  {}

  double operator()(const double i_val) const { return Op::apply(a_(i_val),b_(i_val)); }

private:

    typename ExprTraits<ExprA>::expr_type a_;
    typename ExprTraits<ExprB>::expr_type b_;
    
};
