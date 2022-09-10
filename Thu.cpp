#include "Thu.h"
#include <string>
#include<iostream>
using namespace std;
Thu::Thu()
{
	BuuPham::BuuPham();
	this->loaithu = 0;
	this->phi = 0;
}
Thu::~Thu()
{

}
string Thu::getten()
{
	return this->nguoinhan;
}
double Thu::getphi()
{
	return this->phi;
}
void Thu::Nhap_thu()
{
	BuuPham::Nhap_bp();
	do
	{
		cout << "\nNhap loai thu (0: Thu thuong \t1: Thu chuyen nhanh): ";
		cin >> this->loaithu;
		if (this->loaithu != 0 && this->loaithu != 1)
		{
			cout << "\nNhap khong hop le. Xin kiem tra lai";
			system("pause");
		}
	} while (this->loaithu != 0 && this->loaithu != 1);
	if (this->loaithu == 0)
	{
		this->phi = 5000;
	}
	else
	{
		this->phi = 10000;
	}
}
void Thu::Xuat_thu()
{
	BuuPham::Xuat_bp();
	if (this->loaithu == 0)
	{
		cout << "\nLoai thu: THUONG";
		cout << "\nPhi van chuyen: " << this->phi;
	}
	else
	{
		cout << "\nLoai thu: CHUYEN NHANH";
		cout << "\nPhi van chuyen: " << this->phi;
	}
}

