#include <iostream>

int findElemIndex(int[],int,int);

int main(){
  int el = 0;
  std::cout << "Enter number: ";
  std::cin >> el; 
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(int);
  std::cout << findElemIndex(arr,el,size) <<"\n";
}

int findElemIndex(int arr[],int el,int size){ 
   for(int i=0;i<size;i++){
      if (arr[i] == el) {
         return i;
      }
   }
   return -1;
}




