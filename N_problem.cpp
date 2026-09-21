==============================================================================================
// Print Hello, World!
==============================================================================================
#include<iostream>
using namespace std;

int main(){
    cout<<"Hello, World!" << endl;
}
==============================================================================================
// Print your name, age, and student ID.
#include<iostream>
#include<string>
using namespace std;

int main(){
    int age, id;
    string name;
    name = "Musa";
    age = 20;
    id = 24;
    cout<<"Name: "<<name<<endl;
    cout<<"age: " <<age<<endl;
    cout<<"ID: "<<id<<endl;
}
==============================================================================================
// Take two numbers and find their sum.
==============================================================================================
#include<iostream>
#include<string>
using namespace std;

int main(){
    int a, b, c;
    a = 5;
    b = 7;
    c = a + b;
    cout<<"First number: " <<a<<endl;
    cout<<"Secend number: "<<b<<endl;
    cout<<"Sum of two numbers: " << c <<endl;
}
==============================================================================================
// Take two numbers and perform +, -, *, /, and %.
==============================================================================================
#include<iostream>
#include<string>
using namespace std;

int main(){
    int a, b, c, add, sub, mul, div, mod;
    a = 12;
    b = 3;
    c = 14;
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = c % b;
    cout<<"First number: " <<a<<endl;
    cout<<"Secend number: "<<b<<endl;
    cout<<"Third number: "<<c<<endl;
    cout<<"add of two numbers: " << add <<endl;
    cout<<"sub of two numbers: " << sub <<endl;
    cout<<"mul of two numbers: " << mul <<endl;
    cout<<"div of two numbers: " << div <<endl;
    cout<<"Modulus of two numbers: " << div <<endl;
}
==============================================================================================
// Find the square and cube of a number.
==============================================================================================
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int a, sqr, cube;
    a =6;
    sqr = pow(a, 2);
    cube = pow(a, 3);
    cout<<sqr<<endl;
    cout<<cube<<endl;
}
==============================================================================================
// Calculate the area of a circle.
==============================================================================================
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    // A = pi*(r*r)
    float A, pi, r;
    pi = 3.14159;
    r = 5;
    A = pi*(r*r);
    cout<<"Area of circle: "<<A<<endl;
}
==============================================================================================
==============================================================================================
==============================================================================================
==============================================================================================
==============================================================================================
==============================================================================================
