#include <iostream>
#include <string>
using namespace std;

void mostrar_nome();
void escolher_lugar();
string nomes[30], lugares[30];
int origem, destino;

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
 
 cout << "\n    PRA ONDE VAMOS? ";
 cout << "\n    Mais de 30 lugares para voc� escolher!" << endl;
 cout << endl;
 mostrar_nome();
 escolher_lugar();
 return 0;
}

void mostrar_nome(){
setlocale(LC_ALL, "Portuguese_Brazil");
int i = 0;
nomes[0] = " [1]->  Rio de Janeiro";
nomes[1] = " [2]->  S�o Paulo";
nomes[2] = " [3]->  Bel�m";
nomes[3] = " [4]->  Bras�lia";
nomes[4] = " [5]->  Cuiab�";
nomes[5] = " [6]->  Curitiba";
nomes[6] = " [7]->  Miami";
nomes[7] = " [8]->  Fort Lauderdale";
nomes[8] = " [9]->  Florian�polis";
nomes[9] = " [10]-> Foartaleza";
nomes[10] = "[11]-> Goi�nia";
nomes[11] = "[12]-> Lisboa";
nomes[12] = "[13]-> Manaus";
nomes[13] = "[14]-> Orlando";
nomes[14] = "[15]-> Carrasco";
nomes[15] = "[16]-> Paris";
nomes[16] = "[17]-> Porto Alegre";
nomes[17] = "[18]-> Porto Velho";
nomes[18] = "[19]-> Recife";
nomes[19] = "[20]-> Santos Dumont";
nomes[20] = "[21]-> S�o Lu�z";
nomes[21] = "[22]Vit�ria";
nomes[22] = "[23]-> M�laga";
nomes[23] = "[24]-> Aracaju";
nomes[24] = "[25]-> Barcelona";
nomes[25] = "[26]-> Jo�o Pessoa";
nomes[26] = "[27]-> Los Angeles";
nomes[27] = "[28]-> New York";
nomes[28] = "[29]-> Alemanha";
nomes[29] = "[30]-> Argentina";
nomes[30] = "[31]-> Fran�a";
nomes[31] = "[32]-> Dubai";

for(i = 0; i < 31; i++){
  cout << nomes[i] << endl;
}
}

void escolher_lugar(){
setlocale(LC_ALL, "Portuguese_Brazil");

int i;
i = 0;
cout << endl;
cout << endl;
cout << "ORIGEM? ";

cout << origem;
for (i = 0; i < 31; i++){
 if(origem == lugares[i]){
  cout << "\nDestino? ";
  cin >> destino;
 }
 else{
  cout << "\nErro, tente novamente!" << endl;
 }
}


}