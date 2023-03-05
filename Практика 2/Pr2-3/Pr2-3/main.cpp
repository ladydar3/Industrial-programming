#include "Figure.h"
#include <iostream>
using namespace std;

int main() {
    Figure mas[8];

    float x1, x2, x3, x4;
    float y1, y2, y3, y4;

    for (int i = 0; i < 3; i++) {

        cout << "Quadrilateral " << i + 1 << " x1,y1 =  " << endl;
        cin >> x1 >> y1;
        cout << "Quadrilateral " << i + 1 << " x2,y2 = " << endl;
        cin >> x2 >> y2;
        cout << "Quadrilateral " << i + 1 << " x3,y3 = " << endl;
        cin >> x3 >> y3;
        cout << "Quadrilateral " << i + 1 << " x4,y4 = " << endl;
        cin >> x4 >> y4;
        mas[i].figure(x1, x2, x3, x4, y1, y2, y3, y4);

    }

    for (int i = 0; i < 3; i++) {
        cout << "Parametr " << 1 << ": ";
        mas[i].show();

        cout << "It is rectangle? " << mas[i].is_prug() << endl;
        cout << "It is square? " << mas[i].is_square() << endl;
        cout << "It is rhomb? " << mas[i].is_romb() << endl;
        cout << "opisana? " << mas[i].is_out_circle() << endl;
        cout << "vpisana? " << mas[i].is_in_circle() << endl;

    }

}