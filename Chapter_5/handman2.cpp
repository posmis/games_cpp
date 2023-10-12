#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <ctime>

char input(std::string used);
void output(int wrong, int max_wrong, std::string word);

int main(){

    const int MAX_WRONG = 8;

    std::vector<std::string> words;
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");

    srand(static_cast<unsigned int>(time(NULL)));
    std::random_shuffle(words.begin(), words.end());
    const std::string THE_WORD = words[0];

    int wrong = 0;
    std::string soFar(THE_WORD.size(), '-');
    std::string used = "";
    std::cout << "Welcome to Hangman. Good luck!\n";

    while((wrong < MAX_WRONG) && (soFar != THE_WORD)){
        std::cout << "\n\nYou have " << (MAX_WRONG - wrong);
        std::cout << " incorrect guesses left.\n";
        std::cout << "\nYou've used the following letters:\n" << used << std::endl;
        std::cout << "\nSo far. the word is:\n" << soFar << std::endl;

        char guess = input(used);
        used += guess;
        
        if(THE_WORD.find(guess) != std::string::npos){
            std::cout << "That's right! " << guess << " is in the word.\n";
            for(int i = 0; i < THE_WORD.length(); i++){
                if(THE_WORD[i] == guess){
                    soFar[i] = guess;
                }
            }
        }
        else{
            std::cout << "Sorry. " << guess << " isn't in the word.\n";
            wrong++;
        }
    }

    output(wrong, MAX_WRONG, THE_WORD);

    return 0;
}

char input(std::string used){
    char guess;
        std::cout << "\n\nEnter your guess: ";
        std::cin >> guess;
        guess = toupper(guess);
        while(used.find(guess) != std::string::npos){
            std::cout << "\nYou've already guessed " << guess << std::endl;
            std::cout << "Enter your guess: ";
            std::cin >> guess;
            guess = toupper(guess);
        }
        return guess;
}

void output(int wrong, int max_wrong, std::string word){
    if(wrong == max_wrong){
        std::cout << "\nYou've been hanged!";
    }
    else{
        std::cout << "\nYou guessed it!";
    }
    std::cout << "\nThe word was " << word <<std::endl;
}