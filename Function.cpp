#include <iostream>
#include <string>
using namespace std;
//-------- Functions --------
// P1 - Max of 6 numbers


// P2 - Reverse a string
void reverse_str(string &str){
    for(int i=0;i<(str.size()/2);i++){
            char temp=str[i];
            str[i]=str[str.size()-i];
            str[str.size()-i]=temp;
    }
}

// P3 - Calculator
int calc_choice(){
    int choice=-1;

}
float calc_add(){}
float calc_substract(){}
float calc_multiply(){}
float calc_divide(){}
void Calculator(){
    int choice = calc_choice();
    bool run=true;
    while(run){
        if(choice<0||choice>5){
            cout<<"Error, Pls choose one :) \n";
            continue;
        } else if(choice==1){
            calc_add();
        } else if(choice==2){
            calc_substract();
        } else if(choice==3){
            calc_multiply();
        } else if(choice==4){
            calc_divide();
        } else {
            run=false;
            cout<<"Byeeeeee :)";
        }
    }

}

int main(){
//-------- Homework --------
// P1 - Max of 6 numbers

// P2 - Reverse a string
//    string stra;
//    cin>>stra;
//    reverse_str(stra);
//    cout<<stra<<"\n";

// P3 - Calculator
    Calculator();


    // End
    return 0;
}
