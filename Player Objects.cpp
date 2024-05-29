#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    int playerNo;
    string name;
    int numMatches;
    int *goals;

public:
    Player(int playerNo, const string& name, int numMatches) : playerNo(playerNo), name(name), numMatches(numMatches) {
        goals = new int[numMatches];
    }

    // Destructor to deallocate memory
    ~Player() {
        delete[] goals;
    }

    void setGoals(int matchNumber, int goalsScored) {
        if (matchNumber >= 0 && matchNumber < numMatches) {
            goals[matchNumber] = goalsScored;
        } else {
            cout << "Invalid match number." << endl;
        }
    }

    void displayPlayerInfo() {
        cout << "Player No: " << playerNo << endl;
        cout << "Name: " << name << endl;
        cout << "Number of Matches: " << numMatches << endl;
        cout << "Goals scored in each match: ";
        for (int i = 0; i < numMatches; ++i) {
            cout << goals[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int playerNo, numMatches;
    string name;

    cout << "Enter player number: ";
    cin >> playerNo;
    cout << "Enter player name: ";
    cin >> name;
    cout << "Enter number of matches: ";
    cin >> numMatches;

    Player player(playerNo, name, numMatches);

    // Input goals for each match
    for (int i = 1; i <= numMatches; ++i) {
        int goals;
        cout << "Enter goals scored in match " << i << ": ";
        cin >> goals;
        player.setGoals(i - 1, goals);
    }

    cout << endl;
    player.displayPlayerInfo();
system("pause");
    return 0;
}
