#include <iostream>
#include <string>
using namespace std;

void mostrar_nome();
void lugar();
void escolher_lugar();
string nomes[31], lugares[31];
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
nomes[0] =  "[1]->  Rio de Janeiro";
nomes[1] =  "[2]->  S�o Paulo";
nomes[2] =  "[3]->  Bel�m";
nomes[3] =  "[4]->  Bras�lia";
nomes[4] =  "[5]->  Cuiab�";
nomes[5] =  "[6]->  Curitiba";
nomes[6] =  "[7]->  Miami";
nomes[7] =  "[8]->  Fort Lauderdale";
nomes[8] =  "[9]->  Florian�polis";
nomes[9] =  "[10]-> Foartaleza";
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
nomes[21] = "[22]-> Vit�ria";
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
}
void escolher_lugar(){
setlocale(LC_ALL, "Portuguese_Brazil");

int i;
i = 0;
cout << endl;
cout << endl;
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
lugar();
cout << endl;
cout << "\nDESTINO? ";
cin >> destino;
break;
default:
  cout << "\nErro, tente novamente!" << endl;
  break;
}

}
void lugar(){
setlocale(LC_ALL, "Portuguese_Brazil");
if(origem == 1){
cout << lugares[0] << ": SELECIONADO!" << endl;
}
if(origem == 2){
cout << lugares[1] << ": SELECIONADO!" << endl;
}
if(origem == 3){
cout << lugares[2] << ": SELECIONADO!" << endl;
}
if(origem == 4){
cout << lugares[3] << ": SELECIONADO!" << endl;
}
if(origem == 5){
cout << lugares[4] << ": SELECIONADO!" << endl;
}
if(origem == 6){
cout << lugares[5] << ": SELECIONADO!" << endl;
}
if(origem == 7){
cout << lugares[6] << ": SELECIONADO!" << endl;
}
if(origem == 8){
cout << lugares[7] << ": SELECIONADO!" << endl;
}
if(origem == 9){
cout << lugares[8] << ": SELECIONADO!" << endl;
}
if(origem == 10){
cout << lugares[9] << ": SELECIONADO!" << endl;
}
if(origem == 11){
cout << lugares[10] << ": SELECIONADO!" << endl;
}
if(origem == 12){
cout << lugares[11] << ": SELECIONADO!" << endl;
}
if(origem == 13){
cout << lugares[12] << ": SELECIONADO!" << endl;
}
if(origem == 14){
cout << lugares[13] << ": SELECIONADO!" << endl;
}
if(origem == 15){
cout << lugares[14] << ": SELECIONADO!" << endl;
}
if(origem == 16){
cout << lugares[15] << ": SELECIONADO!" << endl;
}
if(origem == 17){
cout << lugares[16] << ": SELECIONADO!" << endl;
}
if(origem == 18){
cout << lugares[17] << ": SELECIONADO!" << endl;
}
if(origem == 19){
cout << lugares[18] << ": SELECIONADO!" << endl;
}
if(origem == 20){
cout << lugares[19] << ": SELECIONADO!" << endl;
}
if(origem == 21){
cout << lugares[20] << ": SELECIONADO!" << endl;
}
if(origem == 22){
cout << lugares[21] << ": SELECIONADO!" << endl;
}
if(origem == 23){
cout << lugares[22] << ": SELECIONADO!" << endl;
}
if(origem == 24){
cout << lugares[23] << ": SELECIONADO!" << endl;
}
if(origem == 25){
cout << lugares[24] << ": SELECIONADO!" << endl;
}
if(origem == 26){
cout << lugares[25] << ": SELECIONADO!" << endl;
}
if(origem == 27){
cout << lugares[26] << ": SELECIONADO!" << endl;
}
if(origem == 28){
cout << lugares[27] << ": SELECIONADO!" << endl;
}
if(origem == 29){
cout << lugares[28] << ": SELECIONADO!" << endl;
}
if(origem == 30){
cout << lugares[29] << ": SELECIONADO!" << endl;
}
if(origem == 31){
cout << lugares[30] << ": SELECIONADO!" << endl;
}
if(origem == 32){
cout << lugares[31] << ": SELECIONADO!" << endl;
}
}