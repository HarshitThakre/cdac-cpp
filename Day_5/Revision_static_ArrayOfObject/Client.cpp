#include"CloudStorage.h"

int main()
{
	CloudStorage* files;
	int nof;

	cout << "\n enter the number of files:";
	cin >> nof;

	files = new CloudStorage[nof];

	for (int i = 0; i < nof; i++)
	{
		files[i].accept();
	}

	for (int i = 0; i < nof; i++)
	{
		files[i].display();
	}

	delete[] files;

	/*CloudStorage files[3];

	for (int i = 0; i < 3; i++)
	{
		files[i].accept();
	}

	for (int i = 0; i < 3; i++)
	{
		files[i].display();
	}*/
}