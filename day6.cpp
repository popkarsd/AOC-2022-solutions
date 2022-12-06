/* p1
#include <bits/stdc++.h>

using namespace std;
int ans=0, x, y, z;
bool flag;
string inp, rt = "czfz";

int main(){

	cin >> inp;
	for (int i=0; i<100000; i++){
		rt.push_back(inp[i]);
		rt = rt.substr(1,4);
		flag = false;
		for (int j=0; j<4; j++){
			for (int k=0; k<j; k++){
				if (rt[j] == rt[k]){
					flag = true;
				}
			}
		}
		if (!flag){
			cout << rt << " " << i+1; 
			break;
		}
	}
}
*/

/* p2
#include <bits/stdc++.h>

using namespace std;
int ans=0, x, y, z;
bool flag;
string inp, rt = "czfztznzpnpqpf";

int main(){

	cin >> inp;
	for (int i=0; i<100000; i++){
		rt.push_back(inp[i]);
		rt = rt.substr(1,14);
		flag = false;
		for (int j=0; j<14; j++){
			for (int k=0; k<j; k++){
				if (rt[j] == rt[k]){
					flag = true;
				}
			}
		}
		if (!flag){
			cout << rt << " " << i+1; break;
		} 

	}


}
*/
