#include <iostream>

int main()
{
	int n; std::cin >> n;
	int* Array = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> Array[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (Array[i] > Array[j])
				std::swap(Array[i], Array[j]);
		std::cout << Array[i] << ' ';
	}
	delete[]Array; Array = NULL;
	return 0;
}