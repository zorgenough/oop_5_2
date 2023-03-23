#include "OrArray.h"
#include "AndArray.h"

using namespace std;

int main()
{
    Array* a1 = new AndArray;
    Array* a2 = new AndArray;

    a1->input();
    a2->input();

    cout << a1->print() << endl;
    cout << a2->print() << endl;

    Array* result1 = new AndArray;
    result1 = a1->add(a2);
    cout << result1->print() << endl;
    result1->foreach();
    cout << result1->print() << endl << endl;

    Array* a3 = new OrArray;
    Array* a4 = new OrArray;

    a3->input();
    a4->input();

    cout << a3->print() << endl;
    cout << a4->print() << endl;

    Array* result2 = new AndArray;
    result2 = a3->add(a4);
    cout << result2->print() << endl;
    result2->foreach();
    cout << result2->print() << endl;
}