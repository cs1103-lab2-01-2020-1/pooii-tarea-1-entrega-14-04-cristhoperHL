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
    //los demas valores booleanos son obvios

}

void ejercicio_6(){
    utec::vector<int> v_1;

    v_1.push_back(5);
    v_1.push_back(80);
    v_1.push_back(34);
    v_1.push_back(67);




    utec::print_vector(v_1);
     
}

int main(){


    ejercicio_6();


    return 0;
}
