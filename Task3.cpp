#include <iostream>
using namespace std;

int main(){
    
    int number; //variable that will hold input from user
    cout<<"Enter number"<<endl;
    cin>>number;
 
    for(int i = 1; i<=number; i++){
        if(i%3 == 0 && i%5 == 0){
            cout<<"fizzbuzz ";
        }
        else if(i%3 == 0){
            cout<<" fizz ";
        }
        else if(i%5 == 0){
            cout<<" buzz ";
        }
        else {
            cout<<" "<< i <<" " ;
        }
    }
    return 0;
}