#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
private:
double value;     
public:
        Op(double value) : Base() { }
        virtual double evaluate() { }
        virtual std::string stringify() { }
};

#endif //__OP_HPP__
