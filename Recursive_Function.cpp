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
int length_3n1(int n){
    if(n==1)
        return 1;
    if(n%2==0)
        return length_3n1(n/2);
    return length_3n1(3*n+1);
}

// P2- Power function
int my_pow(int val, int p=2){
    if(p==0)
        return 1;
    return val*my_pow(val,p-1);
}

// P3- Array maximum
int arr_max(int arr[],int len){
    if(len==1)
        return arr[0];
    int sub_result=arr_max(arr,len-1);
    return max(sub_result, arr[len-1]);
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

// P6- Array increment
int a=0;
void arr_increment(int arr[], int len){
    if(a==(sizeof(arr)/sizeof(int))){
        arr[len]+=len;
        cout<<arr[len]<<" ";
    } else {
        arr[len]+=len;
        cout<<arr[len]<<" ";
        a++;
        arr_increment(arr,a);
    }
}

// P7- Array accumlulation
void accumulate_arr(int arr[],int len){

}

int main(){
//-------- Homework --------
// Factorial with recursive
//    cout<<factorial(6);

// Print a Triangle (v1)
//    print_triangle(5);

// Print 3n+1 Sequence
//    th_sequence(6);

//-------- Easy to Medium Challenges --------
// P1- Length of 3n+1
//    cout<<length_3n1(6);

// P2- Power function
//    cout<<my_pow(5,3);

// P3- Array maximum
    int arr[]={1,44,5,23,7};
    cout<<arr_max(arr,5);

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

// P6- Array increment
//    int arr[100];
//    int len; cin>>len;
//    for(int i=0;i<len;i++){
//        cin>>arr[i];
//    }
//    arr_increment(arr,len);

// P7- Array Accumulation
//    int arr[100];
//    int len; cin>>len;
//    for(int i=0;i<len;i++){
//        cin>>arr[i];
//    }
//    accumulate_arr(arr,len);











    return 0;
}

