#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__
#include "gtest/gtest.h"
#include "div.hpp"


TEST(DivTest, DivEvaluateZero)
{
	Base* top= new Op(0);
	Base* bot= new Op(1);

	Div* test = new Div(top, bot);
	EXPECT_EQ(test->evaluate(), 0);
	EXPECT_EQ(test->stringify(), "0.000000 / 1.000000");
}
/*TEST(DivTest, DivEvaluateWHoleNumber)
{
	Base* one = new Op(100);
	Base* two = new Op(10);

	Div* divFinal = new Div(one, two);
	EXPECT_EQ(divFinal->evaluate(), 10);
	EXPECT_EQ(divFinal->stringify(), "100.000000 / 10.000000");
}*/
#endif 
