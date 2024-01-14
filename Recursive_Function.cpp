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
int arr_sum(int arr[],int len){
    if(len==1)
        return arr[0];
    int sub_result=arr_sum(arr,len-1);
    return sub_result+arr[len-1];
}
// P5- Array average
float arr_average(float arr[],int len){
    if(len==1)
        return arr[0];
    double sub_result=arr_average(arr,len-1);
    sub_result=sub_result*(len-1);
    return (sub_result+arr[len-1])/len;
}
// P6- Array incremen
void arr_increment(int arr[], int len){
    if(len==0)
        return;
    arr_increment(arr,len-1);
    arr[len-1]+=len-1;
}
// P7- Array accumulation
void accumulate_arr(int arr[],int len){
    if(len==1)
        return;
    accumulate_arr(arr,len-1);
    arr[len-1]+=arr[len-2];
}
// P7- Array accumulation
void left_max(int arr[], int len){
    if(len==1)
        return;
    left_max(arr,len-1);
    arr[len-1]=max(arr[len-1],arr[len-2]);
}

//-------- Medium to Hard Challenges --------
// P1 - Right Max
void right_max(int arr[],int len,int start_position=0){
    if(len==0)
        return;
    right_max(arr,len-1,start_position);
    // arr[len]=max(arr[len],arr[len-1]);
    cout<<arr[len]<<"\n";
}
// P2 - Suffix Sum
int suffix_sum(int arr[],int len,int signature){
    if(signature==1)
        return arr[len-1];
    int sub_result=suffix_sum(arr,len-1,signature-1);
    return sub_result+arr[len-1];
}
// P3 - Prefix Sum
int prefix_sum(int arr[],int len,int signature){
    if(signature==0)
        return arr[signature-1];
    int sub_result=prefix_sum(arr,len,signature-1);
    return sub_result+arr[signature-1];
}
// P4 - Is Palindrome
bool is_palindrome(int arr[],int len,int signature){
    if(arr[signature]!=arr[len])
        return false;
    is_palindrome(arr,len-1,signature+1);
}
// P5 - Is Prefix
bool is_prefix(string main,string prefix,int start_pos=0){
    cout<<prefix.size()-1<<" "<<start_pos<<" "<<main[start_pos]<<" "<<prefix[start_pos]<<endl;
    if(start_pos==prefix.size()-1&&main[start_pos]==prefix[start_pos]){
        return true;
    } else if(main[start_pos]!=prefix[start_pos]){
        return false;
    } else {
        is_prefix(main,prefix,start_pos+1);
    }
}
// P6 - Trace -> This function to reverse numbers
void do_something(int n){
    if(n){
        cout<<n%10<<" ";
        do_something(n/10);
    }
}
// P7 - Count primes
int cout_primes(int p_start,int p_end){
    if(p_start<p_end){
        int num=cout_primes(2,p_start);
        if(num%p_start==0)
    }
}

int main(){
//-------- Homework --------
// Factorial with recursive
/*   cout<<factorial(6);*/

// Print a Triangle (v1)
/*   print_triangle(5);*/

// Print 3n+1 Sequence
/*   th_sequence(6);*/

//-------- Easy to Medium Challenges --------
// P1- Length of 3n+1
/*   cout<<length_3n1(6);*/

// P2- Power function
/*   cout<<my_pow(5,3);*/

// P3- Array maximum
/*   int arr[]={1,44,5,23,7};
   cout<<arr_max(arr,5);*/

// P4- Array Sum
/*   int arr[100];
   int len; cin>>len;
   for(int i=0;i<len;i++){
       cin>>arr[i];
   }
   cout<<arr_sum(arr,len);*/

// P5- Array average
/*    float arr[100];
    int len; cin>>len;
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    cout<<arr_average(arr,len);*/

// P6- Array increment
/*   int arr[100],len; cin>>len;
   for(int i=0;i<len;i++){
       cin>>arr[i];
   }
   arr_increment(arr,len);
   for(int i=0;i<len;i++){
      cout<<arr[i]<<" ";
   }*/

// P7- Array Accumulation
/*    int arr[100];
    int len; cin>>len;
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    accumulate_arr(arr,len);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }*/

// P8- Left Max
/*    int arr[100], len; cin>>len;
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    left_max(arr,len);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }*/

//-------- Medium to Hard Challenges --------
// P1 - Right Max
/*    int arr[] = {1,3,5,7,4,2};
    int len=6;
    right_max(arr,len);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
*/

// P2 - Suffix Sum
//    int arr[]={1,3,4,6,7};
//    int signature=3,len=5;
//    cout<<suffix_sum(arr,len,signature);

// P3 - Prefix Sum
//    int arr[]={1,3,4,6,7};
//    int signature=3,len=5;
//    cout<<prefix_sum(arr,len,signature);

// P4 - Is Palindrome
//    int arr[]={1,3,5,3,1};
//    int len=5,signature=0;
//    cout<<is_palindrome(arr,len,signature);

// P5 - Is Prefix
//    string main="abcdefgh", prefix="abcde";
//    if(is_prefix(main,prefix)){
//        cout<<"Yes";
//    } else {
//        cout<<"false";
//    }

// P6 - Trace
//    do_something(123456);

// P7 - Count primes
    int p_start=10,p_end=20;
    cout<<count_primes(p_start,p_end);




    return 0;
}

