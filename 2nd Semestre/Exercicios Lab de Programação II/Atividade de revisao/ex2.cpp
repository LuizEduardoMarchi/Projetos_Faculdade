#include <iostream>//Inclus�o de biblioteca
#include <locale.h>//Inclus�o de biblioteca

using namespace std;

int main(){ //Fun��o Principal

    setlocale(LC_ALL,"portuguese");//Inclus�o de bibliotecas de caracteres especiais

    //Area de variavel
    int indice;

    cout << "Digite o indice de poului��o:";
    cin >> indice;//Leitura de indice de polui��o

    //Verifica qual � o tipo de polui��o
    if(indice < 35){
        cout << "O indice de poului��o � agradavel!";
    }else if(indice >=35 && indice < 60){
        cout << "O indice de polui��o � desagradavel!";
        }else{
            cout << "O indice de polui��o � perigoso!";
            }

    return 0;
}
