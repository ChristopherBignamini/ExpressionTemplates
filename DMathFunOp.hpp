#pragma once

#include "ExprTraits.hpp"

namespace ET
{

template <typename Expr, typename Fun>
class DMathFunOp
{

public:
    
    DMathFunOp(const Expr& i_expr):
        expr_(i_expr)
    {}
    
    double operator()(const double i_val) const { return Fun::apply(expr_(i_val)); }
    
private:
    
    typename ExprTraits<Expr>::expr_type expr_;
};

}