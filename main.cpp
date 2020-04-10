#include "ejercicios.cpp"

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
    
}

int main(){

    ejercicio_5();




    return 0;
}
