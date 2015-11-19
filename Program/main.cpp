#include <ctime>
#include <iostream>

using namespace std;



int main() {
  clock_t begin = clock();

  /// poczatek programu

  long long k=100000;
  long long liczby_pierwsze[k+1];
  long long liczby_pierwsze2[k+1];
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
                      if(liczby_pierwsze2[i]%j==0)
                          liczby_pierwsze[i]=0;
          else
                              liczby_pierwsze2[i]=liczby_pierwsze[i];
      }
  }
  for(int i=0;i<k;i++){
  if(liczby_pierwsze2[i]>1)
      liczby_pierwsze2[i]=1;
  }
  for(int i=0;i<k;i++){
      if(liczby_pierwsze2[i]==1)
          cout<<liczby_pierwsze[i]<<",";
  }
  /// koniec programu

  clock_t end = clock();
  double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

  cout << "czas dzialania: " << elapsed_secs << " sekund." << endl;
}

