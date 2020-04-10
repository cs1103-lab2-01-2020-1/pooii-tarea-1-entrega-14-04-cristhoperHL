#ifndef EJERCICIOS_CPP
#define EJERCICIOS_CPP

#include<iostream>
#include<cmath>
using namespace std;


namespace ejercicio5{

class Integer{
private: 
    int value;
public:

    Integer(int value){
        this->value=value;
    }

    int get_value()const{
        return value;
    }

    void print_value(){
        cout<<value<<endl;
    }

    

};


//OPERACIONES 

void operator +=(Integer &integer_1,Integer& integer_2){

    integer_1 = *(new Integer( integer_1.get_value() + integer_2.get_value() ));
}

Integer operator -(Integer &integer_1,Integer &integer_2){
    return *(new Integer(integer_1.get_value() - integer_2.get_value() ));
}

void operator -=(Integer &integer_1,Integer& integer_2){

    integer_1 = *(new Integer( integer_1.get_value() - integer_2.get_value() ));
}

Integer operator *(Integer &integer_1,Integer &integer_2){
    return *(new Integer(integer_1.get_value() * integer_2.get_value() ));
}

void operator *=(Integer &integer_1,Integer& integer_2){

    integer_1 = *(new Integer( integer_1.get_value() * integer_2.get_value() ));
}

Integer operator /(Integer &integer_1,Integer &integer_2){
    return *(new Integer(integer_1.get_value() / integer_2.get_value() ));
}

Integer operator ^(Integer &integer_1,Integer &integer_2){
    return *(new Integer(  pow(integer_1.get_value(),integer_2.get_value()) ));
}

bool operator >(Integer &integer_1,Integer &integer_2){
    if(integer_1.get_value() > integer_1.get_value() ) return true;
    else return false;
}

bool operator >=(Integer &integer_1,Integer &integer_2){
    if(integer_1.get_value() >= integer_1.get_value() ) return true;
    else return false;
}

bool operator <(Integer &integer_1,Integer &integer_2){
    if(integer_1.get_value() < integer_1.get_value() ) return true;
    else return false;
}

bool operator <=(Integer &integer_1,Integer &integer_2){
    if(integer_1.get_value() <= integer_1.get_value() ) return true;
    else return false;
}

bool operator !=(Integer &integer_1,Integer &integer_2){
    if(integer_1.get_value() != integer_1.get_value() ) return true;
    else return false;
}

bool operator ==(Integer &integer_1,Integer &integer_2){
    if(integer_1.get_value() == integer_1.get_value() ) return true;
    else return false;
}









};


namespace ejercicio6{

};








#endif