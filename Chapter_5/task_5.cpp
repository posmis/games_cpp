#include <iostream>
#include <string>

using namespace std;

int input_number(string prompt = "Please enter a number: ");

int main(){

    int numb;
    numb = input_number();

    return 0;
}

int input_number(string prompt){
    int numb;
    cout << prompt;
    cin >> numb;
    return numb;
}