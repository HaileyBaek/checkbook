
#include <iostream>
#include <string.h>

using namespace std;


string* createWordsArray(string sentence, int& outWordsArrSize){
    outWordsArrSize = 1;
    int stringsize = 0;
    
    char character;
    
    char * ch_arr [outWordsArrSize][100];
    
    int index= 0;
    
    
    stringsize = sentence.size();
    
    for(int i = 0; i < stringsize; i++ ){
        while(sentence[i] != ' '){
            ch_arr[index] += static_cast <string> (sentence[i]);
        }
        if(sentence[i] == ' '){
            outWordsArrSize++;
            index++;
        }
        
    }
    cout<<ch_arr;
    
    return ch_arr;
    
  
}


int main(){
    
    string sentence;
    int outWordsArrSize = 0;
    
    cout<<"please enter a sentece: ";
    getline(cin, sentence);
    
  
    createWordsArray(sentence, outWordsArrSize);
    
    
    return 0;
}
