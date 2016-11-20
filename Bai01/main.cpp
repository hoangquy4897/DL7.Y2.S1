#include "HocSinh.h"
#include <vector>

void main()
{
	vector <CHocSinh> LopHoc;
	int SiSo;
	cout << "Nhap so hoc sinh: "; cin >> SiSo;
	for (int i = 0; i < SiSo; i++)
	{
		cout << "-Nhap thong tin hoc sinh thu " << i + 1 << ":" << endl;
		CHocSinh temp;
		temp.Nhap();
		LopHoc.push_back(temp);
	}
	int option;
	do
	{
		cout << "             *** Bang Chuc Nang ***                " << endl;
		cout << "| 1. Tinh diem trung binh va xep loai             |" << endl;
		cout << "| 2. Trich bang diem nhung hoc sinh diem toan >=8 |" << endl;
		cout << "| 3. Trich bang diem nhung hoc sinh xep loai Yeu  |" << endl;
		cout << "---------------------------------------------------" << endl;
		cout << "Nhap chuc nang: ";
		cin >> option;
		switch (option)
		{
		case 1: {
			for (int i = 0; i < LopHoc.size(); i++)
			{
				cout << "-Hoc sinh thu " << i + 1 << ":" << endl;
				cout << "Diem trung binh: " << LopHoc[i].TinhDTB() << endl;
				cout << "Xep loai: " << LopHoc[i].XepLoai << endl;
			}
			cout << "*********" << endl;
		}break;
		case 2:{
			for (int i = 0; i < LopHoc.size(); i++)
			{
				cout << "-Nhung hoc sinh co diem toan tren 8:" << endl;
				if (LopHoc[i].LayDiemToan() >= 8)
					LopHoc[i].Xuat();
			}
			cout << "*********" << endl;
		}break;
		case 3: {
			for (int i = 0; i < LopHoc.size(); i++)
			{
				cout << "-Nhung hoc sinh xep loai Yeu:" << endl;
				if (LopHoc[i].XepLoai() == "Yeu")
					LopHoc[i].Xuat();
			}
			cout << "*********" << endl;
		}break;
		}
	} while (option != 0);
}