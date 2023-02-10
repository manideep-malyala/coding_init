#include <iostream>
using namespace std;
int main()
{
    int r,c;
    cout << "enter the number of rows : ";
    cin >> r;
    cout << "enter the number of coloumns : ";
    cin >> c;
    cout << "\nprinting pattern...\n\n";
    
    for (int i = 1; i<=r ; i++){
        for (int j = 1; j<=c ; j++){
            cout << "*";
        } cout << "\n";
    }
    return 0;  
}




/*

enter the number of rows : 3
enter the number of coloumns : 3
printing pattern...

***
***
***

*/
