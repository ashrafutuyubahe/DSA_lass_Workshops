#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;


int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}


void displayWord(const string& word, const vector<bool>& guessed) {
    for (size_t i = 0; i < word.size(); ++i) {
        if (guessed[i]) {
            cout << word[i];
        } else {
            cout << '_';
        }
    }
    cout << endl;
}


bool isWordGuessed(const vector<bool>& guessed) {
    return all_of(guessed.begin(), guessed.end(), [](bool b) { return b; });
}


void playGame(const vector<string>& wordList) {
    int randomIndex = getRandomNumber(0, wordList.size() - 1);
    string word = wordList[randomIndex];
    vector<bool> guessed(word.size(), false);
    int chances = 6;

    while (chances > 0) {
        cout << "Current word: ";
        displayWord(word, guessed);

        cout << "Enter a letter (or type 'exit' to quit): ";
        string input;
        cin >> input;

        if (input == "exit") {
            cout << "You exited the game. Bye!" << endl;
            return;
        }

        if (input.size() != 1) {
            cout << "Please enter a single letter." << endl;
            continue;
        }

        char guess = input[0];
        bool correctGuess = false;

        for (size_t i = 0; i < word.size(); ++i) {
            if (tolower(word[i]) == tolower(guess)) {
                guessed[i] = true;
                correctGuess = true;
            }
        }

        if (!correctGuess) {
            --chances;
            cout << "Incorrect guess. You have " << chances << " chances left." << endl;
        }

        if (isWordGuessed(guessed)) {
            cout << "Congratulations! You guessed the word: " << word << endl;
            return;
        }
    }

    cout << "You ran out of chances. The word was: " << word << endl;
}


void printOnConsoleMENU() {
    while (true) {
        int choice;
        cout << "Choose the category: " << endl;
        cout << "1. Names of animals" << endl;
        cout << "2. Rwandan districts" << endl;
        cout << "3. Football teams" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        vector<string> wordList;

        switch (choice) {
            case 1:
                wordList = {"Rabbit"};
                break;
            case 2:
                wordList = {"Kigali", "Musanze", "Rubavu", "Huye"};
                break;
            case 3:
                wordList = {"Arsenal", "Chelsea", "Liverpool", "Barcelona"};
                break;
            case 4:
                cout << "You exited, bye...." << endl;
                return;
            default:
                cout << "Invalid input, please choose a valid one." << endl;
                continue;
        }

        playGame(wordList);

        cout << "Do you want to play again? (yes/no): ";
        string playAgain;
        cin >> playAgain;
        if (playAgain != "yes") {
            break;
        }
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); 

    cout << "________________________________________Word Guessing Game_______________________________________" << endl;
    cout << "  " << endl;
    printOnConsoleMENU();
    return 0;
}
