#include <iostream>


int A = 0;
int B = 0;

int arrA[3];
int arrB[3];

int main()
{
	std::cin >> A;
	std::cin >> B;

	int firstA = A / 100;
	int secondA = (A - firstA * 100) / 10;
	int thirdA = (A - firstA * 100 - secondA * 10);

	int firstB = B / 100;
	int secondB = (B - firstB * 100) / 10;
	int thirdB = (B - firstB * 100 - secondB * 10);


	arrA[0] = thirdA;
	arrA[1] = secondA;
	arrA[2] = firstA;

	arrB[0] = thirdB;
	arrB[1] = secondB;
	arrB[2] = firstB;


	A = thirdA * 100 + secondA * 10 + firstA;
	B = thirdB * 100 + secondB * 10 + firstB;

	if (A > B)
	{
		std::cout << A;
	}
	else
	{
		std::cout << B;
	}
}

	
