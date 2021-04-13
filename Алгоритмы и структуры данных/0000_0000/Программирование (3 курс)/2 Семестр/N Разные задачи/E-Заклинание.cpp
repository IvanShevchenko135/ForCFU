#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <set>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <queue>

using namespace std;

string s;

vector <int> d[300][300];


int main () 
{
	freopen ("palin.dat","r",stdin);
	freopen ("palin.sol","w",stdout);

	cin >> s;

	int n = s.length();

	for (int i = 0; i < n - 1; i++){
		if (s[i] != s[i+1]){
			d[i][i+1].push_back(i);
		}
	}


	for (int k = 2; k < n; k++){
		for (int i = 0; i + k < n; i++){
			if (s[i] == s[i+k]){
				d[i][i+k] = d[i+1][i+k-1];		
			}else{
				if (d[i+1][i+k].size() + 1 > d[i][i+k-1].size() + 1){
					d[i][i+k] = d[i][i + k - 1];
					d[i][i+k].push_back(i + k);
				}else{
					d[i][i+k] = d[i + 1][i + k];
					d[i][i+k].push_back(i);
				}
			}
		}
	}
	
	cout << d[0][n-1].size() << endl;

	sort (d[0][n-1].begin(), d[0][n-1].end());

	int ptr = 0;

	for (int i = 0; i < n; i++)
	{
		if (ptr < d[0][n-1].size() && d[0][n-1][ptr] == i)
		{
			ptr++;
		}
		else cout << s[i];
	}

	fclose (stdin);
	fclose (stdout);

	return 0;
}