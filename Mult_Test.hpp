#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "Mult.hpp"

TEST(MultTest, MultEvalTwoPos) {
    Base* test1 = new Op(9);
    Base* test2 = new Op(9);
    Mult* finaltest = new Mult(test1,test2);
   // test2 = test2final-> evaluate();
    EXPECT_EQ(finaltest->evaluate(),81);
    EXPECT_EQ(test->stringify(), "9.0000000*9.000000");

}

TEST(MultTest, MultEvalTwoPos) {
    Base* test1 = new Op(2);
    Base* test2 = new Op(2);
    Mult* finaltest = new Mult(test1,test2);
   // test2 = test2final-> evaluate();
    EXPECT_EQ(finaltest->evaluate(),4);
        EXPECT_EQ(test->stringify(), "2.000000*2.000000");

}


#endif //__MULT_TEST_HPP__
