#include"Contact.h"
int main() {
	char arr[11] = "2628292";
	Contact ob(arr);
	if (!ob) {
		//ob.operator!()
		cout << "valid..!";
	}
	else {
		cout << "Invalid..!";
	}
}
