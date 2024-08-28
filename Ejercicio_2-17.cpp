#include <iostream>
using namespace std;

int main() {
    //a) Using one statement with two stream insertion operators
    cout << "V W X Y Z" << endl;
    //b) Using one statement with four stream insertion operators
    cout << "V " << "W " << "X " << "Y Z" << endl;
    //c) Using two statements with one stream insertion operator each
    cout << "V W X ";
    cout << "Y Z" << endl;

    return 0;
}
