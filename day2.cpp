//p1
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int ans=0;
char a,b;
vector<int> v;

int main(){
	for (int i=0; i<2500; i++){
		cin >> a >> b;
		if((a=='A' && b == 'Y') || (a=='B' && b == 'Z') || (a=='C' && b == 'X')){
			ans+=6;
		}
		if((a=='A' && b == 'X') || (a=='B' && b == 'Y') || (a=='C' && b == 'Z')){
			ans+=3;
		}
		if (b == 'X') ans++;
		if (b == 'Y') ans+=2;
		if (b== 'Z') ans+=3;
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
char a,b;
vector<int> v;

int main(){
	for (int i=0; i<2500; i++){
		cin >> a >> b;
		if((a=='B' && b == 'X') || (a=='A' && b == 'Y') || (a=='C' && b == 'Z')){
			ans+=1;
		}
		if((a=='C' && b == 'X') || (a=='B' && b == 'Y') || (a=='A' && b == 'Z')){
			ans+=2;
		}
		if((a=='A' && b == 'X') || (a=='C' && b == 'Y') || (a=='B' && b == 'Z')){
			ans+=3;
		}
		if (b == 'Y') ans+=3;
		if (b== 'Z') ans+=6;
	}
	cout << ans;

}
*/