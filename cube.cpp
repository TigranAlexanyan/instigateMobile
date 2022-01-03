#include <iostream>

void printCube(int[3][3],int);
//int rotateCube(int,int);

int main(){
   int n = 0;
   std::cout << "Enter number: ";
   std::cin >> n; 
   int arr[3][3] = { 
             {1,2,3},
             {4,5,6},
             {7,8,9}
           };
  printCube(arr,n);
 // rotateCube(arr,n)
}


void printCube(int arr[3][3],int n){
  for(int i = 0;i<3;i++){
     for(int j = 0;j<3;j++){
        /* if(i % 4 == 0 && j % 4 == 0){
            int t = arr[0][0];
            int c = arr[0][2];
            arr[i][j] = arr[i+2][j];
            arr[i+2][j] = arr[i+2][j];
             
            arr[i][j+2] = t;
            arr[i+2][j-2] = c; 
         }*/
          int temp = arr[i][j];
          arr[i][j] = arr[j][2-i];
          
          //arr[2-i][j] = arr[j][i];
          arr[2-j][i] = temp;
         // arr[i][j] = 

          std::cout << arr[i][j] <<" ";
     }
     std::cout <<"\n";
  }
}

//int rotateCube(int i,int j){
  // for(int i = 0;i<3;i++){
   //  for(int j = 0;j<3;j++){
      //  std::cout << arr[i][j] <<" ";
    // }
    // std::cout <<"\n";
 // }
 // int x = 0;
  
  //return  i = j;
//}


