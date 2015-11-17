#include <ctime>
#include <iostream>

using namespace std;

int main() {
  clock_t begin = clock();

  /// poczatek programu
  int n;
  cin >> n;
  bool tablica[n+1];
  for(int i=0;i<n;i++){
      cin>>tablica[i];
  }
  int Tak, Nie;
  for(int l=2,j=0;j<n;j++,l++){
      for(int k=2*l;k*k<=n;k=k+l){
      if(tablica[j]==l)
          tablica[j]=Tak;
      if(tablica[j]==Tak)
          tablica[j]=Tak;
      if(tablica[j]==Nie)
          tablica[j]=Nie;
      if(tablica[j]==k)
          tablica[j]= Nie;
      }
 }

 for(int i=0;i<n;i++){
      if(tablica[i]==Tak){
          cout<<"Nie";}
      else
          cout<<"Tak";
  }
  /// koniec programu

  clock_t end = clock();
  double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

  cout << "czas dzialania: " << elapsed_secs << " sekund." << endl;
}

