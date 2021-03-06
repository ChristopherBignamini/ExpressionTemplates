#pragma once

#include "DExpr.hpp"
#include "DExprLiteral.hpp"

namespace ET
{

template <typename ExprT>
struct ExprTraits
{
  typedef ExprT expr_type;
};

template <>
struct ExprTraits<double>
{
  typedef DExpr<DExprLiteral> expr_type;
};

}