#include <iostream>

using namespace std;
 
 int main(){

  int m, n, u, v;

  cin >> n;
  cin >> m;

  int **a = new int*[n];

  for(int i = 0; i < n; ++i)
     a[i] = new int[m];
  
  for(int j = 0; j < m; ++j){
    cin >> u;
    cin >> v;
    a[u][v]++;
    a[v][u]++;
  }
     int odd = 0, b[3];

   for(int k = 0; k < n; ++k){
     int sum1 = 0;
     for(int l = 0; l < m; ++l)
       sum1 += a[k][l];
     
     if(sum1%2 == 1){
       b[odd] = k;
       odd++;
     }
      if(odd > 2)
       break;
   }

   if(odd == 0)
     cout << "CYCLE" << endl;
   else if(odd == 2)
     cout << "PATH " << b[0] << " " << b[1] << endl;
   else if(odd > 2) 
     cout <<  "IMPOSSIBLE" << endl;
   return 0;
 }
