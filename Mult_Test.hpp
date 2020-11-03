#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "MultClass.hpp"

TEST(MultTest, MultEvaluateNonZero) {
    Base* test1 = new Op(8);
    Base* test2 = new Op(1);
    Base multfinal = new Mult(test1, test2);
    EXPECT_EQ(multfinal->evaluate(), 8);
   {return test1->evaluate()*test2->evaluate();}
};

#endif //__MULT_TEST_HPP__
