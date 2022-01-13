#include <iostream>
using namespace std;

template <typename S>
struct Student {
   int age;
   int mark;
   Student<S> *next;
};

template <typename S>
class ClassRoom {
     private:
       Student<S> *head;
     public:
       ClassRoom(){
          head = NULL;
       } 
       void addStudent(){
          int a;
          int m;
          cout << "Enter your age: ";
          cin >> a;
          cout << "Enter your mark: ";
          cin >> m;
          Student<S> *st = new Student<S>();
          st->age = a;
          st->mark = m;
          if(head == NULL){
             st->next = NULL;
             head = st;
          } else {
             Student<S> *temp = head;
             while(temp->next != NULL){
                 temp = temp->next;
             }
             temp->next = st;
          }          
       }

       void printStudent(){
          Student<S> *cur = head;
          while(cur){
          cout <<"Age: " << cur->age <<" "
                    << "Mark: " << cur->mark <<"\n";
              cur = cur->next;
          }
       }
};

int main(){
    int size = 0;
    cout << "Enter size: ";
    cin >> size;
 
    ClassRoom<int> student[size];

    for(int i = 0;i < size; i++){
       student[i].addStudent();
    }    
   
    for(int i = 0;i< size; i++){
        student[i].printStudent();
    }

}


