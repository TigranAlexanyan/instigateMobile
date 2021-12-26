#include <iostream>

int strLength(char[]);
void strCopy(char[],char[],int);

int main(){
  char str1[8];
  char str2[8] = "hello";
  int n = 0;
  std::cout << "Please enter number: ";
  std::cin >> n;
  strLength(str2);
  strCopy(str1,str2,n);
}

int strLength(char str2[]){
   int length = 0;
   while(str2[length] != '\0'){
       ++length;
   }
   return length;
}

void strCopy(char str1[],char str2[],int n){
   int length = strLength(str2);
   for(int i = 0;i<length;i++){
       if((i+1) <= n){
          str1[i] = str2[i];
          std::cout << str1[i];
       }
   }
  std::cout <<"\n";
}







