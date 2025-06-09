#include <iostream>
using namespace std;

int main()
{
  try
  {
    cout << "Selamat Belajar di Prodi TI UMY" << endl;
    throw("halo"); // melemparkan sebuah integer maka
    cout << "Pernyataan tidak akan dieksekusi" << endl;
  }
  catch (int a)
  {
    // blok ini akan dieksekusi
    cout << a << " : Pengecualian ini akan dieksekusi" << endl;
  }
  catch(...)
  {
    /*jika selain integer maka block ini akan dieksekusi*/
    cout << "default Pengecualian dieksekusi" << endl;
  }

  return 0;
}