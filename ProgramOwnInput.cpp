#include <iostream>
using namespace std;


//30

class MainClass{

int a=0;
int b=0;


public:

friend void FriendFunction(MainClass &);
void Display() {
    cout << "a = 0 after change " << a << " , b = 0 After Change " << b << endl;

}
};


 void FriendFunction( MainClass &change) {

   
 

  
change.a = 10;
change.b = 20;

    

 }   

 int main() {

    MainClass m1;

    FriendFunction(m1);
   
m1.Display();

    return 0;
}
