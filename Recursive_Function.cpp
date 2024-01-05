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
void print_triangle(int n){
    if(n==0)
        return;
    print_triangle(n-1);
    for(int i=0;i<n;i++)
        cout<<"*";
    cout<<"\n";
}

// Print 3n+1 Sequence
void th_sequence(int n){
    cout<<n<<" ";
    if(n==1){
        return;
    }
    if(n%2==0){
        th_sequence(n/2);
    }else{
        th_sequence(3*n+1);
    }
}

//-------- Easy to Medium Challenges --------
// P1- Length of 3n+1
int le=0;
int length_3n1(int n){
    le++;
    if(n==1)
        return le;
    if(n%2==0){
        return length_3n1(n/2);
    } else {
        return length_3n1(3*n+1);
    }
}

// P2- Power function
int pow_sum=1;
int my_pow(int val, int p){
    if(p==0)
        return pow_sum;
    else {
        pow_sum*=val;
        p--;
        return my_pow(val,p);
    }
}

// P3- Array maximum
int max_num=0;
int arr_max(int arr[],int len){
    if(max_num<arr[len])
        max_num=arr[len];
    if(len==1){
        return max_num;
    } else {
        len--;
        return arr_max(arr, len);
    }
}

// P4- Array Sum
int sum_ar=0;
int arr_sum(int arr[],int len){
    sum_ar+=arr[len];
    if(len==0)
        return sum_ar;
    len--;
    return arr_sum(arr, len);
}

// P5- Array average
int sum_average=0;
float arr_average(float arr[],int len){
    sum_average+=arr[len];
    if(len==0)
        return sum_average;
    len--;
    return arr_average(arr, len);
}

int main()
{
//-------- Homework --------
// Factorial with recursive
//    cout<<factorial(6);

// Print a Triangle (v1)
//    print_triangle(5);

// Print 3n+1 Sequence
//    th_sequence(6);

//-------- Easy to Medium Challenges --------
// P1- Length of 3n+1
//    int n; cin>>n;
//    cout<<length_3n1(n);

// P2- Power function
//    int n,p; cin>>n>>p;
//    cout<<my_pow(n,p);

// P3- Array maximum
//    int arr[100];
//    int len; cin>>len;
//    for(int i=0;i<len;i++){
//        cin>>arr[i];
//    }
//    cout<<arr_max(arr,len);

// P4- Array Sum
//    int arr[100];
//    int len; cin>>len;
//    for(int i=0;i<len;i++){
//        cin>>arr[i];
//    }
//    cout<<arr_sum(arr,len);

// P5- Array average
    // float arr[100];
    // int len; cin>>len;
    // for(int i=0;i<len;i++){
    //     cin>>arr[i];
    // }
    // cout<<arr_average(arr,len);

    int n;
    cout<<"Enter n: "; cin>>n;
    cout<<"=> "<<n;


    return 0;
}

