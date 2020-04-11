#include "ejercicios.cpp"

using namespace ejercicio6;

void ejercicio_5(){
    ejercicio5::Integer integer1(5);
    ejercicio5::Integer integer2(8);

    integer1+=integer2;
    integer1.print_value();

    integer1 = integer1 - integer2;
    integer1.print_value();
    
    integer2 -= integer1;
    integer2.print_value();
    
    integer1 = integer1 * integer2;
    integer1.print_value();
    
    integer1 *=integer2;
    integer1.print_value();
    
    integer1 = integer1 / integer2;
    integer1.print_value();
    
    integer1 = integer1 ^ integer2;
    integer1.print_value();
    //los demas valores booleanos asi que son obvios

}

void ejercicio_6(){
    utec::vector<int> v_1;

    v_1.push_back(5);
    v_1.push_back(80);
    v_1.push_back(34);
    v_1.push_back(67);
    v_1.push_back(45);
    utec::print_vector(v_1);
    cout<<endl;     
    v_1.pop_back();
    v_1.pop_back();
    utec::print_vector(v_1);
    cout<<endl;
    v_1.insert(0,30);
    v_1.insert(3,12);
    utec::print_vector(v_1);
    cout<<endl;
    v_1.erase(2);
    utec::print_vector(v_1);

    utec::vector<int> v_2 = v_1;// es lo mismo que vector<int> v_2(v_1)
    cout<<endl;

    utec::print_vector(v_2);


    v_1 = v_1 + v_2;

    utec::print_vector(v_1);


    
}

int main(){


    ejercicio_6();


    return 0;
}
