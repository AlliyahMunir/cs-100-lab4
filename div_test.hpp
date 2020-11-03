#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__
#include "div.hpp"
#include "gtest/gtest.h"

TEST(DivTest, DivEvaluateZero)
{
	Base* one = new Op(0);
	Base* two = new Op(156);

	Div* test = new Div(one, two);
	EXPECT_EQ(test->evaluate(), 0);
	EXPECT_EQ(test->stringify(), "0.000000 / 156.000000");
}
TEST(DivTest, DivEvaluateWHoleNumber)
{
	Base* one = new Op(100);
	Base* two = new Op(10);

	Div* test = new Div(one, two);
	EXPECT_EQ(test->evaluate(), 10);
	EXPECT_EQ(test->stringify(), "100.000000 / 10.000000");
}
#endif 
