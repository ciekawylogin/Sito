#include <ctime>
#include <iostream>

using namespace std;


const int k=1000000;
long long liczby_pierwsze[k+1];
long long liczby_pierwsze2[k+1];
int tablica[k+1];

int main() {
  clock_t begin = clock();

  /// poczatek programu

  int n;
  cin >> n;
  for(int m=0;m<n;m++){
      cin>>tablica[m];
  }

  for(int l=0;l<k;l++){
      liczby_pierwsze[l]=l;
      liczby_pierwsze2[l]=l;
  }
  for(int j=2;j*j<=k;j++){
      for(int i=0;i<k;i++){
          if(liczby_pierwsze2[i]==0)
              liczby_pierwsze2[i]=0;
          else
              if(liczby_pierwsze2[i]==1)
                  liczby_pierwsze2[i]=1;
          else
                  if(liczby_pierwsze[i]==j)
                      liczby_pierwsze2[i]=1;
          else
                      if(liczby_pierwsze[i]%j==0)
                          liczby_pierwsze2[i]=0;
          else
                              liczby_pierwsze2[i]=liczby_pierwsze[i];
      }
  }
  for(int i=0;i<k;i++){
  if(liczby_pierwsze2[i]>1)
      liczby_pierwsze2[i]=1;
  }

  for(int m=0;m<n;m++){
      if(liczby_pierwsze2[tablica[m]]==1)
          cout<<"Tak"<<endl;
      if(liczby_pierwsze2[tablica[m]]==0)
          cout<<"Nie"<<endl;
  }

  /// koniec programu

  clock_t end = clock();
  double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

  cout << "czas dzialania: " << elapsed_secs << " sekund." << endl;
}

