#include <iostream> 
using namespace std;
int isPrime(int factor);
int main(){
    
    int number; 
    cout<<"Enter number"<<endl;
    cin>>number;
    int arr[100]={};
    int index=0;
    int divider = 0;
    
    while(number>1){
    for(int i = 2; i <= number; i++){
        if(number%i==0){
            int numberOfFactors = isPrime(i);
            if(numberOfFactors == 2 ){
                arr[index]=i;
                index++;
            }            
          divider = i;
          i=number;
          number = number / divider;     
       }
    }   
}
  if(index==0){
      cout<<"Array is empty, no prime factors"<<endl;
  }
  else{
    cout<<"Prime factors of "<<number<<endl;
    for(int i=0; i<index; i++){
    cout<<arr[i]<<endl;
    }
  }
    return 0;
}
int isPrime(int factor){
            int numberOfFactors = 0; 
            for(int j = 1; j <= factor; j++){
                if(factor%j==0){
                    numberOfFactors++;
                }
            }
            return numberOfFactors;
}
