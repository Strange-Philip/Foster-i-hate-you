#include <iostream>

int main() {
    string movement;
    string nutrition;
    cout << "Please enter yes or no for the following....."
    cout << "Does the organism move?"
    cin >> movement;
    cout << "Does the organism eat?"
    cin >> nutrition;
    if(movement== "yes"||nutrition||"yes"){
        cout<< "Yes  there are extra terrestrial creatures on other planets"
    }else{
         cout<< "No there are no extra terrestrial creatures on other planets"
    }
    return 0;
}
