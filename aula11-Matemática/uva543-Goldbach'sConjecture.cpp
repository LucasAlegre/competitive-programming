/**
 *  Lucas Alegre - 00274693
 *  Computer Science - UFRGS
 *
 *  C++ Competitive Programming Template
 *
 */
#include <bits/stdc++.h> 

using namespace std;

#define minimum(a) *min_element(a.begin(), a.end())
#define maximum(a) *max_element(a.begin(), a.end())               
#define range(a,b) for(int i=a;i<b;i++)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef set<int> si;

int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59,
		61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137,
		139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211,
		223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283,
		293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379,
		383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461,
		463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563,
		569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643,
		647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739,
		743, 751, 757, 761, 769, 773, 787, 797, 809, 811821, 823, 827, 829, 839,
		853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941,
		947, 953, 967, 971, 977, 983, 991, 997, 1009, 1013 };

bool isPrime(int n) {
	for (int i = 0; true; i++) {
		if (primes[i] * primes[i] > n || primes[i] == 1013)
			return true;
		if (n % primes[i] == 0)
			return false;
	}
	return true;
}

int main() {
	int n;
	while (cin >> n && n != 0) {
		for (int i = 1; true; i++) {
			int c1 = primes[i];
			int c2 = n - c1;
			if (isPrime(c2)) {
				printf("%d = %d + %d\n", n, c1, c2);
				break;
			}
		}
	}

	return 0;
}
