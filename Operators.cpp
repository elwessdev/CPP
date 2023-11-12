#include <iostream>
using namespace std;

int main_Oper()
{
    //=> Problem 1
//    int a = 0, b = 1;
//    cout << a++ << endl;
//    cout << ++a << endl;
//    a += 2*b+1;
//    b = ++a * 2;
//    cout << a << " " << b << endl;
//    b = a;
//    a = 12 + a / 3 / 2 - 2*2;
//    cout << a << endl;
//    a = b;
//    a = ((12+a)/3/2-2)*2;
//    cout << a << endl;

    //=> Problem 2
//    int a=1,b=1,c;
//    cout << (c = a+b, a=b, b=c,
//             c = a+b, a=b, b=c,
//             c = a+b, a=b, b=c,
//             c = a+b, a=b, b=c) << endl;

    //=> Problem 3
//    int a=10,b=20;
//    cout << a++ + ++b << endl;
//    a += 10;
//    cout << a << endl;

    /*------ Homework 2 ------*/
    //=> Problem 1
//    int nb,ng,nt;
//    cout << (nb>25) << endl;
//    cout << (ng <= 30) << endl;
//    cout << (nb > 20 && nt > 2 || ng > 30 && nt > 4) << endl;
//    cout << (nb < 60 || ng < 70) << endl;
//    cout << (nb - ng >= 10) << endl;
//    cout << (nb - ng >= 10 || ng - ng >= 10 || nt > 5) << endl;
//    cout << (int)'a' << endl;


    /*------ Homework 3 ------*/
    //=> Problem 1
//    double a,b,c,e,d;
//    cin >> a >> b >> c >> d >> e;
//    cout << "Their average: " << (a+b+c+d+e) / 5 << endl;
//    cout << "The sum of first 3 nums / last 2 nums: " << (a+b+c) / (d+e) << endl;
//    cout << "The average of first 3 nums / average last 2 nums: " << ((a+b+c)/3) / ((d+e)/2) << endl;

    //=> Problem 2
//    float a,b;
//    cin >> a >> b;
//    cout << (a/b) - (int) (a/b)<< endl;

    //=> Problem 3
//    int a,b;
//    cin>>a>>b;
//    cout<<a-(a/b)*b << " " << a%b<<endl;


/*------ Homework 4 ------*/
//  Problem 1
//    int a;
//    cin>>a;
//    bool is_even1= (a%2 == 0);
//
//    double by2 = (double) a / 2.0;
//    by2 -= (int)by2;
//    bool is_even2 = by2 == 0;
//
//    int last_digit = a % 10;
//
//    bool is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;
//
//    cout << is_even1 << " " << is_even2 << " " << is_even3 << endl;

//  Problem 2
//    int n; cin>>n;
//
//    int last1=n%10;
//    n/=10;
//    int last2=n%10;
//    n/=10;
//    int last3=n%10;
//    n/=10;
//
//    cout<<last1+last2+last3<<endl;

//  Problem 2
//    int n; cin>>n;
//    cout << (n / 1000) % 10 << endl;

/*------ Homework 5 ------*/
//  Problem 1
//    int n; cin >> n;
//    bool even_odd = n%2 == 0;
//    cout << (even_odd*93)+7<< endl;

//  Problem 2
    int n,y,m,d;
    cin>>n;

    y = n / 360;
    n %= 360;
    m = n / 30;
    d = n % 30;

    cout << y << "-" << m << "-" << d << endl;





    // End
    return 0;
}
