#include <iostream>
#include <exception>
// Untuk obyek exception yang akan digunakan
#include <array>
// untuk objek array yang akan kita gunakan 
using namespace std;

int main()
{
  cout << "Awal Program" << endl; // penanda 1:...
  try
  {
    array<int, 3> data = {10, 20, 30};
    // pesan array integer 3 elemen
    cout << data.at(4) << endl;
    // memanggil array elemen ke-5
  }
  catch (exception &e)
  {
    // penangkapan menggunakan objek exception
    cout << e.what() << endl;
    /*akan dieksekusi karna array data hanya memiliki 3 elemen*/
  }
  cout << "Baris Program Yang terakhir" << endl;
  /*penanda 2: Bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/

  return 0;
}