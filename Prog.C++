#include <iostream>
#include <string.h>
using namespace std; 
int main()
{
 
int resposta, quantidade_pessoas_salao, quantidade_pessoas_cozinha; 
float seg, ter, quar, quin, sex, sab, taxa_t, taxa_30, taxa_70, taxa_individual_salao, taxa_individual_cozinha;
do  { 
cout << "*****VAMOS CALCULAR ESSA TAXA*****" << endl; 
cout << endl;  
cout<< "Digite a quantidade de pessoas no salao " <<endl; 
cin >> quantidade_pessoas_salao; 
cout << "Digite a quantidade de pessoas na cozinha" << endl; 
cin >> quantidade_pessoas_cozinha; 
cout << "Digite o valor da taxa referente a cada dia da semana " << endl; 
cout << "Segunda = "; 
cin >> seg; 
cout << "Terça  = "; 
cin >> ter; 
cout << "Quarta = "; 
cin >> quar; 
cout <<"Quinta  = "; 
cin >> quin; 
cout << "Sexta  = "; 
cin >> sex; 
cout << "Sabado = "; 
cin >> sab; 
taxa_t = seg+ter+quar+quin+sex+sab; 
cout << endl; 
cout << "O valor total da taxa e  de = " << taxa_t << endl; 

taxa_30 = 0.30 * taxa_t; 
taxa_70 = 0.70 * taxa_t; 

cout << endl; 
cout << "O valor da taxa total do salao e    = " << taxa_70 << endl; 
cout << "O valor da taxa total  da cozinha e = " << taxa_30 << endl; 
taxa_individual_salao = taxa_70 / quantidade_pessoas_salao;  
taxa_individual_cozinha = taxa_30 / quantidade_pessoas_cozinha; 
cout << endl; 
cout << "O valor da taxa individual do salao e = " << taxa_individual_salao << endl; 
cout << "O valor da taxa individual da cozinha e " << taxa_individual_cozinha << endl; 
cout << endl; 
cout << "Gostaria de refazer o calculo? " << endl; 
cout << endl; 
cout << "(1) Para sim " << endl;  
cout << "(0) Para nao " << endl;
cin >> resposta; 
if (resposta == 1 ){
   system("clear");
}
if (resposta == 0){
    cout << "AGORA SÓ MANDAR PARA A VANESSA PAGAR!!!"<< endl; 
}
} while ( resposta == 1); 


return 0; 
}
