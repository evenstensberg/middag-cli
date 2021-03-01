#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "Hva er til middag?" << endl;

    char *dager[7] = {"Mandag: ", "Tirsdag: ", "Onsdag: ", "Torsdag: ", "Fredag: ", "Lørdag: ", "Søndag: "};
    ifstream inFile;
    inFile.open("./middag.txt");
    string stri;
    int i = 0;
    string middager[7] = { "", "", "", "", "", "", ""  };

    while (getline(inFile, stri)) {
        middager[i] = stri;
        i++;
    }

    int dag;
    cout << "Hvilken dag er det i dag?";
    cin >> dag;
    cout << dag << endl;
    cout << dager[dag - 1] << middager[dag - 1] << "\n";
}