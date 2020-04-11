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

    ~Integer(){};

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
    ~Number(){};

    T get_value(){
        return value;
    }

};


};


namespace ejercicio6{
    
namespace utec{

    template<class T>//psdt : No lo mantuve como int por practicar.
    class vector{
        private:
        int t_size;
        T* v_1;
        public:
            vector(){
                t_size=1;
                v_1 = new T[t_size];
            };

            vector(const ejercicio6::utec::vector<T>& v_vector){
                v_1 = v_vector.v_1;
                t_size = v_vector.t_size;
            }

            vector(int size){
                t_size=size;
                v_1 = new T[t_size];        
            }

            vector<T>& operator = (const vector<T> &t){ 
                return *this; 
            } 

            ~vector(){
                delete []v_1;
            }

            T* get_vector()const{
                return v_1;
            }


            void push_back(T element){
                T* v_2 = new T[t_size+1];
                int cnt=0;
                for(int i=0;i<t_size-1;i++){
                    v_2[i] = v_1[i];
                    cnt++; 
                }

                v_2[cnt] = element;
                t_size=t_size+1;

                v_1 = new T[t_size-1];

                for(int i=0;i<t_size-1;i++){
                    v_1[i] = v_2[i];
                }
                
                delete []v_2;
            }

            void pop_back(){
                T* v_2 = new T[t_size-1];
                int cnt=0;
                for(int i=0;i<t_size-2;i++){
                    v_2[i] = v_1[i];
                    cnt++; 
                }
                t_size = t_size -1;
                v_1= new T[t_size];
                for(int i=0;i<t_size-1;i++){
                    v_1[i] = v_2[i];
                }

                delete []v_2;
            }

            void insert(int position,T element){
                T* v_2 = new T[t_size+1];
                bool into=false;
                for(int i=0;i<t_size;i++){
                    if(position==i || into){
                        if(position==i){
                            v_2[i] = element;
                            into=true;
                        }
                        else{
                            v_2[i] = v_1[i-1];
                        }
                    }
                    else{
                        v_2[i] = v_1[i];
                    }
                }

                t_size = t_size+1;

                v_1 = new T[t_size];
                for(int i=0;i<t_size-1;i++){
                    v_1[i] = v_2[i];
                }
                delete []v_2;
            }

            void erase(int position){
                T* v_2 = new T[t_size];
                bool into=false;

                for(int i=0;i<t_size-2;i++){
                    if(position==i || into){
                        if(position==i){
                            into=true;
                            v_2[i]=v_1[i+1]; 
                        }
                        else{
                            v_2[i]=v_1[i+1];
                        }
                    }
                    else{
                        v_2[i]=v_1[i];
                    }
                }
                t_size = t_size -1;

                v_1 = new T[t_size];
                for(int i=0;i<t_size-1;i++){
                    v_1[i] = v_2[i];
                }
                delete []v_2;
            }


            //plus
            T at(T element){
               return v_1[element];
            }

            int size()const{
                return t_size-1; 
            }


    };

    template<class T>
    void print_vector(vector<T> &v_1){
        for(int i=0;i<v_1.size();i++){
            cout<<v_1.at(i)<<endl;
        }
    }

    template<class T>
    vector<T> operator +(vector<T> &v_1,vector<T> &v_2){
        int new_size=(v_1.size() + v_2.size())-1;

        vector<T> v_3(new_size-1);
        for(int i=0;i<new_size-2;i++){
            if(i < v_1.size()){
                v_3.push_back(v_1.at(i));
            }
            else if( (i>= v_1.size())  && (i< v_2.size()) ){
                v_3.push_back(v_2.at(i));
            }
        }

        return v_3;
    } 


};

};








#endif