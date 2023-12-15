#include <iostream>
#include <cassert>
using namespace std;

int main_1D()
{
<<<<<<< Updated upstream
//----- Easy to Medium Challenges ----//
// P1 - Is increasing array ?
//    int arr[200];
//    int n; cin>>n;
//    bool is_inc=false;
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//        if(i!=0){
//            if(arr[i-1]>arr[i]){
//                is_inc=true;
//            }
//        }
//    }
//    if(is_inc==true){
//        cout<<"No";
//    } else{
//        cout<<"Yes";
//    }

// P2 - Replace MinMAx
//    int arr[200], n; cin>>n;
//    int max_n=1,min_n;
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//        if(i==0){
//            min_n=arr[i];
//        } else {
//            if(arr[i]>max_n){
//                max_n=arr[i];
//            }
//            if(arr[i]<min_n){
//                min_n=arr[i];
//            }
//        }
//    }
//    cout<<"Min "<<min_n<<", Max "<<max_n<<" => ";
//    for(int i=0;i<n;i++){
//        if(arr[i]==max_n){
//            arr[i]=min_n;
//        } else if(arr[i]==min_n){
//            arr[i]=max_n;
//        }
//        cout<<arr[i]<<" ";
//    }

// P3 - Unique Numbers of ordered list
//    int arr[200], n; cin>>n;
//    int t=0;
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//        if(i==0){
//            t=arr[i];
//            cout<<arr[i]<<" ";
//        } else {
//            if(arr[i]!=t){
//                cout<<arr[i]<<" ";
//                t=arr[i];
//            }
//        }
//    }

// P4 - Is Palindrome ?
//    int arr[200], n; cin>>n;
//    bool is_pal=false;
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    for(int i=0;i<n/2;i++){
//        if(n==1||arr[i]!=arr[n-i-1]){
//            is_pal=true;
//            break;
//        }
//    }
//    if(!is_pal){
//        cout<<"Yes";
//    } else {
//        cout<<"No";
//    }

// P5 - Smallest pair
//    int arr[200], n; cin>>n;
//    int mn;
//    bool k=true;
//    for(int i=0;i<n;i++){
//            cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            int temp=arr[i]+arr[j]+j-i;
//            if(k || temp<mn){
//                mn=temp;
//                k=false;
//            }
//        }
//    }
//    cout<<mn<<endl;

//----- Medium Challenges ----//
// P1 - Find the 3 minimum values
//    int n,temp,mn[3];
//    cin>>n;
//    for(int i=0;i<n;i++){
//        int value;
//        cin>>value;
//        if(i<3){
//            mn[i]=value;
//        } else {
//            int mx=0;
//            // Find maximum position
//            for(int j=1;j<3;j++){
//                if(mn[mx]<mn[j]){
//                    mx=j;
//                }
//            }
//            // Replace the maximum number with value if less then
//            if(value<mn[mx]){
//                mn[mx]=value;
//            }
//        }
//    }
//    for(int i=0;i<3;i++){
//        cout<<mn[i]<<" ";
//    }

// P2 - Search for a number
//    int arr[200], n; cout<<"n: "; cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int q,que[200]; cout<<"q: "; cin>>q;
//    for(int i=0;i<q;i++){
//        cin>>que[i];
//    }
//    for(int i=0;i<q;i++){
//        int ind=-1;
//        for(int j=0;j<n;j++){
//            if(que[i]==arr[j]){
//                ind=j;
//            }
//        }
//        cout<<ind<<" ";
//    }

// P3 - Find most frequent number
//    int n;cin>>n;
//    const int MAX=270+500+1;
//    int freq[MAX]={0};
//    for(int i=0;i<n;i++){
//        int val;
//        cin>>val;
//        val+=500;
//        freq[val]++;
//    }
//    int mx=0;
//    for(int i=0;i<MAX;i++){
//        if(freq[mx]<freq[i]){
//            mx=i;
//        }
//    }
//    cout<<mx-500<<" has repeated "<<freq[mx]<<" times"; // -5+500

// P4 - Digits frequency
//    int n,x,occ[10]={0};
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>x;
//        if(x==0){
//            occ[0]++;
//        }else {
//            while(x){
//                int digit=x%10;
//                occ[digit]++;
//                x/=10;
//            }
//        }
//    }
//    for(int i=0;i<=9;i++){
//        cout<<i<<" "<<occ[i]<<endl;
//    }

// P5 - Unique numbers of unordered list
//    int n;cin>>n;
//    const int MAX=500+1;
//    int vis[MAX]={0};
//    for(int i=0;i<n;i++){
//        int val; cin>>val;
//        assert(val>=0&&val<=500); // If this false it's will get error
//        if(!vis[val]){
//            cout<<val<<" ";
//            vis[val]=1;
//        }
//    }


// P6 - Sorting numbers
//    int n;cin>>n;
//    int nums[500];
//    for(int i=0;i<n;i++){
//        cin>>nums[i];
//    }
//    for(int i=0;i<n;i++){
//        for(int j=i;j<n;j++){
//            if(nums[i]>nums[j]){
//                int temp=nums[i];
//                nums[i]=nums[j];
//                nums[j]=temp;
//            }
//        }
//    }
//    for(int i=0;i<n;i++){
//        cout<<nums[i]<<" ";
//    }

//----- Hard Challenges ----//
// P1 - Recamàn's sequence
//    int n; cin>>n;
//    int arr[200];
//    int lastVal=0;
//    for(int i=0;i<=n;i++){
//        int finded=false;
//        if(i==0){
//            lastVal=0;
//        } else {
//            if(lastVal>0&&(lastVal-(i-1)-1)>0){
//                int y = lastVal-(i-1)-1;
//                for(int j=0;j<i;j++){
//                    if(arr[j]==y){
//                        finded=true;
//                        cout<<"find "<<y<<endl;
//                        break;
//
//                    } else {
//                        lastVal=y;
//                        cout<<"not find "<<y<<endl;
//                        break;
//                    }
//                }
//            }else{
//                lastVal=lastVal+(i-1)+1;
////                cout<<"If2->"<<lastVal<<endl;
//            }
//            if(finded){
////                cout<<"If3->"<<lastVal<<endl;
//                lastVal=lastVal+(i-1)+1;
////                cout<<"If3->"<<lastVal<<endl;
//            }
//        }
//        arr[i]=lastVal;
//        cout<<i<<" Value "<<lastVal<<" - "<<arr[i]<<endl;
//    }
//    cout<<lastVal;

//    const int N=201;
//    int sequence[N], indx;
//    int occurence[N*10]={0};
//    cin>>indx;
//    sequence[0]=0;
//    occurence[0]=1;
//    for(int i=1;i<=indx;i++){
//        int cur=sequence[i-1]-(i-1)-1;
//        if(cur<0||occurence[cur]){
//            cur=sequence[i-1]+(i-1)+1;
//        }
//        sequence[i]=cur;
//        occurence[cur]=i;
//    }
//    cout<<sequence[indx];

// P2 - Fixed Sliding window
//    int k,n;
//    cin>>k>>n;
//    int nums[200];
//    int max_n=0,starn,endn;
//    for(int i=0;i<n;i++){
//        cin>>nums[i];
//    }
//    for(int i=0;i<=n-k;i++){
//        int sum=0;
//        for(int j=i;j<i+k;j++){
//            sum+=nums[j];
//            cout<<nums[j]<<" ";
//        }
//        cout<<"- "<<sum<<endl;
//        if(sum>max_n){
//            max_n=sum;
//            starn=i;
//            endn=i+k-1;
//        }
//    }
//    cout<<starn<<" "<<endn<<" "<<max_n;

//    const int N=199;
//    int n, arr[N]={0}, k, min_index, max_sum=-10000000;
//    cin>>k>>n;
//    for(int i=1;i<=n;i++){
//        cin>>arr[i];
//        arr[i]+=arr[i-1];
//    }
//    for(int i=k;i<=n;i++){
//        if(arr[i]-arr[i-k]>max_sum){
//            max_sum=arr[i]-arr[i-k];
//            min_index=i-k+1;
//        }
//    }
//    cout<<min_index-1<<" "<<min_index+k-2<<" "<<max_sum<<endl;

// P3 - Count increasing subarrays
//    int a[199];
//    int n; cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    int result=0;
//    int len=1;
//    for(int i=1;i<n;i++){
//        if(a[i-1]<=a[i]){
//            result+=len;
//            len++;
//        } else {
//            len=1;
//        }
//    }
//    cout<<result+n<<endl;


// P4 - Josephus problem



// P5 - Longest Subarray
=======
//----- Practice ----//
//--> P1 - Reverse in place
//    int arr[200];
//    int n; cin>>n;
//
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    cout<<endl; sqdqzd
//    int a;
//    for(int i=0;i<n/2;i++){
//        int last=n-i-1;
//        a=arr[i];
//        arr[i]=arr[last];
//        arr[last]=a;
//    }
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }

//--> P2 - Find most frequent number
//    int num[200];
//    int n; cin>>n;
//    for(int i=0;i<n;i++) cin>>num[i];
//
//    int max_value=-1,max_repeat=-1;
//
//    for(int a=0;a<n;a++){
//        int repeat=0;
//        for(int j=0;j<n;j++) repeat+=num[as]==num[j];
//        if(max_repeat<repeat)
//            max_repeat=repeat, max_value=num[a];
//    }
//    cout<<max_value<<" repeated "<<max_repeat<<" times";

//    int n, nums[200];
//    int freq[150+1]={0};
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>nums[i];
//        freq[nums[i]]++;
//    }
//    int repeated=-1;
//    for(int j=0;j<151;j++){
//        if(freq[repeated]<freq[j]){
//            repeated=j;
//        }
//    }
//    cout<<repeated<<" repeated "<<freq[repeated]<<" times";








>>>>>>> Stashed changes










<<<<<<< Updated upstream
=======
    // End
    return 0;
>>>>>>> Stashed changes
}
