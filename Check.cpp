#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a Number"<< endl;
    cin>> num;

    if(num % 2==0){
        cout<<"The Number is Even"<< endl;
      } else {
            cout<<"The Number is Odd" << endl;
        };

        if (num >0)
        {
         cout<<"The number is Positive" << endl;
        }
         else if(num<0){
            cout<<"The Number is Negative"<<endl;
         }
            else if(num=0){
            cout<<"Zero" <<endl;
         }

    return 0;
}