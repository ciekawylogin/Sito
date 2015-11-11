#include <ctime>

using namespace std;

int main() {
  clock_t begin = clock();

  /// poczatek programu
 
  
  
  
  
  
  /// koniec programu

  clock_t end = clock();
  double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
  
  cout << "czas dzialania: " << elapsed_secs << " sekund." << endl;
}