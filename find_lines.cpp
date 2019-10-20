
#include <iostream>

using namespace std;

int * findlines(int num, int * arr, int size){
    int * result = new int;
    int index = 0;
    
    for(int i = 0; i < size ; i++){
        if(num == arr[i]){
            result[index++] = i;
        }
        
    }

    return result;
}

int main(){
    int input;
    int * arr = new int;
    int i = 0;
    
    int num;
    
    int result[100];
    
    cout<<"Please enter a sequence of positive integers, each in a separate line. End you input by typing -1: ";
    cin>>input;
    
    while(input != -1){
        arr[i] = input;
        cin>>input;
        i++;
        
    }
    
   
    cout<<"Enter a number you want to search: ";
    cin>>num;
    
    result = findlines(num, arr, i);
    
    cout<<num<<" shows in line "<<result<<endl;
    
    
    return 0;
}
