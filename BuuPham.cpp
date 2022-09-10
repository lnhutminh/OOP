#include "BuuPham.h"
#include"Thu.h"
#include "HangHoa.h"
#include<iostream>
using namespace std;

BuuPham::BuuPham()
{
	this->diachi = "";
	this->nguoinhan = "";
}
BuuPham::~BuuPham()
{

}
void BuuPham::Nhap_bp()
{
	cin.ignore();
	cout << "\nNhap dia chi nhan: ";
	getline(cin, this->diachi);
	cout << "\nNhap nguoi nhan: ";
	getline(cin, this->nguoinhan);
}

void BuuPham::Xuat_bp()
{
	cout << "\nDia chi nhan: " << this->diachi;
	cout << "\nNguoi nhan: " << this->nguoinhan;
}
