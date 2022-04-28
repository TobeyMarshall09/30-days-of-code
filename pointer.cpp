#include<iostream>
using namespace std;
class student
{
    public:
    int a;
   void show(){
    cout<<"a is "<<a<<endl;
   }     
};
int main()
{
    student p1, *x;
    x=&p1;
    p1.show();
    &student::a;
    x->a=10;
    p1.show();
    x->a=20;
    x->show();
}
