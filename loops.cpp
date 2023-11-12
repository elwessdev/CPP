#include <iostream>
using namespace std;

int main_loops()
{
/*-------------------- While --------------*/
// Practice
//-->P1
//    int n; cin>>n;
//    int start=1;
//    while(start<=n){
//        if(start%3==0) cout<<start<<endl;
//        start++;
//    }

//-->P2
//   int num; cin>>num;
//   int digits=0;
//   while(num>0){
//    digits+=1;
//    num/=10;
//   }
//   cout<<digits;

//----- Medium ----//
//-->P1
//    int n; cin>>n;
//    int a=1,b=1;
//    while(a<=n){
//        while(b<=a){
//            cout<<" * ";
//            b++;
//        }
//        cout<<endl;
//        a++;
//        b=1;
//    }

//-->P2
//    int n,i; cin>>n;
//    while(i<=n){
//        if(i%8==0||(i%4==0&&i%3==0)) cout<<i<<" ";
//        i++;
//    }

//-->P3
//    int n,i,cnt; cin>>n;
//    i=1;
//    cnt=0;
//    while(true){
//        if(cnt==n){
//            break;
//        } else {
//            if(i%3==0 || (i%3==0&&i%4==0)){
//                cout<<i<<" ";
//                cnt++;
//            }
//            i++;
//        }
//    }

//-->P4
//    int t,n,num,i=1,mi=0;
//    cout<<"enter T: "; cin>>t;
//    while(i<=t){
//        cout<<"enter N: "; cin>>n;
//        mi=0;
//        for(int y=1;y<=n;y++){
//            cout<<"enter number "<<y<<" from "<<n <<": "; cin>>num;
//            if(y==1){
//                mi=num;
//            }
//            if(t<mi){
//                mi=num;
//            }
//        }
//        cout<<"---> "<<mi<<endl;
//        i++;
//    }

//    int T;
//    cout<<"enter T: "; cin>>T;
//
//    while(T>0){
//        int n;
//        cout<<"enter N: "; cin>>n;
//        int pos=0, result;
//        while(pos<n){
//            int value;
//            cout<<"enter number "<<pos<<" from "<<n <<": "; cin>>value;
//            if(pos==0){
//                result=value;
//            } else if(result>value){
//                result=value;
//            }
//            pos++;
//        }
//        cout<<"result: "<<result<<endl;
//        --T;
//    }

//----- Hard ----//
//-->P1 - Find NOs
//    int i,n;
//    cout<<"Enter N: "; cin>>n;
//    for(int i=0;i<n;i++){
//        string N;
//        cout<<"Enter "<<i<<" String: "; cin>>N;
//            if(N=="no"||N=="No"||N=="NO"||N=="nO"||N=="on"||N=="On"||N=="ON"||N=="oN"){
//                cout<<N<<"";
//           }
//    }

//-->P2 - Reverse a number
//    int n; cin>>n;
//    int num=0;
//    while(n>0){
//        int last_digits=n%10;
//        n/=10;
//        num=num*10+last_digits;
//    }
//    cout<<num<<" "<<num*3<<endl;

//-->P3 - Multiplication table
//    int n,m; cin>>n>>m;
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=m;j++){
//            cout<<i<<"x"<<j<<"="<<i*j<<endl;
//        }
//        cout<<endl;
//    }
//    int i=1;
//    while(i<=n){
//            int j=1;
//            while(j<=m){
//                cout<<i<<"x"<<j<<"="<<i*j<<endl;
//                j++;
//            }
//            cout<<endl;
//        i++;
//    };

//-->P4 - Special sum
//    int T;
//    cout<<"Enter T:"; cin>>T;
//    while(T--){
//        int N;
//        cout<<"Enter N: "; cin>>N;
//        int j=1;
//        int gr_sum=0;
//        while(j<=N){
//            int A;
//            cout<<"Enter A "<<j<<": "; cin>>A;
//            int y=1;
//            int sub_sum=1;
//            while(y<=j){
//                sub_sum*=A;
//                y++;
//            }
//            gr_sum+=sub_sum;
//            j++;
//        }
//        cout<<gr_sum<<endl;
//    }


/*-------------------- For --------------*/
//---- Practice -----
//-->Special sum
//    int T;
//    cout<<"Enter T:"; cin>>T;
//    while(T--){
//        int N;
//        cout<<"Enter N: "; cin>>N;
//        int gr_sum=0;
//        for(int j=1;j<=N;j++){
//            int A;
//            cout<<"Enter A "<<j<<": "; cin>>A;
//            int sub_sum=1;
//            for(int y=1;y<=j;y++){
//                sub_sum*=A;
//            }
//            gr_sum+=sub_sum;
//        }
//        cout<<gr_sum<<endl;
//    }

//-->Pair of numbers
//    int n,m,sum;
//    cin>>n>>m>>sum; // 200 300 70
//    int cnt=0;
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=m;j++){
//            if(i+j==sum){
//                cnt++;
//            }
//        }
//    }
//    for(int i=1;i<=n;i++){
//        int j=sum-i;
//        if(j>=1&&j<=m){
//            cnt++;
//        }
//    }
//    cout<<cnt;

//-->Triples of numbers
//    int n,m,w; cin>>n>>m>>w;
//    int cnt=0;
//    for(int i=1;i<=n;i++){
//        for(int j=i;j<=m;j++){
//            int sum=i+j;
//            if(sum>=1&&sum<=w){
//                cnt+=w-sum+1;
//            }
//        }
//    }
//    cout<<cnt;

//-->Fibonacci Sequence
//    int n; cin>>n;
//    int n1=0,n2=1;
//    cout<<n1<<" "<<n2<<" ";
//    for(int i=2;i<n;i++){
//        int s=n1+n2;
//        n1=n2;
//        n2=s;
//        cout<<s<<" ";
//    }
//    for(int i=2,a=0,b=1,c=0;i<n;i++,c=a+b,a=b,b=c){
//        cout<<c<<" ";
//    }

//---- Medium to Hard challenges -----
//->P1 - Printing X
//    int n; cin>>n;
//    int a=1;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            if(j==i||n-i-1==j){
//                cout<<"*";
//            } else {
//                cout<<" ";
//            }
//
//        }
//        cout<<endl;
//    }

//->P2 - Find Special Pairs
//    int x,y,cnt=0;
//    for(int x=50;x<=300;x++){
//        for(int j=70;j<=400;j++){
//            if(x<j&&((x+j)%7==0)){
//                cnt++;
//            }
//        }
//    }
//    cout<<cnt;

//->P3 - Find all quadruples
//    int cnt=0;
//    for(int a=1;a<=200;a++){
//        for(int b=1;b<=200;b++){
//            for(int c=1;c<=200;c++){
//                int d=a+b-c;
//                cnt+=(d>=1&&d<=200);
//            }
//        }
//    }
//    cout<<cnt;

//->P4 - Is Prime
//    int n;
//    do{
//        cin>>n;
//    } while(n>=500);
//
//    for(int i=2;i<=n;i++){
//        if(n%i!=0){
//            cout<<"Yes";
//            break;
//        } else {
//            cout<<"No";
//            break;
//        }
//    }

//->P5 - Print Primes
//    int n; cin>>n;
//    bool first_p=true;
//
//    for(int i=2;i<=n;i++){
//        bool is_ok=true;
//        for(int j=2;j<i;j++){
//            if(i%j==0){
//                is_ok=false;
//                break;
//            }
//        }
//        if(!is_ok){
//            if(!first_p)
//                cout<<",";
//            cout<<i;
//            first_p=false;
//        }
//
//    }

//->P6 - Digits sum in range
    int n,a,b,sum;
    cin>>n>>a>>b;
    int s=0;
    for(int i=1;i<=n;i++){
        if(i<100){
            sum=(i%10)+((i/10)%10)+(i/100);
            if(sum>=a&&sum<=b){
                cout<<i<<" ";
                s+=i;
            }
        } else if(i<10){
            sum=(i%10)+(i/10);
            if(sum>=a&&sum<=b){
                cout<<i<<" ";
                s+=i;
            }
        } else {
            if(i>=a&&i<=b){
                cout<<i<<" ";
                s+=i;
            }
        }
    }
    cout<<endl<<"=> "<<s;



    // End
    return 0;
}
