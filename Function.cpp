#include <iostream>
using namespace std;

// Employee Program (v2)
void employee_system{
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
int main(){
//----- Application - Employee Program ----//
    int MAX=10000;

    string names[MAX];
    int ages[MAX];
    double salaries[MAX];
    char genders[MAX];
    int added=0;


 }






















    // End
    return 0;
}
