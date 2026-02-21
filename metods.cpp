#include "main.h"
#include <iostream>



void book::returnbook() {
    if(available == false) {
        available = true;
        cout << "book is lend:" << title << endl;
    }
    else {
        cout << "the book is already in a librery" << endl;
    }
}
void book::showinfo() {
    cout << "name: " << title << endl;
    cout << "autor: " << autor << endl;
    cout << "yaer: " << year << endl;
    cout << "condition: ";
    if (available)
        cout << "free" << endl;
    else
        cout << "not free" << endl;
}

