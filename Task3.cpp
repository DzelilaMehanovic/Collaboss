#include <iostream>
using namespace std;
#include <string>

int main(){
    
    int number; //input from user
    cout<<"Enter number"<<endl;
    cin>>number;
    
    int index = 0; 
    string arr[number];
    
    for(int i = 1; i<=number; i++){
        if(i%3 == 0 && i%5 == 0){
            //cout<<" fizzbuzz ";
            arr[index] = "\'fizzbuzz\'";
            index++;
        }
        else if(i%3 == 0){
           // cout<<" fizz ";
            arr[index] = "\'fizz\'";
            index++;
        }
        else if(i%5 == 0){
            //cout<<" buzz ";
            arr[index] = "\'buzz\'";
            index++;
        }
        else {
            //cout<<" "<< i <<" " ;
            arr[index] = to_string(i); //number is converted to string, so everything is stored in one string array
            index++;
        }
    }
    
    for(int i=0; i <= index; i++){
        cout<<" "<<arr[i]<<" ";
    }
    
    return 0;
}
