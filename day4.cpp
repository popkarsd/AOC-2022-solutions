//p1
/*

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int ans=0;
string inp;
char y;
vector<int> v;

int main(){
	for (int i=0; i<1000; i++){
		cin >> inp;
		int p =0;
		int w=0,x=0,y=0,z=0;
		while (inp[p] != '-'){
			w*=10;
			w+=(inp[p]-'0');
			p++;
		}
		p++;
		while (inp[p] != ','){
			x*=10;
			x+=(inp[p]-'0');
			p++;
		}
		p++;
		while (inp[p] != '-'){
			y*=10;
			y+=(inp[p]-'0');
			p++;
		}
		p++;
		while (p<inp.size()){
			z*=10;
			z+=(inp[p]-'0');
			p++;
		}
		if (w<=y && z>=x){
			ans++;
			continue;
		};
		if (w>=y && z<=x) ans++;

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
string inp;
char y;
vector<int> v;

int main(){
	for (int i=0; i<1000; i++){
		cin >> inp;
		int p =0;
		int w=0,x=0,y=0,z=0;
		while (inp[p] != '-'){
			w*=10;
			w+=(inp[p]-'0');
			p++;
		}
		p++;
		while (inp[p] != ','){
			x*=10;
			x+=(inp[p]-'0');
			p++;
		}
		p++;
		while (inp[p] != '-'){
			y*=10;
			y+=(inp[p]-'0');
			p++;
		}
		p++;
		while (p<inp.size()){
			z*=10;
			z+=(inp[p]-'0');
			p++;
		}
		if (x<y) continue;
		if (z<w) continue;

		ans++;

	}
	cout << ans;
}
*/