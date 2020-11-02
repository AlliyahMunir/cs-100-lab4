#ifndef __MULT_HPP__
#define __MULT_HPP__
//#include "gtest/gtest.h"
#include "op.hpp"
#include "SevenOpMock.hpp"
#include"ZeroOpMock.hpp"
#include <iostream>

//void mult();
//void OpEvaluateNonZero();
int main (){
TEST(mult,OpEvaluateNonZero) {
    mult* test1 = new Op(5);
    mult* test2 = new Op(1);
    mult* final = new mult(test1,test2);
    EXPECT_EQ(final->evaluate(), 5);
   {return test1->evaluate() * test2->evaluate();}
};

#endif //__MULT_HPP__
