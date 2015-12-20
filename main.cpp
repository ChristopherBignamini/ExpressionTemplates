#include "DExpr.hpp"
#include "DExprIdentity.hpp"
#include "evaluate.hpp"
#include "operator_sum.hpp"
#include "operator_div.hpp"
#include "operator_math_fun.hpp"
#include <iostream>

int main()
{
    ET::DExpr<ET::DExprIdentity> x;
    ET::DExpr<ET::DExprIdentity> y;

    std::cout<<ET::evaluate(1.,3.)<<" "<<1<<std::endl;
    std::cout<<ET::evaluate(x,3.)<<" "<<3<<std::endl;
    std::cout<<ET::evaluate(x+y,3.)<<" "<<5<<std::endl;
    std::cout<<ET::evaluate(x+1.,3.)<<" "<<4<<std::endl;
    std::cout<<ET::evaluate(1.+x,3.)<<" "<<4<<std::endl;
    std::cout<<ET::evaluate(1./x,2.)<<" "<<0.5<<std::endl;
    std::cout<<ET::evaluate(x/2.,3.)<<" "<<1.5<<std::endl;
    std::cout<<ET::evaluate(x/x,3.)<<" "<<1<<std::endl;
    std::cout<<ET::evaluate((x+1.)/x,2.)<<" "<<1.5<<std::endl;
    std::cout<<ET::evaluate(x/(x+1.),3.)<<" "<<0.75<<std::endl;
    std::cout<<ET::evaluate((1.+x)/x,2.)<<" "<<1.5<<std::endl;
    std::cout<<ET::evaluate(x/(1.+x),3.)<<" "<<0.75<<std::endl;
    
    std::cout<<ET::evaluate(ET::exp(x),3.)<<" "<<std::exp(3.)<<std::endl;
    std::cout<<ET::evaluate(ET::exp(3.),3.)<<" "<<std::exp(3.)<<std::endl;
    std::cout<<ET::evaluate(ET::log(x),3.)<<" "<<std::log(3.)<<std::endl;
    std::cout<<ET::evaluate(ET::log(3.),3.)<<" "<<std::log(3.)<<std::endl;
    std::cout<<ET::evaluate(ET::log(ET::exp(x)),3.)<<" "<<std::log(std::exp(3.))<<std::endl;
    std::cout<<ET::evaluate(ET::exp(ET::log(x)),3.)<<" "<<std::exp(std::log(3.))<<std::endl;

    std::cout<<ET::evaluate(ET::exp(x/(x+1.)),3.)<<" "<<std::exp(0.75)<<std::endl;

    
  return 0;
} 
