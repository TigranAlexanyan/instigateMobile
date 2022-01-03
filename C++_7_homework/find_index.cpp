#include <iostream>

int getMaxElemIndex(const int*,unsigned int);
int getMaxElem(const int*,unsigned int);

int main(){
  int arr[] = {10,12,13,14,18};
  int size = sizeof(arr)/sizeof(int);
  std::cout << getMaxElemIndex(arr,size) <<"\n";
  std::cout << getMaxElem(arr,size) <<"\n";
}

int getMaxElemIndex(const int * arr,unsigned int size){
   int maxIndex = 0;  
   for(int i=1;i<size;i++){
      if (arr[i] > arr[maxIndex]) {
          maxIndex = i;
      }
   }
   return maxIndex;
}

int getMaxElem(const int * arr,unsigned int size){
    int maxElem = arr[0];
    for(int i = 1;i<size;i++){
       if (arr[i] > maxElem){
           maxElem = arr[i];
       }
    }
    return maxElem;
}


