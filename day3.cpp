//p1
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int ans=0;
string a,b,f;
char y;
vector<int> v;

int main(){
	for (int i=0; i<3; i++){
		cin >> a;
		b = a.substr(0,a.size()/2);
		f = a.substr(a.size()/2,a.size()/2);
		

		for (char h : b){
			if (find(f.begin(), f.end(),h) != f.end()){
				y = h;
			}
		}

		if (y-'a' >= 0 && 'z'-y >= 0){
			ans += (y-'a'+1);
		}
		else{
			ans += (y-'A'+27);
		}
	}
	cout << ans;

}


*/

//p2
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int ans=0;
string a,b,f;
char y;
vector<int> v;

int main(){
	for (int i=0; i<100; i++){
		cin >> a >> b >> f;
		

		for (char h : a){
			if (find(f.begin(), f.end(),h) != f.end() && find(b.begin(), b.end(),h) != b.end()){
				y = h;
			}
		}

		if (y-'a' >= 0 && 'z'-y >= 0){
			ans += (y-'a'+1);
		}
		else{
			ans += (y-'A'+27);
		}
	}
	cout << ans;

}


*/
