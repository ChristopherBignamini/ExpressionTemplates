#include "DExpr.hpp"
#include "DExprIdentity.hpp"
#include "evaluate.hpp"
#include "operator_sum.hpp"
#include <iostream>


int main()
{
    DExpr<DExprIdentity> x;
    DExpr<DExprIdentity> y;

    std::cout<<evaluate(1.,3.)<<std::endl;
    std::cout<<evaluate(x,3.)<<std::endl;
    std::cout<<evaluate(x+y,3.)<<std::endl;
    std::cout<<evaluate(x+1.,3.)<<std::endl;
    std::cout<<evaluate(1.+x,3.)<<std::endl;

  return 0;
} 
