#pragma once
#include <iostream>
#include <string>
using namespace std;
#define GIOI 1
#define KHA 2
#define TRUNGBINH 3
#define YEU 4

class CHocSinh
{
	string Hoten;
	float Toan, Van;
public:
	/*Nhom tao,huy*/
	CHocSinh()
	{
		Hoten = "N/A";
		Toan = Van = 0;
	}
	CHocSinh(string ten, float toan, float van)
	{
		Hoten = ten;
		Toan = toan;
		Van = van;
	}
	~CHocSinh() {};
	/*Nhom nhap,xuat*/
	void Nhap();
	void Xuat();
	/*Nhom get,set*/
	string LayHoTen();
	double LayDiemVan();
	double LayDiemToan();
	void GanHoTen(string hoten);
	void GanDiemVan(double diemvan);
	void GanDiemToan(double diemtoan);
	/*Nhom khac*/
	float TinhDTB(); //Tinh diem trung binh
	string XepLoai();
};

