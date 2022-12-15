#include <iostream>
using namespace std;
// else ale
//void main()
 main main()
// () parametr
{
    int nliczba;
    cout << "wprowadz liczbe wieksza od 10: ";
    cin >> nliczba;
    if (nliczba > 10) {
        cout << " Dziękuję" << std::endl;
        cout << " Wciśnij dowolny przycisk aby zakończyć ";
    } else {
        cout << " Liczba " << nliczba
             << " nie jest większa od 10." << std::endl;
        cout << " czuj sie upomniany: P";
    }
    getch();
}
