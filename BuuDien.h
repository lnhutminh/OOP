#pragma once
#include "Thu.h"
#include"HangHoa.h"
#include <vector>
#include<iostream>
using namespace std;
class BuuDien
{
private:
	vector<Thu> ds_thu;
	vector<HangHoa> ds_hh;
public:
	void Nhap_ds_bp();
	void Xuat_ds_bp();
	int Tong_hh();
	void Xuat_thu_nguoi_ten_X(string x);
	double Tong_pvc();
};

