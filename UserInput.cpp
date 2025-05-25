#include <iostream>
using namespace std;


//30

class MainClass{

int a=0;
int b=0;


public:

friend void FriendFunction(MainClass &, int, int);
void Display() {
    cout << "a = 0 after change " << a << " , b = 0 After Change " << b << endl;

}
};


 void FriendFunction( MainClass &change, int x, int y) {

   
 

  
change.a = x;
change.b = y;

    

 }   

 int main() {

    MainClass m1;

    FriendFunction(m1,5,6); //Here we can add User Input Taker.
   
m1.Display();

    return 0;
}


//Oh My God < I really Can't believe I made it and its working just fine
