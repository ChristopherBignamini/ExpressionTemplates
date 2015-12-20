#pragma once

#include "DMathFunOp.hpp"
#include "DApMathFun.hpp"
#include "DExpr.hpp"

namespace ET
{

template <typename Expr>
DExpr<DMathFunOp<Expr,DApExp> > exp(Expr i_expr)
{
    typedef DMathFunOp<Expr,DApExp> ExprT;
    return DExpr<ExprT>(ExprT(i_expr));
}

template <typename Expr>
DExpr<DMathFunOp<Expr,DApLog> > log(Expr i_expr)
{
    typedef DMathFunOp<Expr,DApLog> ExprT;
    return DExpr<ExprT>(ExprT(i_expr));
}

}