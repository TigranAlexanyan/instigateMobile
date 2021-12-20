#include <iostream>

void fun(int[], int);

int main(){
   int arrNum[] = {10,20,30,40,50};
   int arrSize = sizeof(arrNum)/sizeof(int);
   fun(arrNum, arrSize);
}


void fun(int arrNum[], int size){
   for (int i=0; i<size; i++){
     std::cout << arrNum[i] <<"\n";
   }
}

