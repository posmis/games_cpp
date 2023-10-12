#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(static_cast < unsigned int > (time(NULL)));

    int rand_numb = 1 + rand() % 100;
    int user_numb;
    int score = 0;

    cout << "   Welcome to Guess My Number" << endl;

    do{
        cout << "\nEnter number: ";
        cin >> user_numb;

        if(user_numb > rand_numb){
            cout << "To high!" << endl;
        }
        else if(user_numb < rand_numb){
            cout << "To low!" << endl;
        }
        score++;
    }while(user_numb != rand_numb);
    cout << "That's it! You got it in " << score << " guesses!" << endl;
}