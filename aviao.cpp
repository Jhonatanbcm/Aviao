#include <iostream>
#include <string>
using namespace std;

void mostrar_nome();
void lugar();
void escolher_lugar();
string nomes[31], lugares[31];
char destino_dnv;
int origem, destino;

int main(){
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
lugares[0] = "Rio de Janeiro";
lugares[1] = "S�o Paulo";
lugares[2] = "Bel�m";
lugares[3] = "Bras�lia";
lugares[4] = "Cuiab�";
lugares[5] = "Curitiba";
lugares[6] = "Miami";
lugares[7] = "Fort Lauderdale";
lugares[8] = "Florian�polis";
lugares[9] = "Foartaleza";
lugares[10] = "Goi�nia";
lugares[11] = "Lisboa";
lugares[12] = "Manaus";
lugares[13] = "Orlando";
lugares[14] = "Carrasco";
lugares[15] = "Paris";
lugares[16] = "Porto Alegre";
lugares[17] = "Porto Velho";
lugares[18] = "Recife";
lugares[19] = "Santos Dumont";
lugares[20] = "S�o Lu�z";
lugares[21] = "Vit�ria";
lugares[22] = "M�laga";
lugares[23] = "Aracaju";
lugares[24] = "Barcelona";
lugares[25] = "Jo�o Pessoa";
lugares[26] = "Los Angeles";
lugares[27] = "New York";
lugares[28] = "Alemanha";
lugares[29] = "Argentina";
lugares[30] = "Fran�a";
lugares[31] = "Dubai";
for(i < 0; i < 31; i++){
  cout << "[" << i << "]-> " << lugares[i]; 
  cout << "\n";
}
}
void escolher_lugar(){
setlocale(LC_ALL, "Portuguese_Brazil");

int i;
i = 0;
origem = 32;

while(origem < 1 || origem > 31){
 cout << "\nORIGEM? ";
 cin >> origem;
 switch (origem){
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 11:
  case 12:
  case 13:
  case 14:
  case 15:
  case 16:
  case 17:
  case 18:
  case 19:
  case 20:
  case 21:
  case 22:
  case 23:
  case 24:
  case 25:
  case 26:
  case 27:
  case 28:
  case 29:
  case 30:
  case 31:
  case 32:
  cout << "\nDESTINO? ";
  cin >> destino;
  if(destino == origem){
    cout << "\nErro, voc� j� selecionou " << lugares[origem] << " como origem!" << endl;
    cout << "\nSe deseja escolher outro destino ";
    cout << "\nDigite 'S' para SIM ou 'N' para N�O: ";
    cin >> destino_dnv;
  }
  else{
  cout << "\nORIGEM: " << lugares[origem];
  cout << "\nDESTINO: " << lugares[destino];
  }
  break;
  default:
    cout << "\nErro, tente novamente!" << endl;
    break;
    }
  }
}
void lugar(){
setlocale(LC_ALL, "Portuguese_Brazil");

}

