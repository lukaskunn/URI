#include <iostream>

using namespace std;

int main() {
    int l;

    while (cin >> l)
    {
        int num1, control = 0;
        while (l > 0)
        {
            cin >> num1; 
            if (num1 > control){
                control = num1;
            }
            l--;
        }

        if (control < 10){
            cout << "1\n";
        }else if (control < 20)
        {
            cout << "2\n";
        }else
        {
            cout << "3\n";
        }
    }
    
    

    return 0;
}