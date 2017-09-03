#include <iostream>
using namespace std;

int main(){
    
    int number; //variable that will hold input from user
    int fact=1;  //variable that will hold result
    
    cout<<"Enter number to find factorial"<<endl;
    cin>>number; //taking user input
    
    for(int i = number; i>0; i--){ //0! = 1, so smallest i = 1
        fact = fact *i;  //multiply previous result with new i 
}

    cout<<"Factorial of "<<number<<" is "<<fact<<endl; //print result
    return 0;
    
}