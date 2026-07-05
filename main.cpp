// base includes
#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
#include <stdlib.h>
// custom includes
#include "Tickets.h"
// namespace(s)
using namespace std;


int main() {
    srand(time(0));
    bool first_time = true;
    int choice = 0; // set to -2 so nothing else 
    const int machine_count = 0;
    bool in_menu = true;

    // fairgrounds
    cout << "You enter the fairgrounds, looking around at the strange machines. As you take another step in, a speaker above a wooden board painted to look like a circus ringmaster activates.\n";
    
    cout << "\"Welcome to the fair, home of the Wacky Machine!\nThis strange machine can do all sorts of neat tricks, such as guess what number you're thinking of, WIP, and more!\nYou have " << Tickets::amount << " tickets. You can spend them at the Wacky Machine.\n";
    cout << "...or at the other attractions, technically.\"\n\n";

    while (choice != 1 && choice != 2) {
        cout << "Where would you like to go?\n1 - The Wacky Machine\n2 - look around\n\n> ";
        cin >> choice;
    }

    if (choice == 2) {
        cout << "you look around the fair for a few minutes, finding nothing of interest to spend your tickets on.\nWith nothing else to do, you decide to check out the Wacky Machine.\n";
    }
    choice = 0; // resets choice for the Wacky Machine

    // continues on to the Wacky Machine automatically after here

    // Wacky Machine
    while (Tickets::amount > 0) {
        if (first_time == true) {
            cout << "\nYou make your way towards a large metal box covered in rust, the words \"The Wacky Machine\" are written on the door.\nYou open the door and walk in, the door automatically closing behind you.\nYou sit down in a padded chair in front of a strange looking screen with a four of keys in front of it.\n\n";
            first_time = false;
        }

        cout << "________________________________________\n\n\nWelcome to the Wacky Machine! Please select the mode you would like to activate.\n";

        // menu
        while (in_menu == true) { // WIP
            cout << Tickets::amount;
        }

        // for testing purposes, to be removed
        Tickets::amount -= 100;
    }
    return 0;
}

// Tickets::amount
// this_thread::sleep_for(chrono::seconds(5));