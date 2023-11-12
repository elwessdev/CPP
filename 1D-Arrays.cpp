#include <iostream>
using namespace std;

int main()
{
//----- Practice ----//
//--> P1 - Reverse in place
    int arr[200];
    int n; cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int a;
    for(int i=0;i<n/2;i++){
        int last=n-i-1;
        a=arr[i];
        arr[i]=arr[last];
        arr[last]=a;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // End
    return 0;
}
