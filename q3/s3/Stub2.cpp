#include "ProxyA.hpp"

#include <iostream>

int main()
{
    ProxyA p0;
    ProxyA p1;

    int x=0;
    for(int i=0; i<10; i++){
        if(i&1){
            p0.hhh("4");
        }else{
            p1.hhh("7");
        }
        
        p0.ggg();
        cout << x << " " << p0.fff() << " " << p1.fff() << endl;
    }
}
