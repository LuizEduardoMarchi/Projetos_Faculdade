#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    FILE *registro_cliente;
    FILE *conta_bancaria;

    char registro[100],cliente[5];
    int num_conta, num_cliente, cod;
    float saldo;
    int codigo[100];
    int k = 0;

    conta_bancaria = fopen("conta_bancaria.txt", "a+");
    registro_cliente = fopen("registro_cliente.txt", "a+");

    if (registro_cliente == NULL) return 1;
    if (conta_bancaria == NULL) return 1;

    cout << "Digite o codigo do cliente a ser criado uma conta bancaria: ";
    cin >> cod;

    while (fgets(registro, 100, registro_cliente) != NULL)
    {
        int i = 0;
        int j = 0;
        while(registro[i] != ' ' && registro[i] != '\0' && registro[i] != '\n')
        {
            cliente[j++] = registro[i++]; 
        }
        cliente[j] = '\0';

        codigo[k++] = atoi(cliente);
    }
    for(int l = 0; l < k; l++)
    {
        cout << codigo << endl;
    }

    fprintf(conta_bancaria, "%d %d %f", cod,num_cliente,saldo);

    fclose(conta_bancaria);
    fclose(registro_cliente);
    return 0;
}