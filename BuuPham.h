#pragma once
#include <string>
#include<iostream>
using namespace std;
class BuuPham
{
protected:
	string diachi;
	string nguoinhan;
public:
	BuuPham();
	~BuuPham();
	void Nhap_bp();
	void Xuat_bp();

};

