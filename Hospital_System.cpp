#include <iostream>;
#include <cstdlib>;
using namespace std;
/*
    1-20 specialization
    Status: 0 regular, 1 urgent
    If 5 patients exist, don't accept
    If user is regular add in end
    If user is urgent add in Begin
*/

const int MAX_SPECIALIZATION=20;
const int MAX_PATIENTS=5;

string namesList[MAX_SPECIALIZATION][MAX_PATIENTS];
int statusList[MAX_SPECIALIZATION][MAX_PATIENTS];
int queue_length[MAX_SPECIALIZATION];

int hospitalMenu(){
    int choice=-1;
    cout<<"\nEnter your choice:\n";
    cout<<"1) Add new patient\n";
    cout<<"2) Print all patients\n";
    cout<<"3) Get next patient\n";
    cout<<"4) Exit\n";
    cout<<"-> Enter choice here: ";
    cin>>choice;
    return choice;
}

void shift_right(int spec, string ns[], int st[]){
    int len=queue_length[spec];
    for(int i=len-1;i>=0;i--){
        ns[i+1]=ns[i];
        st[i+1]=st[i];
    }
    queue_length[spec]++;
}
bool addPatient(){
    string name;
    int spec,status;
    cout<<"\nEnter specialization, name, status: "; cin>>spec>>name>>status;
    int specNum = queue_length[spec];

    if(spec<1||spec>20){
        cout<<"Sorry we don't have this specialization, we have from 1 to 20 :)\n";
        return false;
    }

    if(status!=0&&status!=1){
        cout<<"Sorry, we have only two status Regular(0), Urgent(1)\n";
        return false;
    }

    if(specNum>=MAX_PATIENTS){
        cout<<"Sorry we can't add more patients for this specialization\n";
        return false;
    }

    if(status==0){
        namesList[spec][specNum]=name;
        statusList[spec][specNum]=status;
        queue_length[spec]++;
    }else {
        shift_right(spec,namesList[spec],statusList[spec]);
        namesList[spec][0]=name;
        statusList[spec][0]=status;
    }
    return true;

//    if(spec<1||spec>20){
//        cout<<"Sorry we don't have this specialization, we have from 1 to 20 :)\n";
//    } else if(status!=0&&status!=1){
//        cout<<"Sorry, we have only two status Regular(0), Urgent(1)\n";
//    } else {
//        if((specNum+1)==MAX_PATIENTS){
//
//        } else {
//            if(specNum==0||status==0){
//                namesList[spec][specNum]=name;
//                statusList[spec][specNum]=status;
//                queue_length[spec]++;
//            } else{
//                for(int i=specNum-1;i>=0;i--){
//                    namesList[spec][i+1]=namesList[spec][i];
//                    statusList[spec][i+1]=statusList[spec][i];
//                }
//                namesList[spec][0]=name;
//                statusList[spec][0]=status;
//                queue_length[spec]++;
//            }
//        }
//    }
}

void print_patient(int spec, string nms[],int sts[]){
    int len=queue_length[spec];
    if(len==0){
        return;
    }
    cout<<"\nThere are "<<len<<" patients in specialization "<<spec<<"\n";
    for(int i=0;i<len;i++){
        cout<<"- "<<nms[i]<<" ";
        if(sts[i]){
            cout<<"urgent\n";
        } else {
            cout<<"regular\n";
        }
    }
}
void printPatients(){
    cout<<"\n***********************";
    for(int i=0;i<MAX_SPECIALIZATION;i++){
        print_patient(i,namesList[i],statusList[i]);
    }
    cout<<"\n";
}

void delete_patient(int spec, string nms[],int sts[]){
    int len=queue_length[spec];
    for(int i=1;i>len;i++){
        nms[i-1]=nms[i];
        sts[i-1]=sts[i];
    }
    queue_length[spec]--;
}
void nextPatient(){
    int spec;
    cout<<"\nEnter specialization: "; cin>>spec;

    int len=queue_length[spec];

    if(len==0){
        cout<<"No patients at the moment. Have rest doctor :)\n";
        return;
    }

    cout<<namesList[spec][0]<<" please go with the Doctor :)\n";
    delete_patient(spec,namesList[spec],statusList[spec]);
}

void hospital_system(){
    while(true){
        int choice=hospitalMenu();
        if(!(choice>=1&&choice<=4)){
            cout<<"\nInvalid choice. Please try again :)\n";
            continue;
        } else if(choice==1){
            addPatient();
        } else if(choice==2){
            printPatients();
        } else if(choice==3){
            nextPatient();
        } else{
            exit(0);
        }
    }
}


int main(){
    hospital_system();
    return 0;
}
