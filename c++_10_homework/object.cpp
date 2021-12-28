#include <iostream>

struct Person {
    std::string name;
    int age;
    char gender;

    void setName(char n[20]){
     for(int i = 0;i<20;i++){
       name = n;
     }
    }

    void setAge(int a){
       if(a <= 0){
          std::cout << "Enter positive age: ";
          std:: cin >> a;
       } else {
         age = a;
       }
    }

    void setGender(char g){
      if(g == 'f' || g == 'm'){
          gender = g;
      }else {
        std::cout << "Enter m or f gender: ";
        std::cin >> g;
        std::cout <<"\n";
      }
      gender = g;
    }

    void getName(){
       std::cout << "My name is " << name <<"\n";
    };

    void getAge(){
      std::cout << "My age is " << age <<"\n";
    }; 

    void getGender(){ 
       std::cout << "My gender is " << gender <<"\n"; 
    };    
 
};

int main(){
   char n[20]; 
   int a;
   char g;
   Person p = Person();
   std::cout << "Enter your name: ";
   std::cin >> n;  
   p.setName(n);
   std::cout << "Enter your age: ";
   std:: cin >> a;
   p.setAge(a);
   std:: cout << "Enter your gender: ";
   std:: cin >> g;
   p.setGender(g);
   p.getName();
   p.getAge();
   p.getGender();
}


