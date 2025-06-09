#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string baris;
  string NamaFile;

  cout << "Masukkan nama file : ";
  cin >> NamaFile;

  // Membuka file dalam mode menulis
  ofstream outfile;
  // mununjuk ke sebuah nama file
  outfile.open(NamaFile + ".txt", ios::out);
}