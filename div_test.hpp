#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__
#include "gtest/gtest.h"
#include "div.hpp"


TEST(DivTest, DivEvaluateZero)
{
	Base* test1= new Op(0);
	Base* test2 = new Op(156);

	Base divFinal = new Div(test1, test2);
	EXPECT_EQ(divFinal->evaluate(), 0);
	EXPECT_EQ(divFinal->stringify(), "0.000000 / 156.000000");
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
