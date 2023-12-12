#include <stdio.h>

#define MAX_CANDIDATES 3

// Function to display the list of candidates
void displayCandidates() {
    printf("1. Candidate A\n");
    printf("2. Candidate B\n");
    printf("3. Candidate C\n");
}

int main() {
    int votes[MAX_CANDIDATES] = {0}; // Array to store the votes for each candidate

    int numVoters;
    printf("Enter the number of voters: ");
    scanf("%d", &numVoters);

    for (int i = 0; i < numVoters; i++) {
        printf("Vote %d:\n", i + 1);
        displayCandidates();

        int vote;
        printf("Enter your vote (1-3): ");
        scanf("%d", &vote);

        // Validate the vote
        if (vote >= 1 && vote <= MAX_CANDIDATES) {
            votes[vote - 1]++;
            printf("Vote recorded successfully!\n");
        } else {
            printf("Invalid vote! Please enter a number between 1 and %d.\n", MAX_CANDIDATES);
            i--; // Decrement i to re-enter the vote for the current voter
        }
    }

    // Display the vote counts for each candidate
    printf("\nVote Counts:\n");
    for (int i = 0; i < MAX_CANDIDATES; i++) {
        printf("Candidate %c: %d votes\n", 'A' + i, votes[i]);
    }

    // Determine the winner
    int maxVotesIndex = 0;
    for (int i = 1; i < MAX_CANDIDATES; i++) {
        if (votes[i] > votes[maxVotesIndex]) {
            maxVotesIndex = i;
        }
    }

    printf("Winner: Candidate %c\n", 'A' + maxVotesIndex);

    return 0;
}

