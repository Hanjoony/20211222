#include<iostream>

using namespace std;

int main()
{
	cout << "Hello World" << endl;



	int Height = 0;
	int Bottom = 0;

	float Triangle = 0;

	cin >> Height;
	cin >> Bottom;

	Triangle = static_cast<float>(Height) * static_cast<float>(Bottom) / 2.0f;


	cout << "삼각형의 넓이는" << endl;

	cout << Triangle << endl;


	// 집에서 주석 추가


	return 0;
}