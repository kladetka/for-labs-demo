//
//
//

#ifndef UNTITLED_MAIN_H
#define UNTITLED_MAIN_H

#include <iostream>
#include <string>
using namespace std;
class book
{
private:
    string title;
    string autor;
    int year;
    bool available;

public:
    book(string t, string a, int y) {
        title = t;
        autor = a;
        year = y;
        available = true;
    }

    void borrow();
    void returnbook();
    void showinfo();
};

#endif //UNTITLED_MAIN_H