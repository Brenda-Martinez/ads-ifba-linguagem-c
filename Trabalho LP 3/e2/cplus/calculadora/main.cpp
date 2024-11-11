#include <iostream>

using namespace std;

float sum(float x, float y){
    return x + y;
}

float multiply(float x, float y){
    return x * y;
}

bool deseja_continuar(char escolha){
    if(escolha == 's'){
        system("cls");
        return true;
    }else if(escolha == 'n'){
        cout << "Operacao finalizada.\n";
        system("pause");
        return false;
    }else{
        cout << "Comando invalido. Operacao finalizada.\n";
        system("pause");
        return false;
    }
}

int main()
{
    bool continuar;

    do{
        cout << "======== CALCULADORA ========\n";
        cout << "=========== IFBA ============\n\n";
        cout << "1. Soma\n2.Multiplicacao\n3.Sair\n";

        bool repetir;
        int opcao;
        char opcao2;
        float n1, n2, op;

        do{
            cout << "Digite a operacao desejada: ";
            cin >> opcao;
            cout << "\n";

            switch(opcao){
                case 1:
                    cout << "N1: ";
                    cin >> n1;
                    getchar();
                    cout << "N2: ";
                    cin >> n2;

                    op = sum(n1, n2);

                    cout << n1 << " + " << n2 << " = " << op;
                    cout << "\nDeseja continuar? [s/n]: ";
                    cin >> opcao2;
                    getchar();

                    continuar = deseja_continuar(opcao2);
                    repetir = false;
                    break;
                case 2:
                    cout << "N1: ";
                    cin >> n1;
                    getchar();
                    cout << "N2: ";
                    cin >> n2;

                    op = multiply(n1, n2);

                    cout << n1 << " x " << n2 << " = " << op;
                    cout << "\nDeseja continuar? [s/n]: ";
                    cin >> opcao2;
                    getchar();

                    continuar = deseja_continuar(opcao2);
                    repetir = false;
                    break;
                case 3:
                    cout << "Operacao finalizada.";
                    system("pause");
                    repetir = false;
                    continuar = false;
                    break;
                default:
                    cout << "Comando invalido. Digite um numero indicado nas opcoes.\n";
                    system("pause");
                    system("cls");
            }
        }while(repetir);
    }while(continuar);
}
