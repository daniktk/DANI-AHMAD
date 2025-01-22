

#include <iostream>
#include <string>
using namespace std;

int main() {
    string candidates[3] = {"Alice", "Bob", "Charlie"};
    int votes[3] ={0 , 0 , 0} ; // Votes for each candidate
    int numVoters;

    cout << "Welcome to the Voting System\n";
    cout << "Candidates:\n";
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << ". " << candidates[i] << "\n";
    }

    cout << "\nEnter the number of voters: ";
    cin >> numVoters;

    for (int i = 0; i < numVoters; ++i) {
        int choice;
        cout << "\nVoter " << i + 1 << ", enter the number of your candidate (1-3): ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            votes[choice - 1]++;
        } else {
            cout << "Invalid choice. Vote not counted.\n";
        }
    }

    // Display the results
    cout << "\nVoting Results:\n";
    for (int i = 0; i < 3; ++i) {
        cout << candidates[i] << ": " << votes[i] << " votes\n";
    }

    // Find the winner
    int maxVotes = 0;
    string winner;
    for (int i = 0; i < 3; ++i) {
        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winner = candidates[i];
        }
    }

    cout << "\nThe winner is: " << winner << " with " << maxVotes << " votes!\n";

    return 0;
}

