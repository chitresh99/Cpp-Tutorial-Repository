#include<iostream>

using namespace std;
int glo=6;
void sum(){
    int a;
    cout<< glo;
}

int main(){
    int glo=9;
    glo=78;
   // int a=4;
   // int b=5;
   int a=4 , b=5;
   float pi=3.14;
   char c='d';
   bool is_true = true;
    sum();
    cout<<glo<< is_true;
    // cout<<"This is tutorial 4.Here the value of a is "<<a<<".\nThe value of b is "<< b ;
    // cout<<"\n The value of pi is: "<<pi;
    // cout<<"\n The value of c is :"<<c;
    return 0;
}