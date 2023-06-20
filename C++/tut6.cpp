#include<iostream>
// There are two types of header files
//1. System header files: comes with the compiler
//2. User defined header files : it is wriiten ny the programmer
//include "this.h" //--> This will produce an error if this.h is not present in the current directory
#include"this.h"
//"this.h" is an example
using namespace std;

int main(){
    int a=4 ,b=5 ;
    cout<<"operators in c++:"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    // Arithematic operators
    cout<<"The value of a + b is " <<a+b<<endl; 
    cout<<"The value of a - b is " <<a-b<<endl;
    cout<<"The value of a * b is " <<a*b<<endl;
    cout<<"The value of a / b is " <<a/b<<endl;
    cout<<"The value of a % b is " <<a%b<<endl;
    cout<<"The value of a + + is " <<a++<<endl;
    cout<<"The value of a - - is " <<a--<<endl;
    cout<<"The value of ++a is " <<++a<<endl;
    cout<<"The value of --a is " <<--a<<endl;
    cout<<endl;

    //assigment operators --> used to assign values to variables
    //int main(){
    // int a=3 , b=5;
    // char d='d';

    //comparison opreators
    cout<<"Following are the types of comparison operators"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<endl;
    
    //Logical operators
    cout<<"Following are the types of logical operators"<<endl;
    cout<<"The value of logic and operator ((a==b) && (a<b))  is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of logic or operator ((a==b) || (a<b))   is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of logic not operator (!(a==b) || (a<b)) is "<<(!(a==b) || (a<b))<<endl;
    
    

    return 0;
}


