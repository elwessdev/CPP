#include <iostream>
using namespace std;

// Factorial with recursive
int factorial(int n){
    cout<<"Function call: factorial("<<n<<")\n";
    if(n==1)
        return 1;
    return factorial(n-1)*n;
}

// Print a Triangle (v1) [reverse]
int a=1;
void print_triangle(int n){
    int a=1;
    if(a==n)
        return;
    for(int i=0;i<a;i++)
        cout<<"*";
    cout<<"\n";
    print_triangle(a++);
}

int main()
{
//-------- Homework --------
// Factorial with recursive
//    cout<<factorial(6);

// Print a Triangle (v1)
    print_triangle(5);





    return 0;
}
