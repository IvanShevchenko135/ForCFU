#include <iostream>
#include <cmath>
using namespace std;

int N;
char sample[244][244], fractal[244][244];

void Fractal(int n, int k) {
	for (int i = 0, u = 0; i < N * n; i += n, u += (n / N)) {
		for (int j = 0, v = 0; j < N * n; j += n, v += (n / N))
			if (sample[u][v] == '.') {
				for (int I = i, U = 0; I < i + n; I++, U++) {
					for (int J = j, V = 0; J < j + n; J++, V++)
						fractal[I][J] = sample[U][V];
				}
			}
			else {
				bool check = 1;
				for (int U = u; U < u + (n / N); U++) {
					for (int V = v; V < v + (n / N); V++) {
						if (sample[U][V] == '.') {
							for (int I = i, U = 0; I < i + n; I++, U++) {
								for (int J = j, V = 0; J < j + n; J++, V++)
									fractal[I][J] = sample[U][V];
							}
							check = 0;
							break;
						}
					}
					if (check) {
						for (int I = i; I < i + n; I++) {
							for (int J = j; J < j + n; J++)
								fractal[I][J] = sample[u][v];
						}
					}
				}
			}
	}
	if (k > 2) {
		for (int i = 0, u = 0; i < n * N; i++, u++) {
			for (int j = 0, v = 0; j < n * N; j++, v++)
				sample[i][j] = fractal[u][v];
		}
		Fractal(N * n, --k);
	}
	else
		return;
}

int main() {

	int n, k;

	cin >> n >> k;
	N = n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> sample[i][j];
	}
	Fractal(n, k);
	for (int i = 0; i < pow(n, k); i++) {
		for (int j = 0; j < pow(n, k); j++)
			cout << fractal[i][j];
		cout << endl;
	}
	system("pause");
	return 0;
}