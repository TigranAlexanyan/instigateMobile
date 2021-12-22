#include <iostream>


void printArr(int *[],int,int);
int sum(int *[],int,int);
void lineMaxValue(int *[],int,int);

int main(){
   int n = 3;
   int m = 4;
   std::cout << "Enter n size: ";
   std::cin >> n;
   std::cout << "Enter m size: ";
   std::cin >> m;
   int** a = new int*[m];
 
   for (int i = 0; i < m; i++){
       a[i] = new int[n];
   }


   for (int i = 0; i < m; i++) {
     for (int j = 0; j < n; j++) {
         std::cout << "Enter values: ";
         std::cin >> a[i][j];
     }
        std::cout << std:: endl;
   }
 
   printArr(a,n,m);
   std:: cout << "Sum: " << sum(a,n,m) <<"\n";
   lineMaxValue(a,n,m);
}

void printArr(int *arr[],int n, int m){
   for(int i = 0;i<n;i++){
      for(int j = 0;j<m;j++){
         std::cout << arr[i][j] <<"\n";
      }
   }
}


int sum(int *arr[],int n, int m){
    int sum = 0;
    for(int i = 0;i<n;i++){
     for(int j = 0;j<m;j++){
         sum+=arr[i][j];
      }
    }
    return sum;
}

void lineMaxValue(int *arr[],int n,int m){
   int maxValue = arr[0][0];
   for(int i = 0;i < n;i++){
     for(int j = 0;j <m;j++){
        if(maxValue < arr[i][j]){
            maxValue = arr[i][j];
        }
     }
     std:: cout <<"Max value of line " << maxValue << "\n";
   }
}

