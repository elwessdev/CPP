#include <iostream>
using namespace std;

int main_DataTypes()
{
    /*-- Homework 1 - Easy ---*/
    //=> Problem 1
    /*double a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " * " << b << " = " << a * b << endl;*/

    //=> Problem 2
    /*string studentName1,studentName2;
    int studentID1,studentID2;
    double MathGrade1,MathGrade2;
    cout << "What's student 1 name: "; cin >> studentName1;
    cout << "His ID: "; cin >> studentID1;
    cout << "His math exam grade: "; cin >> MathGrade1;
    cout << "What's student 2 name: "; cin >> studentName2;
    cout << "His ID: "; cin >> studentID2;
    cout << "His math exam grade: "; cin >> MathGrade2;
    cout << "\nStudents grades in math" << endl;
    cout << studentName1 << " (with ID " << studentID1 << " ) got grade: " << MathGrade1 << endl;
    cout << studentName2 << " (with ID " << studentID2 << " ) got grade: " << MathGrade2 << endl;
    cout << "Average grade is " << (MathGrade1 + MathGrade2) / 2;*/

    //=> Problem 3
    /*int n1,n2,n3,n4,n5,n6,n7,n8;
    cin >>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8;
    cout << n2+n4+n6+n8 << " for the even places" << endl;
    cout << n1+n3+n5+n7 << " for the odd places" << endl;*/


    /*-- Homework 2 - Medium ---*/
    //=> Problem 1
    /*int num1, num2, num3;
    num1 = 0, num2 = 1, num3 = num1+num2, cout << num3 << endl;
    num1 = num2, num2 = num3, num3 = num1+num2, cout << num3 << endl;
    num1 = num2, num2 = num3, num3 = num1+num2, cout << num3 << endl;
    num1 = num2, num2 = num3, num3 = num1+num2, cout << num3 << endl;
    num1 = num2, num2 = num3, num3 = num1+num2, cout << num3 << endl;
    num1 = num2, num2 = num3, num3 = num1+num2, cout << num3 << endl;
    num1 = num2, num2 = num3, num3 = num1+num2, cout << num3 << endl;
    num1 = num2, num2 = num3, num3 = num1+num2, cout << num3 << endl;
    num1 = num2, num2 = num3, num3 = num1+num2, cout << num3 << endl;*/

    //=> Problem 2
    /*int num1, num2, num3;
    cin >> num1>>num2;
    cout << "Before swap:" << endl;
    cout << num1 << " " << num2 << endl;
    cout << "After swap:" << endl;
    num3=num1;
    num1=num2;
    num2=num3;
    cout << num1 << " " << num2 << endl;*/

    /*-- Homework 3 - Hard ---*/
    //=> Problem 1
    /*int a,b,c,temp = -1;
    cin >> a >> b >> c;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    temp = a;
    a = b;
    b = c;
    c = temp;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;*/

    // Problem 2
    /*int a, b;
    cin >> a >> b;
    b == -1 ? cout << 2*a+1 :cout << a*a;*/

    // Problem 3
    int n;
    cin >> n;
    cout << n * (n+1) / 2;











    // End
    return 0;
}
