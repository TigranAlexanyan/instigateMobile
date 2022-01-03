#include <iostream>

void printArr(int[],int);
void changeArr(int[],int);
void printChangeArr(int[],int);

int main(){
   int numArr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   int arrSize = sizeof(numArr)/sizeof(int);
   changeArr(numArr,arrSize);
   printChangeArr(numArr,arrSize);
}


void changeArr(int arr[],int size){
   for(int i = 0;i < size; i++){
      if (i % 4 == 0) {
         arr[i+3] = 100;  
      }
   } 
}

void printChangeArr(int arr[], int size){
   for(int i = 0;i<size;i++){
     std::cout << arr[i] <<"\n";
   }
}


