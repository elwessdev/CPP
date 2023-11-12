#include <iostream>
using namespace std;

int main_selec()
{
/*-- Homework 2 ---*/
// Problem 1
//    double a,b;
//    char op;
//    cout<<"enter first number: "; cin>>a;
//    cout<<"enter second number: "; cin>>b;
//    cout<<"enter operation: "; cin>>op;
//    switch(op){
//        case '+':
//            cout << a << " + " << b << " = " << a+b << endl;
//            break;
//        case '-':
//            cout << a << " - " << b << " = " << a-b << endl;
//            break;
//        case '*':
//            cout << a << " * " << b << " = " << a*b << endl;
//            break;
//        case '/':
//            cout << a << " / " << b << " = " << a/b << endl;
//            break;
//        default:
//            cout << "Please enter correct operation :)" << endl;
//            break;
//    }

// Problem 2
//    int a,b;
//    cin>>a>>b;
//    if(a>b){
//        cout << a;
//    } else{
//        cout << b;
//    }

// Problem 3
//    int a,b;
//    cin>>a>>b;
//    if(a<b){
//        cout << a;
//    } else{
//        cout << b;
//    }

// Problem 4
//    int n; cin>>n;
//    if(n%2==0){
//        cout << n%10 << endl;
//    } else if(n < 1000){
//        cout << n%100 << endl;
//    } else if (n > 1000 && n < 1000000){
//        cout << n%10000 << endl;
//    } else {
//        cout << -n << endl;
//    }

// Problem 5
//    int n; cin>>n;
//    if(n<10000){
//        cout<<"this a small number";
//    } else {
//        int last1,last2,last3;
//        last1=n%10;
//        n/=10;
//        last2=n%10;
//        n/=10;
//        last3=n%10;
//        int sum = last1+last2+last3;
//        if(sum % 2 != 0){
//            cout << "This a great number";
//        } else {
//            if(last1%2!=0 || last2%2!=0 || last3%2!=0){
//                cout << "This a good number";
//            } else {
//                cout << "This is a bad number";
//            }
//        }
//    }

// Problem 6
//    int a,b; cin>>a>>b;
//    if(a%2!=0&&b%2!=0){
//        cout << a*b;
//    } else if (a%2==0&&b%2==0){
//        cout << a/b;
//    } else if (a%2!=0&&b%2==0){
//        cout << a+b;
//    } else if (a%2==0&&b%2!=0){
//        cout << a-b;
//    }

// Problem 7
//    int a,b,c,temp;
//    cin >>a>>b>>c;
//    if(a > b){
//        temp = a;
//        a = b;
//        b = temp;
//    }
//    if(b > c){
//        temp = b;
//        b = c;
//        c = temp;
//        if(b < a){
//            temp = b;
//            b = a;
//            a = temp;
//        }
//    }
//    cout<<a<<b<<c;

// Problem 8
//    int a,b,c; cin>>a>>b>>c;
//    int s = a;
//    if(b < 100 && b > s){
//        s = b;
//    } else if(c < 100 && c > s){
//        s = c;
//    } else if(a > 100){
//        s = -1;
//    }
//    cout << s;

// Problem 9
//    int x; cin>>x;
//    int a,b,c,d,e; cin>>a>>b>>c>>d>>e;
//    int cnt = 0;
//    cnt += (a<=x);
//    cnt += (b<=x);
//    cnt += (c<=x);
//    cnt += (d<=x);
//    cnt += (e<=x);
//    cout << "<= is " << cnt << endl;
//    cout << "> is " << 5 - cnt << endl;

/*-- Medium Challenges ---*/
// Problem 1
//    int n,x;
//    cin>>n;
//    cin>>x; if(x>n) n=x;
//    cin>>x; if(x>n) n=x;
//    cin>>x; if(x>n) n=x;
//    cin>>x; if(x>n) n=x;
//    cin>>x; if(x>n) n=x;
//    cin>>x; if(x>n) n=x;
//    cin>>x; if(x>n) n=x;
//    cin>>x; if(x>n) n=x;
//    cin>>x; if(x>n) n=x;
//    cout<<n;

/*-- Hard Challenges ---*/
//  Problem 1
//    int n,cnt,s1,e1,s2,e2,s3,e3;
//    cin>>n;
//    cin>>s1>>e1;
//    cin>>s2>>e2;
//    cin>>s3>>e3;
//    cnt=0;
//    if(n>=s1&&n<=e1) cnt++;
//    if(n>=s2&&n<=e2) cnt++;
//    if(n>=s3&&n<=e3) cnt++;
//    cout<<cnt;


//  Problem 2
//    int s1,e1,s2,e2;
//    cin>>s1>>e1;
//    cin>>s2>>e2;
//    if(e1<s2||e2<s1){
//        cout<<-1;
//    } else {
//        if(s1<s2) s1=s2;
//        if(e1>e2) e1=e2;
//        cout<<s1<<" "<<e1;
//    }


    // End
    return 0;
}
