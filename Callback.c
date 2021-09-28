/*

There is no specific term called Callback in C.
It can be simply achieved through function pointers/

Funtion Pointers : It holds the address of another function

*/



#include <stdio.h>
void disp();

int main() {
    callback(&disp); // passing disp function address
}
   
void callback(void (*ptr)()){
    printf("Hello Below line was called from a fucntion\n");
    (*ptr)(); // here disp funtion is being called 
              //  ptr = formal paramter , disp = actual parameter
    
}

void disp(){
    printf("Hello im from disp func");
}