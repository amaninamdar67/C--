#include<iostream>
using namespace std;
int main(){
    
    int marks;
    cout<<"Enter Your Marks: " << endl;
    cin>> marks;

    if (marks>=90)
    {
        cout<<"Grade A" << endl;
    }

    if(marks >=75 && marks <=90){
        cout<<"Grade B" <<endl;
    }
    
    if(marks >=50 && marks <=75){
        cout<<"Grade C"<<endl;
    }
    if(marks<=50){
        cout<<"Grade F";
    }
    return 0;
}

