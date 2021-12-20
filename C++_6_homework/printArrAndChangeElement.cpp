#include <iostream>

void printArr(int[],int);

int main(){
   int numArr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   int arrSize = sizeof(numArr)/sizeof(int);
   printArr(numArr,arrSize);
}


void printArr(int arr[],int size){
   for(int i = 0;i < size; i++){
      if (i % 4 == 0) {
         arr[i+3] = 100;  
      }
      std::cout << arr[i] <<"\n";
   } 
}




