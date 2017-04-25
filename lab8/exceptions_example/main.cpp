#include <iostream>

using namespace std;

class CircleException {
    // Oznacza ze nie mozna wyrysowac kola
};

class BallException : public CircleException {
    // Oznacza ze nie mozna wyrysowac kuli
};

void drawBall() {
    throw BallException();
}

int main() {
    try {
        drawBall();
    } catch (BallException b) {
        cout << "Blad podczas rysowania kuli" << endl;
    } catch (CircleException a) {
        cout << "Blad podczas rysowania kola" << endl;
    }
/* Wystarczylo zamienic miejscami dwa catche poniewaz najpierw wywolywalismy klase ogolna ktora lapie takze szczegolna
 * poniewaz szczegolna jest takze w istocie ta ogolna plus to co zadeklarowalismy dodatkowo, wiec najpierw trzeba
 * sprawdzic podklase a dopiero potem ogolniejsza nadklase */
}