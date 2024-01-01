/*
ID: Saahir.V
LANG: C++
TASK: ride
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
freopen("ride.in", "r", stdin);
freopen("ride.out", "w", stdout);
string comet;
string group;
cin >> comet;
cin >> group;
int cometTotal = 1; 
int groupTotal = 1;
for (int i = 0; i < static_cast<int>(comet.size()); i++) {
cometTotal *= static_cast<int>(comet[i]) - 'A' + 1;
}
for (int i = 0; i < static_cast<int>(group.size()); i++) {
groupTotal *= static_cast<int>(group[i]) - 'A' + 1;
}
if (cometTotal % 47 == groupTotal % 47) {
cout << "GO" << endl;
} else {
cout << "STAY" << endl;
}
return 0;
}