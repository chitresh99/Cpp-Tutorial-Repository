#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    //int a = 35;
    //char c = '4';
    //cout<<"The value of a was: "<<c;
    //a = 45; 
    //c = '4';
    //const int a = 3;
    //cout<< "The value of a is "<<a<<endl;
    //a = 45; // You will get an error because a is a constant
    //cout<< "The value of a is "<<a<<endl;

    // Manipulators in C++
    //int a = 3, b = 78, c = 4000;
    //cout<<"The value of a without setw is:"<<a<<endl;
    //cout<<"The value of b without setw is:"<<b<<endl;
    //cout<<"The value of c without setw is:"<<c<<endl;

    //cout<<"The value of a is: "<<setw(4)<<a<<endl;
    //cout<<"The value of b is: "<<setw(4)<<b<<endl;
    //cout<<"The value of c is: "<<setw(4)<<c<<endl;
   

    // Operator Precedence
    int a = 3 ,b = 4;
    //int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
}