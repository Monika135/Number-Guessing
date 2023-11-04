#include <iostream>
#include<cstdlib>
using namespace std;
int main(){
   cout<<"Welcome to the guessing game (Enter numbers between 1 to 100)"<<endl;
    int no_to_be_guessed = rand()%100;
    int user_input;
    cout<<"Enter the number: ";
    cin>>user_input;
    while(user_input!=no_to_be_guessed){
    if(user_input>no_to_be_guessed){
        cout<<"Too High"<<endl;
    }
    else if(user_input<no_to_be_guessed){
        cout<<"Too Low"<<endl;
    }
    cout<<"Enter the number again: ";
    cin>>user_input;
}

cout<<"Congratulations! you have guessed it right"<<endl;
}
