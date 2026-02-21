#include <iostream>
#include "main.h"
#include <string>

using namespace std;

int main() {
    string autor, title;
    int year;

    cout << "vvedit title:" << endl;
    getline(cin, title);

    cout << "vvedit autor:" << endl;
    getline(cin, autor);

    cout << "vvedit year:" << endl;
    cin >> year;
    cin.ignore();

    book b(title, autor, year);


    b.returnbook();
    b.showinfo();
}