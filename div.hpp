#ifndef __DIV_HPP__
#define __DIV_HPP__
#include "base.hpp"

class Div : public Base { 
    private:
    Base* test1;
    Base* test2;
    Base* divFinal = test1->evaluate() / test2->evaluate();
    public:
        Div(Base* test1,Base* test2) : Base() { }
        virtual  Base* evaluate() { }
        virtual std::string stringify() {  }
};

#endif //__DIV_HPP__


