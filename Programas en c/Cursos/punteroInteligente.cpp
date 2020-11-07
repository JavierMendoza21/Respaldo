
#include <iostream>
#include <memory>
using namespace std;

struct cadenaN{
    int n=5;
    float  f=4*5;
};


int main(void){
    cout<<"Hola mundo"<<endl;
    unique_ptr<cadenaN> cadena(new cadenaN);
    cout<<cadena->n<<endl;
    cout<<cadena->f<<endl;

    return 0;
}
