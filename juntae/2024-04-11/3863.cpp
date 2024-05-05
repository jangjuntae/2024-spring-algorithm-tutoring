#include<iostream>
#include<algorithm>
using namespace std;

int n, m;
int start, duration;
int cnt = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true) {
		cin >> n >> m;

		if (n == 0 && m == 0) {
			break;
		}

		int arr[10000][4];

		for (int i = 0; i < n; i++) {
			cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
		}

		for (int i = 0; i < m; i++) {
			cin >> start >> duration;

			for (int j = 0; j < n; j++) {
				if (max(arr[j][2], start) < min(arr[j][2] + arr[j][3], start + duration)) {
					cnt++;
				}
			}
			cout << cnt << "\n";
			cnt = 0;
		}
	}
	return 0;
}
