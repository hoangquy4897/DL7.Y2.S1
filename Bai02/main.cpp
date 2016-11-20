#include "Xe.h"
#include <vector>

void main()
{
	vector <CXe> NhaXe;
	int soluong;
	cout << "Nhap so luong xe: "; cin >> soluong;
	cout << "-Nhap thong tin tung xe: " << endl;
	for (int i = 0; i < soluong; i++)
	{
		cout << "Thong tin xe thu " << i + 1 << ":" << endl;
		CXe temp;
		temp.Nhap();
		NhaXe.push_back(temp);
	}
	string maso;
	cout << "Nhap ma so xe can tim: ";
	fflush(stdin); cin.ignore();
	getline(cin, maso);
	//Tim xe co ma so phu hop va cho chay 5km
	for (int i = 0; i < NhaXe.size(); i++)
	{
		if (maso == NhaXe[i].GetMaSo())
			NhaXe[i].Chay(5);
	}
	cout << "Xe da chay den noi thanh cong!" << endl;
}