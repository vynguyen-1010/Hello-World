#include <iostream>
#include <string>
using namespace std;

void inHoa(string text) {

	//cin.ignore(); //xóa bộ đệm trước khi nhập chuỗi
	//cout << "Nhap vao chuoi ky tu can in hoa: ";
	//getline(cin, text);
	//cout << "Chuoi ban vua nhap la: " << text;

	for (int i = 0; i < text.size(); i++) {
		if (text[i] >= 'a' && text[i] <= 'z') {
			text[i] -= 32;
		}
	}
	cout << "Chuoi ky tu in hoa: " << text << "\n";
}

int main() {

	cout << "Hello World\n";

	inHoa("nguyen yen vy");

	system("pause");
	return 0;
}