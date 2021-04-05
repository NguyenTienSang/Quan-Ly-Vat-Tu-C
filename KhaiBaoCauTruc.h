//#pragma once
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
#define SLNV 700
#define SLVTHD 20
//=============== KHAI BAO CAU TRUC ===============
//======== DANH SACH VAT TU (CAY NHI PHAN TIM KIEM) =============
struct Vat_tu
{
	string MAVT;
	string TENVT;
	string DVT;
	float SOLT;
	bool TrangThaiLapHoaDon;
	//pointer
	struct Vat_tu *pLeft;
	struct Vat_tu *pRight;
};
typedef struct Vat_tu* TREE_VAT_TU;

//====== DANH SACH CHI TIET HOA DON (DANH SACH TUYEN TINH) ===================
struct Chi_tiet_hoa_don
{
	string MAVT;
	float SLVT;
	float DONGIA;
	float TRIGIA;
	float VAT;
	int TRANGTHAI;//1 : La khach mua, 0 : La khach tra
};
typedef struct Chi_tiet_hoa_don CHI_TIET_HOA_DON;

struct DS_chi_tiet_hoa_don
{
	CHI_TIET_HOA_DON ds[SLVTHD];
	int slvthd=0;
};
typedef struct DS_chi_tiet_hoa_don DS_CHI_TIET_HOA_DON;
//======= DANH SACH HOA DON (DAN SACH LIEN KET DON) ================
struct Date{
	int day;
	int month;
	int year;
};
typedef struct date DATE;

struct Hoa_don
{
	string SOHD;
	Date NgayLap;
	string LOAI;//N : Nhap, X : Xuat
	float TONGTRIGIA = 0;
	DS_CHI_TIET_HOA_DON ds_chi_tiet_hd;
};
typedef struct Hoa_don HOA_DON;

struct Node_hoa_don
{
	HOA_DON Data;
	Node_hoa_don *pNext;
};
typedef struct Node_hoa_don NODE_HOA_DON;

//======= DANH SACH NHAN VIEN (MANG CON TRO) =====================
struct Nhan_vien
{
	int MANV;
	string HO;
	string TEN;
	string PHAI;
	string CMND;
	NODE_HOA_DON* pHead;
	int SLHD=0; 
};
typedef struct Nhan_vien NHAN_VIEN;

struct DS_Nhan_vien
{
	NHAN_VIEN *nv[SLNV];
	int slnv = 0;
};
typedef struct DS_Nhan_vien DS_NHAN_VIEN;


struct DoanhThu{
	float thang1 = 0;
	float thang2 = 0;
	float thang3 = 0;
	float thang4 = 0;
	float thang5 = 0;
	float thang6 = 0;
	float thang7 = 0;
	float thang8 = 0;
	float thang9 = 0;
	float thang10 = 0;
	float thang11 = 0;
	float thang12 = 0;
};
typedef struct DoanhThu DOANHTHU;




