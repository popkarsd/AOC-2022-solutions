/* p1
#include <iostream>
#include <string>

using namespace std;
int ans=0;
int c=0;
string t;

int main(){
	while(getline(cin, t)){
		if (t == ""){
			c=0;
		}
		else{
			c+=stoi(t);
		}
		if (c>ans){
			ans = c;
		}

	}
	cout << ans;
}
*/

/* p2
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int c=0, ans=0;
string t;
vector<int> v;

int main(){
	while(getline(cin, t)){
		if (t == ""){
			v.push_back(c);
			c=0;
		}
		else{
			c+=stoi(t);
		}

	}
	v.push_back(c);
	sort(v.begin(), v.end());
	for(int i=0; i<3; i++){
		ans += v[v.size()-1-i];
	}
	cout<<ans;

}
*/


