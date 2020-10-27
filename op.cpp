#include "op.hpp"

Op::Op(double value){
	this->value = value;
}
double Op::evaluate(){
	return value;

}

std::string Op::stringify(){
	std::ostringstream num;
	num<<value;
	num<<setprecision(3);

	return num.str();
}
