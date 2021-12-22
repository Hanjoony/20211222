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


	cout << "»ï°¢ÇüÀÇ ³ÐÀÌ´Â" << endl;

	cout << Triangle << endl;


	return 0;
}