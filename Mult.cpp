#include "MultClass.hpp"
#include "op.hpp"

MultClass::MultClass(Base* test1,Base* test2){
	this->test1 = test1;
        this->test2 = test2;
        multfinal = test1 * test2;
}
Base* MultClass::evaluate(){
	return multfinal;

}

std::string MultClass::stringify(){
	std::ostringstream num;
	num<<multfinal;
	num<<setprecision(3);

	return num.str();
}
