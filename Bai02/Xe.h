#pragma once
#include <iostream>
#include <string>
using namespace std;

class CXe
{
private:
	string MaSo;
	float LuongXang, DungTich, DoHaoXang;
public:
	CXe()
	{
		MaSo = "N/A";
		LuongXang = DungTich = DoHaoXang = 0;
	}
	CXe(string maso, float luongxang, float dungtich, float dohaoxang)
	{
		MaSo = maso;
		LuongXang = luongxang;
		DungTich = dungtich;
		DoHaoXang = dohaoxang;
	}
	~CXe() {};
	void Nhap();
	void Xuat();
	void DoXang();
	void Chay(int);
	bool SapHetXang();
	string GetMaSo();
};
