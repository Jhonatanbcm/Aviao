#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void mostrar_nome();
void calendario();
void escolher_lugar();
string lugares[31], nome_mes[13];
char destino_dnv;
int origem, destino, voltar_mes;
// Fun��o para verificar se um ano � bissexto
bool isLeapYear(int year){
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Fun��o para obter o n�mero de dias em um m�s
int getNumDaysInMonth(int month, int year){
  if (month == 2){
    return isLeapYear(year) ? 29 : 28;
  }
  else if (month == 4 || month == 6 || month == 9 || month == 11){
    return 30;
  }
  else{
    return 31;
  }
}
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
  for (i < 0; i < 31; i++){
    cout << "[" << i << "]-> " << lugares[i] << endl;
  }
}
void escolher_lugar(){
  setlocale(LC_ALL, "Portuguese_Brazil");
  int i;
  i = 0;
  origem = 32;
  destino_dnv = 's';
  while (origem < 0 || origem > 31){
    cout << "\nORIGEM? ";
    cin >> origem;
    switch (origem){
    case 0:
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
      cout << "\nDESTINO? ";
      cin >> destino;
      if (destino == origem){
        while (destino_dnv == 's' || destino_dnv == 'S'){
          cout << "\nErro, voc� j� selecionou " << lugares[origem] << " como origem!" << endl;
          cout << "\nSe deseja escolher outro destino ";
          cout << "\nDigite 'S' para SIM ou 'N' para N�O: ";
          cin >> destino_dnv;
          if (destino_dnv == 's' || destino_dnv == 'S'){
            cout << "\nDESTINO? ";
            cin >> destino;
          }
        }
      }
      if (destino != origem){
        cout << "\nORIGEM: " << lugares[origem];
        cout << "\nDESTINO: " << lugares[destino] << endl;
        calendario();
      }
      break;
    default:
      cout << "\nErro, tente novamente!" << endl;
      break;
    }
  }
}
void calendario(){
  setlocale(LC_ALL, "Portuguese_Brazil");
  int year;
  int i = 0;
  year = 2020;
  voltar_mes = 0;
  nome_mes[0] = "Janeiro";
  nome_mes[1] = "Janeiro"; 
  nome_mes[2] = "Fevereiro";
  nome_mes[3] = "Mar�o";
  nome_mes[4] = "Abril";
  nome_mes[5] = "Maio";
  nome_mes[6] = "Junho";
  nome_mes[7] = "Julho";
  nome_mes[8] = "Agosto";
  nome_mes[9] = "Setembro";
  nome_mes[10] ="Outubro";
  nome_mes[11] ="Novembro";
  nome_mes[12] ="Dezembro";
  while(voltar_mes == 0){
  while(year < 2023 || year > 2024){
    cout << "\nDigite o ano: ";
    cin >> year;
    if(year < 2023){
      cout << "\nErro, tente novamente!" << endl;
    }
    if(year > 2024){
      cout << "\nAs pessagens s� podem ser compradas com 1 ano de anteced�ncia!" << endl;
    }
  }
  for (int month = 1; month <= 12; ++month){
    cout << endl;
    cout << nome_mes[month] << "      " << setw(2) << setfill('0') << month << "/" << year << endl;
    cout << endl;
    cout << "  D  S  T  Q  Q  S  S" << endl;
    int firstDay = 1; // Dia da semana em que o m�s come�a (1 = domingo, 2 = segunda-feira, etc.)
    int numDays = getNumDaysInMonth(month, year);

    // Encontrar o dia da semana do primeiro dia do m�s
    int y = year - (month < 3);
    int c = y / 100;
    y %= 100;
    int m = month + 9;
    if (m > 12){
      m -= 12;
      y++;
    }
    int weekday = (firstDay + ((13 * m - 1) / 5) + y + (y / 4) + (c / 4) - (2 * c)) % 7;

    // Imprimir os espa�os iniciais at� chegar no primeiro dia da semana
    cout << setw(3 * weekday) << setfill(' ') << "";

    // Imprimir os dias do m�s
    for (int day = 1; day <= numDays; ++day){
      cout << setw(3) << setfill(' ') << day;
      if ((weekday + day) % 7 == 0){
        cout << endl;
      }
    }
    cout << endl;
  }
  cout << "\n   Meses de outro ano           Selecionar um m�s";
  cout << "\n<- Digite 0 para voltar <-  -> Digite 1 para prosseguir ->";
  cout << endl << "                           ";
  cin >> voltar_mes;
  if(voltar_mes == 0){
    year = 2020;
    }
  }
}

