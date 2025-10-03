#include <iostream>
using namespace std;

int main(void){
    
    float numsecreto = 9;
    float numsec = 0;
    
    do
    {
    cout << "Ingrese el número secreto" <<endl;
    cin >>numsec;
    if (numsec > numsecreto)
    cout << "El numero" "" << numsec << "" "Es mayor al numero secreto" << endl;
    else if (numsec < numsecreto)
    {
    cout << "Numero es menor al numero secreto"<<endl;
    }

    }while (numsec != numsecreto);  
    return 0;
}