#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const string DIAS_SEMANA[7] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado", "Domingo"};

    int resposta;
    do {
        cout << "*****VAMOS CALCULAR ESSA TAXA*****" << endl << endl;

        int quantidade_pessoas_salao, quantidade_pessoas_cozinha;
        float taxa_individual_salao, taxa_individual_cozinha;
        float taxas[7] = {0.0};  // Array para armazenar as taxas de cada dia

        cout << "Digite a quantidade de pessoas no salão: ";
        cin >> quantidade_pessoas_salao;
        cout << "Digite a quantidade de pessoas na cozinha: ";
        cin >> quantidade_pessoas_cozinha;

        float taxa_total = 0.0;
        for (int i = 0; i < 7; ++i) {
            cout << "Digite o valor da taxa para " << DIAS_SEMANA[i] << ": ";
            cin >> taxas[i];
            taxa_total += taxas[i];
        }

        cout << endl;
        cout << "O valor total da taxa é de: " << taxa_total << endl;

        float taxa_salao = 0.70 * taxa_total;
        float taxa_cozinha = 0.30 * taxa_total;

        cout << "O valor da taxa total do salão é: " << taxa_salao << endl;
        cout << "O valor da taxa total da cozinha é: " << taxa_cozinha << endl;

        taxa_individual_salao = taxa_salao / quantidade_pessoas_salao;
        taxa_individual_cozinha = taxa_cozinha / quantidade_pessoas_cozinha;

        cout << endl;
        cout << "O valor da taxa individual do salão é: " << taxa_individual_salao << endl;
        cout << "O valor da taxa individual da cozinha é: " << taxa_individual_cozinha << endl;

        cout << endl;
        cout << "Gostaria de refazer o cálculo?" << endl << endl;
        cout << "(1) Para sim" << endl;
        cout << "(0) Para não" << endl;
        cin >> resposta;

        cout << string(50, '\n');  // Limpa a tela (mais portável que system("clear"))

    } while (resposta == 1);

    cout << "AGORA SÓ MANDAR PARA A VANESSA PAGAR!!!" << endl;

    return 0;
}
