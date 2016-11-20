#include "Xe.h"

void CXe::Nhap()
{
	cout << "Ma so: ";
	fflush(stdin);
	cin.ignore();
	getline(cin, MaSo);
	cout << "Luong xang (lit): "; cin >> LuongXang;
	cout << "Dung tich (lit): "; cin >> DungTich;
	cout << "Do hao xang (lit/km): "; cin >> DoHaoXang;
}

void CXe::Xuat()
{
	cout << "Ma so: " << MaSo << endl;
	cout << "Luong xang: " << LuongXang << endl;
	cout << "Dung tich: " << DungTich << endl;
	cout << "Do hao xang: " << DoHaoXang << endl;
}

void CXe::DoXang()
{
	LuongXang = DungTich;
}

void CXe::Chay(int khoangcach)
{
	for (int i = 0; i < khoangcach; i++)
	{
		LuongXang -= DoHaoXang;
		if ((*this).SapHetXang() == true)
			(*this).DoXang();
	}
}

bool CXe::SapHetXang()
{
	//Chi con chay duoc 5km
	float DoDaiConLai = LuongXang / DoHaoXang;
	if (DoDaiConLai <= 5)
		return false;
	return true;
}

string CXe::GetMaSo()
{
	return MaSo;
}