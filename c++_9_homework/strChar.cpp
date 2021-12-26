#include <iostream>

int strLength(char[]);
char *strChr(char[],char);

int main(){
  char str[8] = "hello";
  char c;
  std::cout << "Please enter char: ";
  std::cin >> c;
  std::cout << strChr(str,c) <<"\n";
} 


int strLength(char str[]){
    int length = 0;
    while(str[length] != '\0'){
         ++length;
    }
   return length;
}

char *strChr(char *str,char c){
   int length = strLength(str);
   for(int i = 0;i<length;i++){
      if(str[i] == c){
        return &str[i];
      }
   } 
}







