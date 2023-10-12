#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(static_cast < unsigned int > (time(NULL)));

    int user_numb;
    int rand_numb;
    int score = 0;

    cout << "   Welcome to Guess My Number" << endl;
    cout << "\nEnter number: ";
    cin >> user_numb;

    do{
        rand_numb = 1 + rand() % 100;
        if(rand_numb > user_numb){
            cout << "To high!" << endl;
        }
        else if(rand_numb < user_numb){
            cout << "To low!" << endl;
        }
        score++;
    }while(user_numb != rand_numb);
    cout << "That's it! Computer got it in " << score << " guesses!" << endl;
}