#include <iostream>

void swap(int*,int*);
void sort(int[],int);
void printArr(int[],int);

int main(){
   int arr[] = {5,2,6,3,4,1};
   int size = sizeof(arr)/sizeof(int);
   sort(arr,size);
   printArr(arr,size);
}

void sort(int arrSort[],int size){
  for(int i = 0; i < size; i++){
   for(int j = 0; j < size-1; j++){
    if(arrSort[j] > arrSort[j+1]){
        swap(&arrSort[j],&arrSort[j + 1]);
    }
  }
 }
}


void swap(int* pa,int* pb){
    int c = *pa;
    *pa = *pb;
    *pb = c;
}

void printArr(int arr[],int size){
   for(int i = 0; i < size; i++){
      std:: cout << arr[i] <<"\n";
   }
}
