#include <iostream>
#include <cstdlib> //for rand and srand
#include <string>
#include <ctime>

using namespace std;

string suit[4] = { "Diamonds", "Hearts", "Spades", "Clubs" };
string facevalue[13] = { "Two", "Three", "Four", "Five", "Six", "Seven", "Eight",
        "Nine", "Ten", "Jack", "Queen", "King", "Ace" };


int main() {


    string card;
    std::srand(std::time(0));

    int cardvalue = rand() % 13;
    int cardsuit = rand() % 4;

    string cardColor = (cardsuit < 2) ? "red" : "black";

    card += facevalue[cardvalue];
    card += " of ";
    card += suit[cardsuit];


    std::srand(std::time(0));


    string guess;
    cout << "Will the card drawn be red or black?" << endl;
    cin >> guess;
    if (guess == cardColor) {
        cout << "You were correct! You guessed the card's color." << endl;
        cout << "The card was " << facevalue[cardvalue] << " of " << suit[cardsuit] << endl;
    } else {
        cout << "You were wrong! The card's color is " << cardColor << "." << endl;
        cout << "The card was " << facevalue[cardvalue] << " of " << suit[cardsuit] << endl << endl;
        cout << "You lost! Try again!" << endl << endl;
        main();
    }

    cout << "Will the card drawn be higher or lower than the first card?" << endl;

    std::srand(std::time(0));
    string guess2;
    cin >> guess2;
    int cardvalue2 = rand() % 13;
    int cardsuit2 = rand() % 4;
    string cardHoL = (cardvalue2 >= cardvalue) ? "higher" : "lower";
    if (guess2 == cardHoL) {
        cout << "You were correct! The card was " << cardHoL << " than the first card" << endl;
        cout << "The card was " << facevalue[cardvalue2] << " of " << suit[cardsuit2] << endl;
    }
    else {
        cout << "You were wrong! The card was " << cardHoL << " than the first card" << endl;
        cout << "The card was " << facevalue[cardvalue2] << " of " << suit[cardsuit2] << endl << endl;
        cout << "You lost! Try again!" << endl << endl;
        main();
    }

        cout << "Will the card drawn be inbetween or outside the first two cards?" << endl;

    std::srand(std::time(0));
    string guess3;
    cin >> guess3;
    int cardvalue3 = rand() % 13;
    int cardsuit3 = rand() % 4;

    string cardIoO;
    if (cardvalue3 >= cardvalue2){
        if(cardvalue3 >= cardvalue){
            cardIoO = "outside";
        }
        else {
            cardIoO = "inbetween";
        }
    }
    else if (cardvalue3 <= cardvalue2){
        if (cardvalue3 <= cardvalue) {
            cardIoO = "outside";
        } else {
        cardIoO = "inbetween";
        }
    }

    if (guess3 == cardIoO) {
        cout << "You were correct! The card was " << cardIoO << " of the first two cards" << endl;
        cout << "The card was " << facevalue[cardvalue3] << " of " << suit[cardsuit3] << endl;
    }
    else {
        cout << "You were wrong! The card was " << cardIoO << " the first two cards" << endl;
        cout << "The card was " << facevalue[cardvalue3] << " of " << suit[cardsuit3] << endl << endl;
        cout << "You lost! Try again!" << endl << endl;
        main();
    }

          cout << "What will be the suit of the drawn card?" << endl << "Options: Spade, Heart, Club, Diamond" << endl;

    std::srand(std::time(0));
    string guess4;
    cin >> guess4;
    int guessSG = 5;
    int cardvalue4 = rand() % 13;
    int cardsuit4 = rand() % 4;
    if (guess4 == "diamond"){
        guessSG = 0;
    } else if (guess4 == "heart") {
        guessSG = 1;
    } else if (guess4 == "spade") {
        guessSG = 2;
    } else if (guess4 == "club") {
        guessSG = 3;
    }


    if (guessSG == cardsuit4) {
        cout << "You were correct! The card`s suit was " << suit[cardsuit4] << endl;
        cout << "The card was " << facevalue[cardvalue4] << " of " << suit[cardsuit4] << endl;
        cout << "You won! Congratulations on guessing everything correctly! :) " << endl;
        cout << "Your winning cards were " << facevalue[cardvalue] << " of " << suit[cardsuit] << ", " << facevalue[cardvalue2] << " of " << suit[cardsuit2] << ", " << facevalue[cardvalue3] << " of " << suit[cardsuit3] << ", " << facevalue[cardvalue4] << " of " << suit[cardsuit4] << endl;
        exit(0);
    }
    else {
        cout << "You were wrong! The card`s suit was " << suit[cardsuit4] << endl;
        cout << "The card was " << facevalue[cardvalue4] << " of " << suit[cardsuit4] << endl << endl;
        cout << "You lost! Try again!" << endl << endl;
        main();
    }

}
