// Word Jumble Game
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = 
    {
        {"wall", "Do you feel you're banging your head against something?"},
        {"glasses", "These might help you see the answer."},
        {"labored", "Going slowly, is it?"},
        {"persistent", "Keep at it."},
        {"jumble", "It's what the game is all about."}
    };

    int score = 0;
    srand(static_cast<unsigned int>(time(NULL)));
    int choise = (rand() % (NUM_WORDS));
    string theWord = WORDS[choise][WORD];
    string theHint = WORDS[choise][HINT];

    string jumble = theWord;
    int length = jumble.size();
    for(int i = 0; i < length; i++){
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    cout << "\t\tWelcome to Word Jumble!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter 'hint' for a hint.\n";
    cout << "Enter 'quit' to quit the game.\n";
    cout << "The jumble is: " << jumble;
    
    string guess = "void";

    do {
        cout << "\n\nYour guess: ";
        cin >> guess;
        if(guess == "hint"){
            score--;
            cout << theHint;
        }
        else if ((guess != theWord) && (guess != "quit")){
            cout << "Sorry, that's not it.";
        }
    } while((guess != theWord) && (guess != "quit"));

    if(guess == theWord){
        score += theWord.size();
        cout << "\nThat's it! You guessed it!\n";
        cout << "There are your score: " << score << endl;;
    }
    cout << "\nThanks for playing.\n";

    return 0;
}