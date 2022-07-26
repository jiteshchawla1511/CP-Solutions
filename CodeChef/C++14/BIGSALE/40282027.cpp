#include <cstdio>
using namespace std;

int N;

int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		scanf("%d", &N);
		int price, quantity, discount;
		double answer = 0;
		for (int j = 0; j < N; ++j) {
			scanf("%d%d%d", &price, &quantity, &discount);
			answer += (price - price * ((100.0 + discount) / 100.0) * ((100.0 - discount) / 100.0)) * quantity; 
//			printf("%lf\n", answer);
		}
		printf("%.9lf\n", answer);
	}
	return 0;
} 