#include <iostream> 
#include <string.h> 
  
using namespace std; 
  

int main(){ 
    
    string word;
    string guess;
    

    //Menu and player enters word to guess
    cout << "HANGMAN" <<endl<<endl;
    cout << "Enter a word: ";
    cin >> word; 
    
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


    //ASK FOR WORD IN GUESS STRING STILL PENDING
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
    }
    

//in case player wants to guess one letter
}else{
    for (int i = 0; i < Wsize; i++){
        if (word[i] == guess[0]){
            toWin = toWin - 1;
            empty[i] = guess[0];
        }
    }
    for(int j = 0; j < Wsize; j++){
        cout <<empty[j] << " ";
    }cout << endl;
    
}



}




    return 0; 
}