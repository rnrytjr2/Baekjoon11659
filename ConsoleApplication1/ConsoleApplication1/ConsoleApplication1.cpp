// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int N, M;
int values[100001];
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N >> M;

	cin >> values[1];
	for (int i = 1; i < N; i++)
	{
		int value;
		cin >> value;
		values[i + 1] = values[i] + value;
	}
	for (int i = 0; i < M; i++)
	{
		int j, k;
		cin >> j >> k;

		cout << values[k] - values[j - 1] << '\n';
	}
}
