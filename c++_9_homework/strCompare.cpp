#include <iostream>

bool strCompare(char[],char[]);

int main(){
  char str[8] = "hello";
  char str1[8] = "helLo";
  std::cout << strCompare(str,str1) <<"\n";;
}

int strLength(char str[]){
    int length = 0;
    while(str[length] != '\0'){
        ++length;
    }
   return length;
}

bool strCompare(char str[],char str1[]){
 int length = strLength(str);
  for(int i = 0;i<length;i++){
   if(str[length] == str1[length]
      && str[i]>='a' && str[i]<='z'
      && str1[i]>='a' && str1[i]<='z' ||
      str[length] == str1[length]
      && str[i]>='A' && str[i]<='Z'
      && str1[i]>='A' && str1[i]<='Z'
   ){
     return 1;
   }else{
     return 0;
   }
 }
  return 0;
}
