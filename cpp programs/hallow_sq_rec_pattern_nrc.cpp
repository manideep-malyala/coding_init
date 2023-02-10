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
        
        if ( i==1 || i==r){
            
            for ( int j = 1; j<=c; j++) { cout << "*"; }
        
        }
        
        else{
            
            cout << "*";
            for (int j = 1; j <= c-2; j++) { cout <<" "; }
            cout << "*";
        }
       
       cout << "\n"; 
    } 
    return 0;  
}





/*

enter the number of rows : 10
enter the number of coloumns : 10
printing pattern...

**********
*        *
*        *
*        *
*        *
*        *
*        *
*        *
*        *
**********

*/
