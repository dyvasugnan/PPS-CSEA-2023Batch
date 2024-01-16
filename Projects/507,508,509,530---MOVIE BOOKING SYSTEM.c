#include <stdio.h>

void displayMovies() {
    printf("1. SALAAR\n");
    printf("2. HI NANNA\n");
    printf("3. AQUAMAN\n");
}

void displayTheatres() {
    printf("1. AMB Cinemas: Gachibowli\n");
    printf("2. GPR Multiplex: Nizampet\n");
    printf("3. PVR: Nexus Mall Kukatpally, Hyderabad\n");
}

void displayDatesAndTimings() {
    printf("1. 20th Dec 2023 - 9:00am\n");
    printf("2. 21st Dec 2023 - 12:00pm\n");
    printf("3. 22nd Dec 2023 - 6:00pm\n");
}

int calculateBill(int tickets, int snacksCost) {
    int ticketPrice = 100;
    float gst = 0.18;
    float totalAmount = tickets * ticketPrice + snacksCost;
    float gstAmount = totalAmount * gst;
    float billAmount = totalAmount + gstAmount;

    printf("Total Amount: %.2f INR\n", totalAmount);
    printf("GST Amount: %.2f INR\n", gstAmount);
    printf("Bill Amount: %.2f INR\n", billAmount);

    return 0;
}

void greetUser() {
    printf("Welcome to Movie Ticket Booking!\n");
    printf("Good Morning!\n");
}

void displaySnackOptions() {
    printf("Snack Options:\n");
    printf("1. Popcorn - 50 INR\n");
    printf("2. Soft Drink - 30 INR\n");
    printf("3. Nachos - 40 INR\n");
}

int main() {
    int choice;

    greetUser();

    printf("Select a movie:\n");
    displayMovies();
    scanf("%d", &choice);

    printf("Select a theatre:\n");
    displayTheatres();
    scanf("%d", &choice);

    printf("Select a date and timing:\n");
    displayDatesAndTimings();
    scanf("%d", &choice);

    printf("Enter the number of tickets:\n");
    int tickets;
    scanf("%d", &tickets);

    int snacksCost = 0;
    printf("Do you want to add snacks to your order? (1 for Yes, 0 for No): ");
    int snackChoice;
    scanf("%d", &snackChoice);

    if (snackChoice == 1) {
        displaySnackOptions();
        printf("Select a snack option (1, 2, or 3): ");
        int snackOption;
        scanf("%d", &snackOption);

        switch (snackOption) {
            case 1:
                snacksCost += 50;
                break;
            case 2:
                snacksCost += 30;
                break;
            case 3:
                snacksCost += 40;
                break;
            default:
                printf("Invalid snack option. No snacks added.\n");
        }
    }

    printf("Bill Details:\n");
    calculateBill(tickets, snacksCost);

    printf("Thank you for booking with us. Enjoy your movie!\n");
    return 0;
}


