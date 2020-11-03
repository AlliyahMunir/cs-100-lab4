#ifndef __MULTCLASS_HPP__
#define __MULTCLASS_HPP__
#include "base.hpp"

class MultClass : public Base { 
    private:
    Base* test1;
    Base* test2;
    Base* multfinal = test1->evaluate() * test2->evaluate();
    public:
        MultClass(Base* test1,Base* test2) : Base() { }
        virtual Base* evaluate() { }
        virtual std::string stringify() {  }
};

#endif //__MULTCLASS_HPP__
