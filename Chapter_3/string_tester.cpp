#include <iostream>
#include <string>

using namespace std;

int main(){

    string word_1 = "Game";
    string word_2("Over");
    string word_3(3, '!');
    string phrase = word_1 + " " + word_2 + word_3;

    cout << "The phrase is: " << phrase << "\n\n";
    cout << "The phrase has " << phrase.size() << " characters in it. \n\n";
    cout << "The character at position 0 is: " << phrase[0] << "\n\n";
    cout << "Changing the character at position 0.\n";
    phrase[0] = 'L';
    cout << "The phrase is now: " << phrase << "\n\n";
    
    for(unsigned int i; i < phrase.size(); i++){
        cout << "Character at position " << i << " is: " << phrase[i] << endl;
    }

    cout << "\nThe sequence 'Over' begins at location ";
    cout << phrase.find("Over") << endl;
    if(phrase.find("eggplant") == string::npos){
        cout << "'eggplant' is not in the phrase.\n\n";
    }

    phrase.erase(4, 5);
    cout << "The phrase is now: " << phrase << endl;
    phrase.erase(4);
    cout << "The phrase is now: " << phrase << endl;
    phrase.erase();
    cout << "The phrase is now: " << phrase << endl;
    if(phrase.empty()){
        cout << "\nThe phrase is no more.\n";
    }

    return 0;
}