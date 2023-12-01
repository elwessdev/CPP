#include <iostream>
using namespace std;

int main()
{
//----- Practice ----//
//-> P1 - Conc Strings
//    string S,T,R;
//    cin>>S>>T;
//    for(int i=0;i<(S.size()+T.size());i++){
//        R+=S[i];
//        R+=T[i];
//    }
//    cout<<R<<endl;

//-> P2 - Letters Frequency
//    string str;
//    cin>>str;
//
//    int freq[150]={0};
//    for(int i=0;i<str.size();i++){
//        freq[str[i]]++;
//    }
//    for(int i='a';i<='z';i++){
//        if(freq[i]){
//            cout<<(char)i<<freq[i]<<endl;
//        }
//    }

//-> P3 - Special string mapping
//    string from = "abcdefghijklmnopqrstuvwxyz0123456789";
//    string to = "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()";
//    char letter_map[150]={0};
//    for(int i=0;i<from.size();i++){
//        letter_map[from[i]]=to[i];
//    };
//
//    string n; cin>>n;
//
//    for(int i=0;i<n.size();i++){
//        if(n[i]>='A'&&n[i]<='Z'){
//            continue;
//        }
//        n[i]=letter_map[n[i]];
//    }
//    cout<<n;

//----- Easy to Medium Challenges ----//
//-> P1 - is Prefix ?
//    string n, prefix; cin>>n>>prefix;
//    if(prefix.size()x>n.size()){
//        cout<<"No";
//        return 0;
//    }
//    for(int i=0;i<prefix.size();i++){
//        if(prefix[i]!=n[i]){
//            cout<<"No";
//            return 0;
//        }
//    };
//    cout<<"Yes";

//-> P2 - is Suffix ?
//    string n, suffix; cin>>n>>suffix;
//    if(suffix.size()>n.size()){
//        cout<<"No";
//        return 0;
//    }
//    int n_end = (int)n.size()-1;
//    int suffix_end = (int)suffix.size()-1;
//    for(int i=0;i<suffix.size();i++){
//        if(n[n_end--]!=suffix[suffix_end--]){
//            cout<<"No";
//            return 0;
//        }
//    };
//    cout<<"Yes";

//-> P3 - Is substring ?
//    string n, substring;
//    cin>>n>>substring;
//    if(n.size()<substring.size()){
//        cout<<"No";
//        return 0;
//    }
//
//    for(int i=0;i<(int)n.size()-(int)substring.size()+1;i++){
//        bool is_match = true;
//        for(int j=0;j<substring.size()&&is_match;j++){
//            if(substring[j]!=n[i+j]){
//                is_match = false;
//            }
//        }
//        if(is_match){
//            cout<<"Yes";
//            return 0;
//        }
//    }
//    cout<<"No";

//-> P4 -Is Subsequence ?
//    string n, subsequence;
//    cin>>n>>subsequence;
//    if(n.size()<subsequence.size()){
//        cout<<"No";
//        return 0;
//    }
//    int next_match=0;
//    for(int i=0;i<(int)n.size();i++){
//        if(n[i]==subsequence[next_match]){
//            ++next_match;
//            if(next_match == (int)subsequence.size()){
//                cout<<"Yes";
//                return 0;
//            }
//        }
//    }
//    cout<<"No";

//-> P5 - convert to number
//    string n; cin>>n;
//    int num=0;
//    for(int i=0;i<n.size();i++){
//        num=num*10+(n[i]-'0');
//    }
//    cout<<num<<" "<<num*3;

//-> P6 - Grouping
//    string n;
//    cin>>n;
//    int k=n[0];
//    for(int i=0;i<n.size();i++){
//        if(i!=0&&n[i-1]!=n[i]){
//            cout<<" ";
//        }
//        cout<<n[i];
//    }

//----- Medium Challenges ----//
// P1 - Compressing
//    string str; cin>>str;
//    int match=1;
//    for(int i=0;i<(int)str.size();i++){
//        if(str[i]==str[i+1]){
//            match++;
//        } else {
//            cout<<str[i]<<match;
//            match=1;
//        }
//        if(str[i]!=str[i+1]&&i!=(int)str.size()-1){
//            cout<<"_";
//        }
//    }

// P2 - Compare strings
//    string a,b; cin>>a>>b;
//
//    int sz=a.size();
//    if(sz<b.size()){
//        sz=b.size();
//    }
//    int smaller=-1;
//    for(int i=0;smaller==-1&&i<sz;i++){
//        if(a[i]!=b[i]){
//            if(a[i]<b[i]){
//                smaller=1;
//            } else {
//                smaller=0;
//            }
//        }
//    }
//    if(smaller==-1){
//        if(a.size()<=b.size()){
//            smaller=0;
//        } else {
//            smaller=1;
//        }
//    }
//     if(smaller==1){
//        cout<<"Yes";
//     } else {
//        cout<<"No";
//     }

// P3 - Add 5555
//    string n;
//    cin>>n; // 1003265 -> 1008720
//    int sz=n.size();
//    int carry=0;
//    for(int i=0;i<sz;i++){
//        int digit = n[sz-1-i]-'0';
//        if(i<4){
//            digit+=5;
//            digit+=carry;
//        }
//        if(digit>=10){
//            digit-=10,carry=1;
//        } else {
//            carry=0;
//        }
//        n[sz-1-i]=digit+'0';
//    }
//    if(carry){
//        cout<<1;
//    }
//    cout<<n;

//----- Application - Employee Program ----//
    int MAX=10000;

    string names[MAX];
    int ages[MAX];
    double salaries[MAX];
    char genders[MAX];
    int added=0;

    while(true){
        int choice=-1;
        cout<<"\nEnter your choice:\n";
        cout<<"1) Add new employee\n";
        cout<<"2) Print all employees\n";
        cout<<"3) Delete by age\n";
        cout<<"4) Update Salary by name\n";

         cout<<"-> Enter your choice: "; cin>>choice;

        if(!(choice>=1&&choice<=4)){
            cout<<"\nInvalid choice. Please try again\n";
            continue;
        }

        if(choice==1){
            // Add New Employee
            cout<<"\nEnter name: "; cin>>names[added];
            cout<<"Enter age: "; cin>>ages[added];
            cout<<"Enter salary: "; cin>>salaries[added];
            cout<<"Enter gender (M/F):"; cin>>genders[added];
            added++;
        } else if(choice==2){
            // Print All Employees
            cout<<"\n***************\n";
            for(int i=0;i<added;i++){
                if(ages[i]!=-1){
                    cout<<names[i]<<" "<<ages[i]<<" "<<salaries[i]<<" "<<genders[i]<<"\n";
                }
            }
        } else if(choice==3){
            // Delete by age
            int start_age,end_age;
            cout<<"\nEnter start and end age: "; cin>>start_age>>end_age;
            for(int i=0;i<added;i++){
                if(ages[i]>=start_age&&ages[i]<=end_age){
                    ages[i]=-1;
                }
            }
        } else{
            // Update Salary by name
            string name;
            double new_salary;
            bool is_found=false;
            cout<<"\nEnter name and new salary: "; cin>>name>>new_salary;
            for(int i=0;i<added;i++){
                if(ages[i]!=-1&&names[i]==name){
                    is_found=true;
                    salaries[i]=new_salary;
                    break;
                }
            }
            if(!is_found){
                cout<<"No employee with this name!\n";
            }
        }
 }




//----- End ----//
    return 0;
}
