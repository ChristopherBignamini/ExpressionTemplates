#pragma once

#include "DApMult.hpp"
#include "DBinExprOp.hpp"
#include "DExpr.hpp"

namespace ET
{

template <typename ExprA, typename ExprB>
DExpr<DBinExprOp<ExprA,ExprB,DApMult> > operator*(ExprA i_a,ExprB i_b)
{
    typedef DBinExprOp<ExprA,ExprB,DApMult> ExprT;
    return DExpr<ExprT>(ExprT(i_a,i_b));
}

}