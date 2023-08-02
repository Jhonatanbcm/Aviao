#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <locale.h>
#include <chrono>
using namespace std;

void mostrar_nome();
void calendario();
void escolher_lugar();
void escolher_passagem();
void escolha_dia_ida();
void escolha_dia_volta();
void horario();
void opcao_selec();
void pass_ida_volta();

// variáveis pra escolher o lugar
int opc_orig, opc_dest, origem_ida, dest_ida, orig_volta, dest_volta, escolha_mes, escolha_lugar, opcao_lugar;
string lugares[31], name_month[13];
char destino_dnv;
// variáveis da função calandario
int daysInMonth, month, year, option, current_month, diaAtual, current_year, month_next, month_back, year_next, year_back;
char pass_volta;
// variáveis pra escolher passagem
int qtd_pass[3], escolherPass, compra_pass, opc_ida, opc_volta;

void printCalendar(int year, int month){
  // Criar uma estrutura tm com a data do primeiro dia do mês
  std::tm timeinfo = {};
  timeinfo.tm_year = year - 1900; // tm_year é o número de anos desde 1900
  timeinfo.tm_mon = month - 1;    // tm_mon é base 0 (janeiro é representado por 0)
  timeinfo.tm_mday = 1;
  std::mktime(&timeinfo);

  // Obter o número de dias no mês atual
  daysInMonth;
  if (month == 2){
    // Verificar se é um ano bissexto (fevereiro tem 29 dias em anos bissextos)
    daysInMonth = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
  }
  else if (month == 4 || month == 6 || month == 9 || month == 11){
    daysInMonth = 30;
  }
  else{
    daysInMonth = 31;
  }

  // Imprimir o cabeçalho do calendário
  std::cout << "  " << std::setw(11) << std::left << "DOM SEG TER QUA QUI SEX SAB" << std::endl;

  // Imprimir os espaços iniciais para alinhar o primeiro dia do mês
  for (int i = 0; i < timeinfo.tm_wday; ++i){
    std::cout << "    ";
  }

  // Imprimir os dias do mês
  for (int day = 1; day <= daysInMonth; ++day){
    std::cout << std::setw(4) << std::right << day;

    if ((timeinfo.tm_wday + day) % 7 == 0){
      std::cout << std::endl;
    }
  }

  std::cout << std::endl;
}
int main(){
  setlocale(LC_ALL, "Portuguese_Brazil");
  horario();
  cout << "\nPRA ONDE VAMOS? ";
  cout << "\nMais de 30 lugares para você escolher!" << endl;
  cout << endl;
  mostrar_nome();
  escolher_lugar();
  escolher_passagem();
  return 0;
}

void mostrar_nome(){
  setlocale(LC_ALL, "Portuguese_Brazil");
  int i = 0;
  lugares[0] = "RIO- Rio de Janeiro";
  lugares[1] = "CGH- São Paulo";
  lugares[2] = "BEL- Belém";
  lugares[3] = "BSB- Brasília";
  lugares[4] = "CGB- Cuiabá";
  lugares[5] = "CWB- Curitiba";
  lugares[6] = "FLL- Miami";
  lugares[7] = "FLL- Fort Lauderdale";
  lugares[8] = "FLN- Florianópolis";
  lugares[9] = "FOR- Foartaleza";
  lugares[10] = "GYN- Goiânia";
  lugares[11] = "LIS- Lisboa";
  lugares[12] = "MAO- Manaus";
  lugares[13] = "MCO- Orlando,FL";
  lugares[14] = "MVD- Carrasco";
  lugares[15] = "PAR- Paris";
  lugares[16] = "POA- Porto Alegre";
  lugares[17] = "PVH- Porto Velho";
  lugares[18] = "REC- Recife";
  lugares[19] = "SDU- Santos Dumont";
  lugares[20] = "SLZ- São Luíz";
  lugares[21] = "VIX- Vitória";
  lugares[22] = "AGP- Málaga";
  lugares[23] = "AJU- Aracaju";
  lugares[24] = "BCN- Barcelona";
  lugares[25] = "JPA- João Pessoa";
  lugares[26] = "LAX- Los Angeles, CA";
  lugares[27] = "JFK- New York";
  lugares[28] = "AJU- Sergipe";
  lugares[29] = "SSA- Salvador";
  lugares[30] = "BVB- Boa Vista";
  lugares[31] = "CFB- Cabo Frio";
  opcao_lugar = 3;

  while (opcao_lugar != 2){
    opcao_lugar = 0;
    while (opcao_lugar == 0){
      i = 0;
      for (i < 0; i <= 10; i++){
        cout << "[" << i << "] " << lugares[i] << endl;
      }
      cout << endl;
      cout << " 0- Anterior, 1- Próximo, 2- Sair" << endl;
      cin >> opcao_lugar;

      if (opcao_lugar == 1){
        for (i < 10; i <= 20; i++){
          cout << "[" << i << "] " << lugares[i] << endl;
        }
        cout << endl;
        cout << " 0- Anterior, 1- Próximo, 2- Sair" << endl;
        cin >> opcao_lugar;
      }
      if (opcao_lugar == 1){
        for (i < 20; i <= 30; i++){
          cout << "[" << i << "] " << lugares[i] << endl;
        }
        cout << endl;
        cout << " 0- Anterior, 1- Próximo, 2- Sair" << endl;
        cin >> opcao_lugar;
      }
    }
  }
}
void escolher_lugar(){
  setlocale(LC_ALL, "Portuguese_Brazil");
  int i;
  i = 0;
  opc_orig = 32;
  opc_dest = 0;
  destino_dnv = 's';
    while (opc_orig < 0 || opc_orig > 31){
    cout << "\nORIGEM? ";
    cin >> opc_orig;
    origem_ida = opc_orig;
    switch (opc_orig){
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
      cin >> opc_dest;
      if (opc_dest == opc_orig){
        while (opc_dest == opc_orig && destino_dnv == 's' || destino_dnv == 'S'){
          cout << "\nErro, você já selecionou " << lugares[opc_orig] << " como opc_orig!" << endl;
          cout << "\nSe deseja escolher outro opc_dest ";
          cout << "\nDigite 'S' para SIM ou 'N' para NÂO: ";
          cin >> destino_dnv;
          if (destino_dnv == 's' || destino_dnv == 'S'){
            cout << "\nDESTINO? ";
            cin >> opc_dest;
          }
          if (destino_dnv == 'n' || destino_dnv == 'N'){
            main();
          }
        }
      }
      dest_ida = opc_dest;
      break;
    default:
      cout << "\nErro, tente novamente!" << endl;
      break;
    }
  }
  if (opc_dest != opc_orig){
    opcao_selec();
    cout << endl;
    cout << "\n0- Anterior, 1- Próximo" << endl;
    cin >> opcao_lugar;
    if (opcao_lugar == 0){
      mostrar_nome();
      escolher_lugar();
      calendario();
      escolha_dia_ida();
      pass_ida_volta();
      escolha_dia_volta();
    }
    else{
      calendario();
      escolha_dia_ida();
      pass_ida_volta();
      }
    
  }
}
void calendario(){
  setlocale(LC_ALL, "Portuguese_Brazil");
  name_month[0] = "Janeiro";
  name_month[1] = "Janeiro";
  name_month[2] = "Fevereiro";
  name_month[3] = "Março";
  name_month[4] = "Abril";
  name_month[5] = "Maio";
  name_month[6] = "Junho";
  name_month[7] = "Julho";
  name_month[8] = "Agosto";
  name_month[9] = "Setembro";
  name_month[10] = "Outubro";
  name_month[11] = "Novembro";
  name_month[12] = "Dezembro";
  // Obter o horário atual do sistema
  std::time_t currentTime = std::time(nullptr);

  // Converter para uma estrutura tm (hora local)
  std::tm *localTime = std::localtime(&currentTime);

  // Extrair o mês e o ano atual
  month = localTime->tm_mon + 1;    // tm_mon é base 0 (janeiro é representado por 0)
  year = localTime->tm_year + 1900; // tm_year é o número de anos desde 1900
  // mês e ano atual
  current_month = localTime->tm_mon + 1; 
  current_year =  localTime->tm_year + 1900; 
  
  option = 3;
  cout << endl;
  while (option != 2){
    if (year < 2025 && month >= current_month || year == 2024 && month <= 12){
      // Exibir o calendário do mês atual
      cout << "\n------------------------------";
      cout << "\n       DATA DAS VIAGENS";
      cout << "\n------------------------------";
      std::cout << "\n        " << name_month[month] << "       " << month << "/" << year << std::endl;
      printCalendar(year, month);

      // Pedir ao usuário para navegar para o mês seguinte ou anterior
      std::cout << " 0- Anterior, 1- Próximo, 2- Sair" << std::endl;
      std::cin >> option;
      if (opc_volta < opc_ida && month_back < month_next){
      cout << "\nErro! Data de ida: " << opc_ida << "/" << month_next << "/" << year_next << endl;
      }
      if (option == 1){
        if (month == 12 && option == 1 && year == 2024){
          month = 12;
        }
        else{
          month++;
        }
        if (month > 12){
          month = 1;
          year++;
        }
      }
      else if (option == 0){
        if (month <= current_month && option == 0 && year == 2023){
          month = current_month;
        }
        else{
          month--;
        }
        if (month < 1){
          month = 12;
          year--;
        }
      }
    }
  }
}
void pass_ida_volta(){
  setlocale(LC_ALL, "Portuguese_Brazil");
  if(option == 2){
    cout << "\nSe deseja selecionar as datas para voltar";
    cout << "\nDigite 's' para 'SIM' ou 'N' para 'NÂO': ";
    cin >> pass_volta;
    if(pass_volta == 's' || pass_volta == 'S'){
    orig_volta = dest_ida;
    dest_volta = origem_ida;
    cout << "\nORIGEM: " << lugares[orig_volta];
    cout << "\nDESTINO: " << lugares[dest_volta];
    cout << endl;
    cout << "\nSe deseja trocar origem e destino";
    cout << "\nDigite 's' para 'SIM' ou 'N' para 'NÂO': ";
    cin >> pass_volta;
    if(pass_volta == 's' || pass_volta == 'S'){
      mostrar_nome();
      calendario();
    }
    else{
      calendario();
    }
    }
  }
}
void escolha_dia_ida(){
  setlocale(LC_ALL, "Portuguese_Brazil");
  opc_ida = 32;
  month_next = month;
  year_next = year; 
 while (opc_ida > daysInMonth || opc_ida < 1 || opc_ida < diaAtual && month == current_month){
    if (option == 2){
      do{
      cout << "\nDigite o dia: ";
      cin >> opc_ida;
      if (opc_ida < diaAtual && month == current_month){
        cout << "\nErro, estamos no dia: " << diaAtual << "/" << current_month << "/" << current_year << endl;
      }
    }while(opc_ida < diaAtual && month == current_month);
      switch (opc_ida){
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
      if (opc_ida >= diaAtual && month >= current_month && opc_ida <= daysInMonth && year <= current_year || opc_ida <= diaAtual && month >= current_month && opc_ida <= daysInMonth && year <= current_year){
          cout << "\nDATA SELECIONADA: " << opc_ida << "/" << month_next << "/" << year_next << "(IDA)" << endl;
        }
      if(opc_ida <= daysInMonth && year > current_year){
          cout << "\nDATA SELECIONADA: " << opc_ida << "/" << month_next << "/" << year_next << "(IDA)" << endl;
        }
        break;
      default:
        cout << "\nErro, tente novamente!" << endl;
        break; 
      }
    }
  }
}

void escolha_dia_volta(){
setlocale(LC_ALL, "Portuguese_Brazil");
  opc_volta = 32;
 while (opc_volta < opc_ida || opc_volta > daysInMonth || opc_volta < 1 || opc_volta < diaAtual && month == current_month){
    if (option == 2){
      do{
      cout << "\nDigite o dia: ";
      cin >> opc_volta;
      if (opc_volta < opc_ida && month_back < month_next){
        cout << "\nErro! Data de ida: " << opc_ida << "/" << month_next << "/" << year_next << endl;
        calendario();
      }
    }while(opc_volta < opc_ida && month_back < month_next);
      month_back = month;
      year_back = year; 
      switch (opc_volta){
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
      if (opc_volta >= opc_ida && month_back >= month_next && opc_volta <= daysInMonth && year_back <= year_next || opc_volta <= opc_ida && month_back >= month_next && opc_volta <= daysInMonth && year_back <= year_next ){
          cout << "\nDATA SELECIONADA: " << opc_volta << "/" << month_back << "/" << year_back << "(VOLTA)" << endl;
        }
      if(opc_volta <= daysInMonth && year > current_year){
          cout << "\nDATA SELECIONADA: " << opc_volta << "/" << month_back << "/" << year_back << "(VOLTA)" << endl;
        }
        break;
      default:
        cout << "\nErro, tente novamente!" << endl;
        break; 
      }
    }
  }
}

void escolher_passagem(){
  setlocale(LC_ALL, "Portuguese_Brazil");
  int i = 0;
  for (i = 0; i < 3; i++){
    qtd_pass[i] = 0;
  }
  opcao_selec();
  cout << "\nViajante" << endl;
  cout << "[0]Adulto: A partir de 12 anos" << endl;
  cout << "[1]Criança: 2 a 11 anos" << endl;
  cout << "[2]Bebê: de 0 a 23 meses" << endl;

  cout << "\nDigite o numero: ";
  cin >> escolherPass;
  switch (escolherPass){
  case 0:
    cout << "[" << qtd_pass[0] << "]";
    cout << "\nQuantidade: ";
    cin >> compra_pass;
    break;
  case 1:
    cout << "[" << qtd_pass[1] << "]";
    cout << "\nQuantidade: ";
    cin >> compra_pass;
    break;
  case 2:
    cout << "[" << qtd_pass[2] << "]";
    cout << "\nQuantidade: ";
    cin >> compra_pass;
    break;
  default:
    cout << "\nErro, tente novamente!";
    break;
  }
}

void horario(){
  // Obter o tempo atual
  auto tempoAtu = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
  // Converter o tempo em uma struct tm
  std::tm* dataHoraAtual = std::localtime(&tempoAtu);
  // Obter o dia do mês atual
  diaAtual = dataHoraAtual->tm_mday;
  // Obter o horário atual do sistema
  std::time_t currentTime = std::time(nullptr);
  // Converter para uma estrutura tm (hora local)
  std::tm *localTime = std::localtime(&currentTime);
  int month = localTime->tm_mon + 1;   
  int year = localTime->tm_year + 1900;
  // Imprimir o dia atual
  std::cout << "DATA: " << diaAtual  << "/" << month << "/" << year << std::endl;
    
  // Obtendo o tempo atual em segundos desde a epoch
  std::time_t tempoAtual = std::time(nullptr);
  // Convertendo o valor do tempo para uma estrutura tm
  std::tm *horaAtual = std::localtime(&tempoAtual);
  // Mostrando o horário atual
  std::cout << "Horário: " << horaAtual->tm_hour << ":" << horaAtual->tm_min << std::endl;

}
void opcao_selec(){
 setlocale(LC_ALL, "Portuguese_Brazil");
  cout << endl;
  if (opc_orig && opc_dest >= 0){
    cout << "\nORIGEM: " << lugares[origem_ida];
    cout << "\nDESTINO: " << lugares[dest_ida];
    if(opc_ida > 1){
    cout << "\nDATA SELECIONADA: " << opc_ida << "/" << month_next << "/" << year_next << " (IDA)" << endl;
    }
  }
  if (orig_volta && dest_volta >= 0){
    cout << "\nORIGEM: " << lugares[orig_volta];
    cout << "\nDESTINO: " << lugares[dest_volta];
    cout << "\nDATA SELECIONADA: " << opc_volta << "/" << month_back << "/" << year_back << " (VOLTA)" << endl;
  }
  

}                             