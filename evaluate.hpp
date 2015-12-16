#include <iostream>
#include "DExpr.hpp"
#include "ExprTraits.hpp"

template<typename Expr>
double evaluate(Expr i_expr,const double i_value)
{
    // TODO: avoid local object creation
    typename ExprTraits<Expr>::expr_type expr(i_expr);
    return expr(i_value);
}

template<typename Expr>
void evaluate(Expr i_expr,const double i_rangeStart, const double i_rangeStop)
{
    const double step(1.0);

    for(double val=i_rangeStart;val<i_rangeStop;val+=step)
        std::cout<<evaluate(i_expr,val)<<std::endl;
    
    return;
}
