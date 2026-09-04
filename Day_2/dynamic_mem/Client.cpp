#include"Header.h"

int main()
{
	int* arr=NULL, noe=0;
	
	/*allocate(arr, noe);
	acceptMarks(arr, noe);
	displayMarks(arr, noe);
	deallocate(arr);*/

	int choice;
	char wish;
	int max;
	do
	{
		cout << "\n 1. Set the number of subjects "
			<< "\n 2. Accept marks \n 3. Display Marks "
			<<"\n 4. find max marks";
		cout << "\n enter the choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			allocate(arr, noe);
			break;
		case 2:
			acceptMarks(arr, noe);
			break;
		case 3:
			displayMarks(arr, noe);
			break;
		case 4:
			max=findMax(arr, noe);
			cout << "\n the max is " << max;
			break;
		default:
			cout << "\n Invalid choice";
		}
		cout << "\n do u wish to continue:";
		
		cin >> wish;
	} while (wish == 'y' || wish == 'Y');
	deallocate(arr);
	return 0;
}