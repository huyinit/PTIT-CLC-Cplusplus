// Vi du ve thuat toan merge hai day da duoc sap
#include <bits/stdc++.h>    
using namespace std;

int main () {
  int first[] = {5,10,15,20,25};
  int second[] = {50,40,30,20,10};
  int Result[1000];
  sort (first,first+5);
  sort (second,second+5);
  merge (first,first+5,second,second+5,Result);
  cout << "Ket qua:";
  for (int i=0; i<10; i++)
    cout << Result[i]<< " ";
  cout <<endl;
  return 0;
}
