#pragma once

#include "DBinExprOp.hpp"
#include "DApDiv.hpp"
#include "DExpr.hpp"

namespace ET
{

template<typename ExprA, typename ExprB>
DExpr<DBinExprOp<ExprA,ExprB,DApDiv> > operator/(ExprA i_a, ExprB i_b)
{
    typedef DBinExprOp<ExprA,ExprB,DApDiv> ExprT;
    return DExpr<ExprT>(ExprT(i_a,i_b));
}

}