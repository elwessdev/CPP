#include <iostream>
using namespace std;

int main_MultArr()
{
//----- Practice ----//
//-> P1 - Max value
//    int x,y; cin>>y>>x;
//    int arr[y][x];
//    int max_i=-1,max_j=-1;
//    for(int i=0;i<y;i++){
//        for(int j=0;j<x;j++){
//            cout<<"enter number "<<j<<" in row "<<i<<"\n";
//            cin>>arr[i][j];
//            if(arr[i][j]>arr[max_i][max_j]){
//                max_i=i, max_j=j;
//            }
//        }
//    }
//    cout<<max_i<<"-"<<max_j<<" -> "<<arr[max_i][max_j];

//-> P2 - Special print
//    int x,y; cin>>y>>x;
//    int arr[y][x];
//    int left_diagonal=0;
//    int right_diagonal=0;
//    int sum_row=0;
//    int sum_col=0;
//    for(int i=0;i<y;i++){
//         cout<<"enter "<<x<<" numbers for cols "<<i+1<<"\n";
//        for(int j=0;j<x;j++){
//            cin>>arr[i][j];
//            if(i==j){
//                left_diagonal+=arr[i][j];
//            }
//            if(i==(y-1)){
//                sum_row+=arr[i][j];
//            }
//            if(j==(x-1)){
//                sum_col+=arr[i][j];
//            }
//            if(j==(x-i-1)){
//                right_diagonal+=arr[i][x-i-1];
//            }
//
//        }
//    }
//    cout<<"left diagonal: "<<left_diagonal<<"\n";
//    cout<<"right diagonal: "<<right_diagonal<<"\n";
//    cout<<"sum last row: "<<sum_row<<"\n";
//    cout<<"sum last col: "<<sum_col<<"\n";

//-> P3 - Swap 2 columns
//    int cols,rows; cin>>rows>>cols;
//    int arr[rows][cols];
//    for(int i=0;i<rows;i++){
//        for(int j=0;j<cols;j++){
//            cin>>arr[i][j];
//        }
//    }
//    int n,m; cin>>n>>m;
//    for(int i=0;i<rows;i++){
//        int temp=arr[i][n];
//        arr[i][n]=arr[i][m];
//        arr[i][m]=temp;
//    }
//    for(int i=0;i<rows;i++){
//        for(int j=0;j<cols;j++){
//            cout<<arr[i][j]<<" ";
//        }
//         cout<<"\n";
//    }

//-> P4 - Greedy Robot
//    int rows,cols; cin>>rows>>cols;
//    int arr[rows][cols];
//    for(int i=0;i<rows;i++){
//        for(int j=0;j<cols;j++){
//            cin>>arr[i][j];
//        }
//    }
//    int i=0,j=0,sum=0;
//    while(i<rows&&j<cols){
//        sum+=arr[i][j];
//        int next_val,best_i=-1,best_j=-1;
//         is right ok position?
//        if(j+1<cols){
//            next_val=arr[i][j+1];
//            best_i=i;
//            best_j=j+1;
//            cout<<next_val<<"\n";
//        }
//         is down ok position ?
//        if(i+1<rows){
//            if(best_i==-1||next_val<arr[i+1][j]){
//                next_val=arr[i+1][j];
//                best_i=i+1;
//                best_j=j;
//                cout<<next_val<<"\n";
//            }
//        }
//         is daigonal ok position ?
//        if(i+1<rows&&j+1<cols){
//            if(best_i==-1||next_val<arr[i+1][j+1]){
//                next_val=arr[i+1][j+1];
//                best_i=i+1;
//                best_j=j+1;
//                cout<<next_val<<"\n";
//            }
//        }
//        if(best_i==-1){
//            break;
//        }
//        i=best_i, j=best_j;
//    }
//    cout<<sum<<"\n";

//-> P5 - Flatten array
//    int rows,cols; cin>>rows>>cols;
//    int arr[rows][cols];
//    int sz=rows*cols;
//    int arr1[sz];
//    for(int i=0;i<rows;i++){
//        for(int j=0;j<cols;j++){
//            cin>>arr[i][j];
//        }
//    }
//    for(int i=0;i<rows;i++){
//        for(int j=0;j<cols;j++){
//            arr1[i*cols+j]=arr[i][j];
//        }
//    }
//    for(int i=0;i<sz;i++){
//        cout<<arr1[i]<<" ";
//    }

//----- Easy Challenges ----//
//-> P1 - Smaller row ?
//    int rows,cols; cin>>rows>>cols;
//    int arr[rows][cols];
//    for(int i=0;i<rows;i++){
//        for(int j=0;j<cols;j++){
//            cin>>arr[i][j];
//        }
//    }
//    int q; cin>>q;
//    while(q--){
//        int q1,q2; cin>>q1>>q2;
//        bool is_smaller=true;
//        for(int i=0;i<cols;i++){
//            if(arr[q1-1][i]>=arr[q2-1][i]){
//                is_smaller=false;
//                break;
//            }
//        }
//        if(is_smaller){
//            cout<<"Yes\n";
//        } else {
//            cout<<"No\n";
//        }
//    }

//-> P2 - Triangular matrix
//    int n, val, lower=0, upper=0;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            cin>>val;
//            if(i>=j){
//                lower+=val;
//            }
//            if(i<=j){
//                upper+=val;
//            }
//        }
//    }
//    cout<<lower<<"\n";
//    cout<<upper<<"\n";

//-> P3 - Transpose
//    int rows,cols; cin>>rows>>cols;
//    int arr[rows][cols];
//    int arr2[cols][rows];
//    for(int i=0;i<rows;i++){
//        for(int j=0;j<cols;j++){
//            cin>>arr[i][j];
//            arr2[j][i]=arr[i][j];
//        }
//    }
//    for(int i=0;i<cols;i++){
//        for(int j=0;j<rows;j++){
//            cout<<arr2[i][j]<<" ";
//        }
//        cout<<"\n";
//    }

//----- Medium to Hard Challenges ----//
//-> P1 - How many primes ?
//    bool is_prime[100][100]={0};
//    int n,m,val;
//    cin>>n>>m;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            if(val<=1)
//                continue;
//            is_prime[i][j]=0;
//            for(int k=2;k<val;k++){
//                if(val%k==0){
//                    is_prime[i][j]=0;
//                    break;
//                }
//            }
//        }
//    }
//    int q,si,sj,rs,cls;
//    cin>>q;
//    while(q--){
//        cin>>si>>sj>>rs>>cls;
//        int cnt=0;
//        for(int i=si;i<=si+rs-1;i++){
//            for(int j=sj;j<sj+cls-1;j++){
//                cnt+=is_prime[i][j];
//            }
//        }
//        cout<<cnt<<"\n";
//    }

//-> P2 - Find mountains
//    int arr[100][100];
//    int n,m;
//    cin>>n>>m;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>arr[i][j];
//        }
//    }
//
//    int di[8]={1,0,-1,0,-1,1,-1,1};
//    int dj[8]={0,1,0,-1,-1,1,1,-1};
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            bool valid_mountain=true;
//            for(int d=0;d<8&&valid_mountain;d++){
//                int ni=i+di[d];
//                int nj=j+dj[d];
//                if(ni<0||nj>=n||nj<0||nj>=m){
//                    continue;
//                }
//                if(arr[i][j]<=arr[ni][nj]){
//                    valid_mountain=false;
//                    break;
//                }
//            }
//            if(valid_mountain){
//                cout<<i<<" "<<j<<"\n";
//            }
//        }
//    }

//-> P3 - Active Robot
//    int n,m,k,r=0,c=0;
//    cin>>n>>m>>k;
//
//    int rd[4]={-1,0,1,0};
//    int cd[4]={0,1,0,-1};
//
//    while(k--){
//        int dir,steps;
//        cin>>dir>>steps;
//        --dir;
//        r=(r+rd[dir]*steps)%n;
//        c=(c+cd[dir]*steps)%m;
//        if(r<0){
//            r+=n;
//        }
//        if(c<0){
//            c+=m;
//        }
//        cout<<"("<<r<<", "<<c<<")\n";
//    }

//-> P4 - Flatten 3D Array



//----- Application - Tic Tac Toe ----//
//    int n; cin>>n;
//    char tab[n][n];
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            tab[i][j]='.';
//        }
//    }
//
//    int turn=0;
//    int r,c;
//    int steps=0;
//    int x_arr[6]={0};
//    int o_arr[6]={0};
//    while(true){
//        if(steps==n*n){
//            break;
//        }
//        char player='x';
//        if(turn==1){
//            player='o';
//        }
//        cout<<"Player "<<player<<" turn. Enter empty location (r.c): ";
//        cin>>r>>c;
//        tab[r][c]=player;
//        // Check
//        for(int i=0;i<n;i++){
//            for(int j=0;j<n;j++){
//                cout<<tab[i][j]<<" ";
//                if(i==0){
//                    if(arr[i][j]==player){
//
//                    }
//                    if(arr[j][i]==player){
//
//                    }
//                }
//            }
//            cout<<"\n";
//        }
//        turn=!turn;
//        steps++;
//    }


    // End
    return 0;
}
