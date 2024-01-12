#include <iostream>
#include <string>
using namespace std;
// P1- Max of 6 numbers
int max(int a, int b, int c){
    return max(a, max(b,c));
}
int max(int a, int b, int c, int d){
    return max(a, max(b,c,d));
}
int max(int a, int b, int c, int d, int e){
    return max(a, max(b,c,d,e));
}
int max(int a, int b, int c, int d, int e, int f){
    return max(a, max(b,c,d,e,f));
}

// P2- Reverse a string
string reverse_str(const string &str){
    string rem=str;
    int st=0,sz=rem.size()-1;
    while(sz>st){
        char temp=rem[sz];
        rem[sz]=rem[st];
        rem[st]=temp;
        sz--;
        st++;
    }
    return rem;
}


// P3- Calculator
int calc_menu(){
    int choice = -1;
    while(choice==-1){
        if(true){
            cout<<"\nMenu:\n";
            cout<<"1) Add\n";
            cout<<"2) Subtract\n";
            cout<<"3) Multiply\n";
            cout<<"4) Divide\n";
            cout<<"5) End the program\n";
        }
        cout<<"\nEnter your menu choice [1-5]:";
        cin>>choice;
        if(!(1<=choice<=5)){
            cout<<"Invalid Choice. Try again Pls\n";
            choice=-1;
        }
    }
    return choice;
}
void read_numbers(float &num1,float &num2){
    cout<<"\nEnter number 1:"; cin>>num2;
    cout<<"Enter number 2:"; cin>>num1;
}
void add(float &num1,float &num2){
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<"\n";
}
void subtract(float &num1,float &num2){
    cout<<num1<<"-"<<num2<<"="<<num1-num2<<"\n";
}
void multiply(float &num1,float &num2){
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<"\n";
}
void divide(float &num1,float &num2){
    if(num2!=0){
        cout<<num1<<"/"<<num2<<"="<<num1/num2<<"\n";
    } else {
        cout<<"Can't divide by zero\n";
    }
}
void Calculator(){
    int operation=0;
    float a,b;
    while(true){
        int choice=calc_menu();
        if(choice==5){
            break;
        }
        operation++;
        read_numbers(a,b);
        if(choice==1){
            add(a,b);
        } else if(choice==2){
            subtract(a,b);
        } else if(choice==3){
            multiply(a,b);
        } else if(choice==4){
            divide(a,b);
        }
    }
    cout<<"Total operation: "<<operation;
}


// P4- Is Palindrome Array
int read_arr(int arr[]){
    int len; cin>>len;
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    return len;
}
int is_palindrom_array(int arr[], int len){
    int st=0,en=len-1;
    while(en>st){
        if(arr[en]!=arr[st]){
            return false;
        }
        en--, st++;
    }
    return true;
}


// P5- Set-Power
void set_power(int arr[], int len=5, int m=2){
    arr[0]=1;
    for(int i=1;i<len;i++){
        arr[i]=arr[i-1]*m;
    }
}


// P6- Get nth-prime
bool is_prime(int num){
    if(num<=1)
        return false;
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int nth_prime(int n){
    int i=2;
    while(n>0){
        if(is_prime(i)){
            --n;
            if(n==0)
                break;
        }
        i++;
    }
    return i;
}


// P7- Replace substring
bool starts_with(string input, string pattern, int pos){
    if(pos+pattern.size()>input.size())
        return false;
    for(int i=0;i<pattern.size();i++){
        if(pattern[i]!=input[i+pos])
            return false;
    }
    return true;
}
string replace_str(string input, string pattern, string to){
    string result="";
    for(int pos=0;pos<input.size();pos++){
        if(starts_with(input,pattern,pos)){
            result+=to;
            pos+=pattern.size()-1;
        } else {
            result+=input[pos];
        }
    }
    return result;
}


int main_function(){
//-------- Homework --------
// P1- Max of 6 numbers
//    cout<<max(1,2,8,4,5,6);

// P2- Reverse a string
//    string str; cin>>str;
//    cout<<reverse_str(str);

// P3- Calculator
//    Calculator();

// P4- Is Palindrome Array
//    int arr[100];
//    int len=read_arr(arr);
//    if(is_palindrom_array(arr,len)){
//        cout<<"Yes";
//    } else {
//        cout<<"Nooo";
//    }

// P5- Set-Power
//    int len,m; cin>>len>>m;
//    int arr[len];
//    set_power(arr,len,m);
//    for(int i=0;i<len;i++){
//        cout<<arr[i]<<" ";
//    }

// P6- Get nth-prime
//    int n; cin>>n;
//    cout<<nth_prime(n)<<"\n";
//    for(int i=1;i<20;i++){
//        cout<<nth_prime(i)<<" ";
//    }

// P7- Replace substring
    string input,pattern,to;
    cin>>input>>pattern>>to;
    cout<<replace_str(input,pattern,to);










    // End
    return 0;
}
