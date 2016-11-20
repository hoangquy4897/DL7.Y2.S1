#include "HocSinh.h"

/*Nhom nhap,xuat*/
void CHocSinh::Nhap()
{
	cin.ignore();
	cout << "Ho va ten: "; getline(cin, Hoten);
	cout << "Diem toan: "; cin >> Toan;
	cout << "Diem van: "; cin >> Van;
}
void CHocSinh::Xuat()
{
	cin.ignore();
	cout << "Ho va ten: " << Hoten << endl;
	cout << "Diem toan: " << Toan << endl;
	cout << "Diem van: " << Van << endl;
}

/*Nhom get,set*/
string CHocSinh::LayHoTen()
{
	return Hoten;
}

double CHocSinh::LayDiemVan()
{
	return Van;
}

double CHocSinh::LayDiemToan()
{
	return Toan;
}

void CHocSinh::GanHoTen(string hoten)
{
	Hoten = hoten;
}

void CHocSinh::GanDiemVan(double diemvan)
{
	Van = diemvan;
}

void CHocSinh::GanDiemToan(double diemtoan)
{
	Toan = diemtoan;
}

float CHocSinh::TinhDTB()
{
	float DTB = (Toan + Van) / 2;
	return DTB;
}

string CHocSinh::XepLoai()
{
	float DTB = (*this).TinhDTB();
	if (DTB >= 8)
		return "Gioi";
	else
	{
		if (DTB < 8 && DTB >= 6.5)
			return "Kha";
		else
		{
			if (DTB < 6.5 && DTB >= 5)
				return "Trung Binh";
			else
				return "Yeu";
		}
	}
}
