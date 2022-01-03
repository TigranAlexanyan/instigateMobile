#include <iostream>


void printArr(int[],int,int);
int sum(int[],int,int);
void lineMaxValue(int[],int,int);

int main(){
   int n = 0;
   int m = 0;
   std::cout << "Enter n size: ";
   std::cin >> n;
   std::cout << "Enter m size: ";
   std::cin >> m;
  /* int** a = new int*[n];
 
   for (int i = 0; i < n; i++){
       a[i] = new int[m];
   }


   for (int i = 0; i < n; i++) {
     for (int j = 0; j < m; j++) {
         std::cout << "Enter values: ";
         std::cin >> a[i][j];
     }
       std::cout << std:: endl;
   }*/
   int a[n][m] = {{0},{0}}
 
   printArr(a);
   std:: cout << "Sum: " << sum(a) <<"\n";
   lineMaxValue(a);
}

void printArr(int arr[n][m]){
   for(int i = 0;i<n;i++){
      for(int j = 0;j<m;j++){
         std::cout << arr[i][j] <<"\n";
      }
   }
}


int sum(int arr[n][m]){
    int sum = 0;
    for(int i = 0;i<n;i++){
     for(int j = 0;j<m;j++){
         sum+=arr[i][j];
      }
    }
    return sum;
}

void lineMaxValue(int arr[n][m]){
   int maxValue = arr[0][0];
   for(int i = 0;i < n;i++){
     for(int j = 0;j <m;j++){
        if(maxValue < arr[i][j]) {
            maxValue = arr[i][j];
        }
     }
     std:: cout <<"Max value of line " << maxValue << "\n";
   }
}

