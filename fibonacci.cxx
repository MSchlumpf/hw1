/*
 * Calculating Fibonacci numbers
 * author: Michael Stumpf (MSchlumpf)
 */

#include <iostream>

using namespace std;

int main(){
  int N = 1;
  cout << "Bitte N eingeben: N = " << endl;
  cin >> N;
  int i,f,ff,fff;
  fff = 0;
  ff = 1;
  if (N==0){
    f=fff;
    }
  if (N==1){
    f=ff;
    }
    
 else
  for(i=1;i<N;i++){
  f = ff+fff;
  fff = ff;
  ff = f;
  }
  
  cout << "Ihr Ergebnis lautet: f(" << N << ")=" << f << endl;
  return 0;
}
