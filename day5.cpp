/* p1
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;
int ans=0, x, y, z;
string inp;
string s[10];

int main(){
	s[1] = "DLJRVGF";
	s[2] = "TPMBVHJS";
	s[3] = "VHMFDGPC";
	s[4] = "MDPNGQ";
	s[5] = "JLHNF";
	s[6] = "NFVQDGTZ";
	s[7] = "FDBL";
	s[8] = "MJBSVDN";
	s[9] = "GLD";
	for (int i=0; i<504; i++){
		cin >> inp >> x >> inp >> y >> inp >> z; 
		for (int j=0; j<x; j++){
			s[z] += s[y][s[y].size()-1];
			s[y].pop_back();
		}
	}
	for (int i=1; i<10; i++){
		cout << s[i] << endl;
	}
}

*/



/* p2
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;
int ans=0, x, y, z;
string inp, temp;
string s[10];

int main(){
	s[1] = "DLJRVGF";
	s[2] = "TPMBVHJS";
	s[3] = "VHMFDGPC";
	s[4] = "MDPNGQ";
	s[5] = "JLHNF";
	s[6] = "NFVQDGTZ";
	s[7] = "FDBL";
	s[8] = "MJBSVDN";
	s[9] = "GLD";
	for (int i=0; i<504; i++){
		cin >> inp >> x >> inp >> y >> inp >> z; 
		for (int j=0; j<x; j++){
			temp += s[y][s[y].size()-1];
			s[y].pop_back();
		}
		for (int j=0; j<x; j++){
			s[z] += temp[temp.size()-1];
			temp.pop_back();
		}
	}
	for (int i=1; i<10; i++){
		cout << s[i] << endl;
	}
}
*/

