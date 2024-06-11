#include "Header1.h"

using namespace std;


int main() {

    const int initialSize = 100;
    int size = initialSize;
    int* arr = new int[size];



    ifstream inFS("A1input.txt"); //make stream for input values

    if (!inFS.is_open()) { //check if file can open
        cout << "Unable to open file." << endl;
    }

    for (int i = 0; i < size; ++i) { //read values into array      
        inFS >> arr[i];
    }

    inFS.close(); //close file stream


    string userInput = "6";

    while (userInput != "0") { //set loop to go through menu and perform functions accordingly

        cout << endl << "1 - Check for value" << endl;
        cout << "2 - Modify value" << endl;
        cout << "3 - Add new value" << endl;
        cout << "4 - Delete value" << endl;
        cout << "5 - Print array" << endl;
        cout << "0 - Exit" << endl << endl;
        cout << "==> ";
        cin >> userInput;

        cout << endl << endl;

        if (userInput == "1") {
            int numToCheck;
            cout << "Enter an integer to check for ==> ";
            cin >> numToCheck;
            cout << endl;

            int index = returnIndex(arr, numToCheck, size);

            cout << numToCheck << " is at index " << index;
        }

        else if (userInput == "2") {
            int index;
            int newValue;
            cout << "What index value do you want to modify? ==> ";
            cin >> index;
            cout << endl << "What is the new value? ==> ";
            cin >> newValue;
            cout << endl << endl;
            try { //add try & catch blocks to account for any errors in user input
                modifyInt(arr, index, newValue, size);

            }
            catch (const exception& ex) {
                cerr << "Exception occurred\n";
                cerr << ex.what() << endl;
                abort();
            }
        }

        else if (userInput == "3") {
            int numToAdd;
            cout << "What value do you want to add? ==> ";
            cin >> numToAdd;
            try {
                addInt(arr, numToAdd, size);

            }
            catch (const exception& ex) {
                cerr << "Exception occurred\n";
                cerr << ex.what() << endl;
                abort();
            }
        }

        else if (userInput == "4") {
            int indexToDelete;
            cout << "What index's value do you want to delete? ==> ";
            cin >> indexToDelete;
            deleteInt(arr, indexToDelete, size);
        }

        else if (userInput == "5") {
            int j = 0;
            for (int i = 0; i < size; i++) {
                if (j == 10) {
                    cout << endl;
                    j = 0;
                }
                cout << arr[i] << " ";
                j++;
            }
        }

        cout << endl << endl;
    }



    return 0;


}