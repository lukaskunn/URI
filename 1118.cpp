#include <iostream>
 
using namespace std;
 
int main() {
 
    float nota1, nota2, media;
    int control = 1;

    while(control != 2){
        cin >> nota1;
        while (nota1 < 0 || nota1 > 10)
        {
            cout << "nota invalida\n";
            cin >> nota1;
        }
        cin >> nota2;
        while (nota2 < 0 || nota2 > 10)
        {
            cout << "nota invalida\n";
            cin >> nota2;
        }
        media = (nota1 + nota2) / 2;
        printf("media = %.2f\n", media); 
        std::cout << "novo calculo (1-sim 2-nao)" << std::endl;
        cin >> control;
        while(control != 1 && control != 2){
            std::cout << "novo calculo (1-sim 2-nao)" << std::endl;
            cin >> control;
        }
    }
    
    return 0;
}