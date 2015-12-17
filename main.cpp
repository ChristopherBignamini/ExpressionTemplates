#include "DExpr.hpp"
#include "DExprIdentity.hpp"
#include "evaluate.hpp"
#include "operator_sum.hpp"
#include "operator_div.hpp"
#include <iostream>


int main()
{
    DExpr<DExprIdentity> x;
    DExpr<DExprIdentity> y;

    std::cout<<evaluate(1.,3.)<<" "<<1<<std::endl;
    std::cout<<evaluate(x,3.)<<" "<<3<<std::endl;
    std::cout<<evaluate(x+y,3.)<<" "<<5<<std::endl;
    std::cout<<evaluate(x+1.,3.)<<" "<<4<<std::endl;
    std::cout<<evaluate(1.+x,3.)<<" "<<4<<std::endl;
    std::cout<<evaluate(1./x,2.)<<" "<<0.5<<std::endl;
    std::cout<<evaluate(x/2.,3.)<<" "<<1.5<<std::endl;
    std::cout<<evaluate(x/x,3.)<<" "<<1<<std::endl;
    std::cout<<evaluate((x+1.)/x,2.)<<" "<<1.5<<std::endl;
    std::cout<<evaluate(x/(x+1.),3.)<<" "<<0.75<<std::endl;
    std::cout<<evaluate((1.+x)/x,2.)<<" "<<1.5<<std::endl;
    std::cout<<evaluate(x/(1.+x),3.)<<" "<<0.75<<std::endl;
    
  return 0;
} 
