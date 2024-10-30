#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printOnConsoleMENU()
{
    int choice;
    cout << "choose  the category: " << endl;
    cout << "1. names of animals" << endl;
    cout << "2. Rwandan districts" << endl;
    cout << " 3.Football teams" << endl;
    cout << " 4.Exit" << endl;
    cin >> choice;

    while (true)
    {
        if (choice == 1)
        {
            char userInputLetter;
            cout << "Here you go,please  I have secretelygenerated the name of animal,please give letter and it should be in the generated word" << endl;
            cin >> userInputLetter;
            vector<string> animalNameLists = {"Rabbit", "buffalo", "kangaroo", "Cow"};
            int randNbr= rand();
            cout << randNbr <<endl;
            string randomWord= animalNameLists[randNbr];
            cout <<randomWord;
            break;

            
        }
        else if (choice == 2)
        {
            cout << "you chosed 2" << endl;
        }
        else if (choice == 3)
        {
            cout << "you chosed 3" << endl;
        }
        else if (choice == 4)
        {
            cout << "you exited, bye...." << endl;
            break;
        }
        else
        {
            cout << "invalid input, pleae choose  the valid one" << endl;
        }
    }
}

    void printRandoms(int min, int max, int count) {
    
        
        for (int i = 0; i < count; i++) {       
            int rd_num = rand() % (max - min + 1) + min;

            printf("%d ", rd_num);
        }
    }

int main()
{

    cout << "________________________________________Word Guessing Game_______________________________________" << endl;
    cout << "  " << endl;
    printOnConsoleMENU();
    return 0;
}
