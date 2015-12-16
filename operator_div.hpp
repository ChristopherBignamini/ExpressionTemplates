#pragma once

#include "DExpr.hpp"
#include "DBinExprOperator.hpp"
#include "DApDivide.hpp"

template<typename A, typename B>
DExpr< DBinExprOperator<A,B,DApDivide> >
operator/(const DExpr<A>& i_a, const DExpr<B>& i_b)
{
  typedef DBinExprOp<DExpr<A>,DExpr<B>,DApDivide> ExprT;
  return DExpr<ExprT>(ExprT(i_a,i_b));
}
