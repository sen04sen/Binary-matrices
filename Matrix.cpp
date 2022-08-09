#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
 
 
signed main() {
   int n;
   cin >> n;
   vector <char> need (n, 2);
   string h;
   for (int i = 0; i < n; i++) {
      cin >> h;
      for (int j = 0; j < n; j++) {
         if (i != j && h[j] == '1') {
            for (int k = 0; k < n; k++) {
               if (i == k) {
                  continue;
               }
               if (need[k] == 2) {
                  need[k] = (h[k] - '0');
               } else if (need[k] != (h[k] - '0')) {
                  cout << "No";
                  return 0;
               }
            }
            break;
         }
      }
   }
   cout << "Yes";
}