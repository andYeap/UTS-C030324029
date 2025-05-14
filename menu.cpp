#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_SIZE = 100; // Ukuran maksimum dataArray
int dataArray[MAX_SIZE]; // dataArray dibuat global agar bisa digunakan di semua fungsi
int n; // Jumlah elemen dataArray

void dMenu();
void inputData();
void outputData();
void bubbleSort();
void SepatahKata(string);

void dMenu(){
system("cls");
cout<<"Aplikasi Sorting dataArray"<<"\n";       
cout<<"1. Masukan Data"<<"\n";
cout<<"2. Tampilkan data"<<"\n";
cout<<"3. Sorting data"<<"\n";
cout<<"4. Sepatah Kata"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        
}

void inputData() {
    system("cls");
    cout << "Masukkan jumlah elemen dataArray (maksimal " << MAX_SIZE << "): ";
    cin >> n;
    if (n > MAX_SIZE) {
        cout << "Jumlah elemen melebihi batas maksimum!" << endl;
        getch();
        return;
    }
    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> dataArray[i];
    }
}

void outputData() {
  system("cls");
  cout << "dataArray yang diinput: ";
  for (int i = 0; i < n; ++i) {
      cout << dataArray[i];
      if (i != n - 1) cout << ", "; 
  }
  getch();
}

void bubbleSort() {
  system("cls");
  // Melakukan bubble sort
  for (int i = 0; i < n - 1; ++i) {
      for (int j = 0; j < n - i - 1; ++j) {
          if (dataArray[j] > dataArray[j + 1]) {
              // Tukar dataArray[j] dan dataArray[j + 1]
              int temp = dataArray[j];
              dataArray[j] = dataArray[j + 1];
              dataArray[j + 1] = temp;
          }
      }
  }

  // Menampilkan hasil setelah pengurutan
  cout << "dataArray setelah diurutkan: ";
  for (int i = 0; i < n; ++i) {
      cout << dataArray[i];
      if (i != n - 1) cout << ", "; 
  }
  getch();
}


void SepatahKata(){
  system("cls");
  cout<<"Tidur is Life";
  getch();
}


int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    inputData();
    break;
   case '2':
    outputData();
    break;  
    case '3':
    bubbleSort();
    break;
    case '4':
    SepatahKata();
    break;
    case '5':
    cout<<"\nDan yap"<<endl;
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}