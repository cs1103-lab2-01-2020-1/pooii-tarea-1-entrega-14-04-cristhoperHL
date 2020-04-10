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
template<class T>
void operator +=(T &integer_1,T& integer_2){

    integer_1 = *(new T( integer_1.get_value() + integer_2.get_value() ));
}

template<class T>
T operator -(T &integer_1,T &integer_2){
    return *(new T(integer_1.get_value() - integer_2.get_value() ));
}

template<class T>
void operator -=(T &integer_1,T& integer_2){

    integer_1 = *(new T( integer_1.get_value() - integer_2.get_value() ));
}


template<class T>
T operator *(T &integer_1,T &integer_2){
    return *(new T(integer_1.get_value() * integer_2.get_value() ));
}

template<class T>
void operator *=(T &integer_1,T &integer_2){

    integer_1 = *(new T( integer_1.get_value() * integer_2.get_value() ));
}

template<class T>
T operator /(T &integer_1,T &integer_2){
    return *(new T(integer_1.get_value() / integer_2.get_value() ));
}

template<class T>
T operator ^(T &integer_1,T &integer_2){
    return *(new T(  pow(integer_1.get_value(),integer_2.get_value()) ));
}

template<class T>
bool operator >(T &integer_1,T &integer_2){
    if(integer_1.get_value() > integer_1.get_value() ) return true;
    else return false;
}

template<class T>
bool operator >=(T &integer_1,T &integer_2){
    if(integer_1.get_value() >= integer_1.get_value() ) return true;
    else return false;
}

template<class T>
bool operator <(T &integer_1,T &integer_2){
    if(integer_1.get_value() < integer_1.get_value() ) return true;
    else return false;
}


template<class T>
bool operator <=(T &integer_1,T &integer_2){
    if(integer_1.get_value() <= integer_1.get_value() ) return true;
    else return false;
}

template<class T>
bool operator !=(T &integer_1,T &integer_2){
    if(integer_1.get_value() != integer_1.get_value() ) return true;
    else return false;
}


template<class T>
bool operator ==(T &integer_1,T &integer_2){
    if(integer_1.get_value() == integer_1.get_value() ) return true;
    else return false;
}


template <class T>
class Number{
private:
    T value;
public:
    Number(T value){
        this->value=value;
    }

    T get_value(){
        return value;
    }

};






};


namespace ejercicio6{

};








#endif