#include <iostream> 
#include <string.h> 
  
using namespace std; 


//PENDING IMPLEMENTATION: to turn into lower case
/*
string toLowerCase(string str) {
        
        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + 32;
        
        return str;
    }
*/

int main(){ 
    
    string word;
    string guess;
    int toLose;
    bool RW;
    

    //Menu and player enters word to guess
    cout << "HANGMAN" <<endl<<endl;
    cout << "Enter a word: ";
    cin >> word; 
    cout << "Enter # of guesses: ";
    cin >>toLose;
    
    //to determine word size for for loops and arrays
    int Wsize = word.size();
    int toWin = word.size();

    system("clear");

    //array that will have "_" where the word is "covered"
    char empty[Wsize];
    for (int i = 0; i < Wsize; i++){
        empty[i] = '_';
        cout << empty[i] << " ";
    }
    cout << endl;

    


while(toWin != 0){


    
    cout << "Enter a guess: ";
    cin >> guess;



    //in case player wants to guess whole word
    if (guess.size() == Wsize){
        if (guess == word){
        
        for (int i = 0; i < Wsize; i++){
        empty[i] = word[i];
        cout << empty[i];
        }
        cout << endl; 
        toWin = 0;  

    }else{
        cout << "Wrong" <<endl;
        toLose--;
        cout <<"# Guesses to lose: "<< toLose <<endl;
    }
    

    //in case player wants to guess one letter
    }else{
        for (int i = 0; i < Wsize; i++){
            if (word[i] == guess[0]){
                toWin = toWin - 1;
                empty[i] = guess[0];
                RW = true;
                break;
                //CHECK TO SEE IF THE "BREAK" WORKED
            }
        }
        for(int j = 0; j < Wsize; j++){
            cout <<empty[j] << " ";
            }cout << endl;
    
    }//END ELSE


}//END WHILE




return 0; 
}
