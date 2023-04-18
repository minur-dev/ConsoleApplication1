#include <iostream>
#include <string>

using namespace std;

void method1();

int main() {
    cout << "Hello i am luke" << endl;

    method1();

    return 0;
}

void method1() {
    cout << "Enter Your Name." << endl;
    string name1;
    getline(cin, name1);

    cout << "Hello " << name1 << "." << endl;
    cout << "What game do you play?" << endl;
    getline(cin, name1);

    cout << "What's your level in " << name1 << endl;
    string gamelvl;
    getline(cin, gamelvl);
    try {
        int gamelevel = stoi(gamelvl);
        if (gamelevel < 15) {
            cout << "Ha! Ha!.." << endl;
        }
        else if (gamelevel < 40) {
            cout << "noobs.." << endl;
        }
        else if (gamelevel > 60) {
            cout << "Superb........" << endl;
        }
        else {
            cout << "Good." << endl;
        }
    }
    catch (const std::exception& e) {
        cout << "Invalid input: " << e.what() << endl;
    }

    method1();
}