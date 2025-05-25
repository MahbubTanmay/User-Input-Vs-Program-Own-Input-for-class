#include <iostream>
using namespace std;


//30

class MainClass{

int a=0;
int b=0;


public:

friend MainClass FriendFunction();
void Display() {
    cout << "a = 0 after change " << a << " , b = 0 After Change " << b << endl;

}
};


 MainClass FriendFunction() {

   
  MainClass change;

  
change.a = 10;
change.b = 20;         //U can make program to input for u 

    return change;

 }   

 int main() {

    MainClass m1;

    m1 = FriendFunction();
   
m1.Display();

    return 0;
}
