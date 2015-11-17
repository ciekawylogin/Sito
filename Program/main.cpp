#include <ctime>
#include <iostream>

using namespace std;



int main() {
  clock_t begin = clock();

  /// poczatek programu


  int n;
  cin >> n;
  int tablica[n+1];
  int tablica2[n+1];
  for(int i=0;i<n;i++){
      cin>>tablica[i];
      tablica2[i]=tablica[i];

  }
  for(int j=2;j*j<=n;j++){
      for(int i=0;i<n+1;i++){
          if(tablica2[i]==0)
              tablica2[i]=0;
          else
              if(tablica2[i]==1)
                  tablica2[i]=1;
          else
                  if(tablica2[i]==j)
                      tablica2[i]=1;
          else
                      if(tablica2[i]%j==0)
                          tablica2[i]=0;
          else
                              tablica2[i]=1;

      }

  }

  for(int i=0;i<n;i++){
      if(tablica2[i]==0)
          cout<<"Nie"<<endl;
      if(tablica2[i]==1)
          cout<<"Tak"<<endl;
  }

  /// koniec programu

  clock_t end = clock();
  double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

  cout << "czas dzialania: " << elapsed_secs << " sekund." << endl;
}
