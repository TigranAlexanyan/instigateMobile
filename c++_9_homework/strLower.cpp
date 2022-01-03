#include <iostream>

using namespace std;

int strlen(char *);
char *swap(char *);
char *LowerStr(char *);

int main(){
  char str[8] = "HELLO";
  cout << swap(str) <<"\n";
  cout << LowerStr(str) <<"\n";
}

int strlen(char* str){
   int length = 0;
   while(str[length] != '\0'){
       ++length;
   }
   return length;
}

char *swap(char* str){
  int length = strlen(str);
 for(int i = 0;i<length/2;i++){
     char ch = str[i];
     str[i] = str[length - i -1];
     str[length - i -1] = ch;
 }
  return str;
}

char *LowerStr(char* str){
  int length = strlen(str); 
  for(int i = 0; i< length;i++){
  if(str[i] >='A' && str[i] <= 'Z'){
      str[i] = str[i] + 32; 
  }
 }  
  return str;
}

