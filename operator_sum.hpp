#pragma once

#include "DBinExprOp.hpp"
#include "DApSum.hpp"
#include "DExpr.hpp"

template<typename ExprA, typename ExprB>
DExpr<DBinExprOp<ExprA,ExprB,DApSum> > operator+(ExprA i_a, ExprB i_b)
{
    typedef DBinExprOp<ExprA,ExprB,DApSum> ExprT;
    return DExpr<ExprT>(ExprT(i_a,i_b));
}
