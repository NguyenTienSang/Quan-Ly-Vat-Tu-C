#include "KhaiBaoCauTruc.h"
#include "VatTu.h"
#include "HoaDon.h"
#include "console.h"
#include "TaoKhung.h"
#include "XuLyChuoi.h"
#include<conio.h>
#include<fstream>
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<ctime.>
#include <sstream>
#include<ctime>

time_t now = time('\0');
tm	*time_ht = localtime(&now);


#define TrangXoa 255
#define DoTrang 252
#define DoDamTrang 244
#define DoBac 132
#define XanhTrang 249
#define XanhLaDamTrang 242
#define XanhDamDoDam 36
#define DenTrang 240
#define TrangXanhLa 175
#define TrangXanhLaDam 47
#define TrangXanh 159
#define TrangBac 143
#define TrangDo 79
#define TrangDoNhat 207
#define TrangDen 15
//int color;


NODE_HOA_DON* KhoiTaoNode(HOA_DON hd)//KHOI TAO NODE ( CAP PHAT VUNG NHO CHO 1 NODE)
{
	NODE_HOA_DON *p = new NODE_HOA_DON;
	if(p == NULL)
	{
		cout<<"\nCap Phat Khong Thanh Cong";
		return NULL;
	}
		p->Data = hd;
		p->pNext = NULL;
		return p;
}

bool KTSOHD(DS_NHAN_VIEN dsnv, string SOHDT)
{
	NODE_HOA_DON* p;
	for(int i=0; i<dsnv.slnv; i++)
	{
		p = dsnv.nv[i]->pHead;
		while(p!=NULL)
		{
			if(p->Data.SOHD == SOHDT)
			{
				return true;
			}
			p = p->pNext;
		}
	}
	return false;
}

int TimNhanVienLapHoaDon(DS_NHAN_VIEN dsnv, string SOHDT)
{
	NODE_HOA_DON* p;
	for(int i=0; i<dsnv.slnv; i++)
	{
		p = dsnv.nv[i]->pHead;
		while(p!=NULL)
		{
			if(p->Data.SOHD == SOHDT)
			{
				return i;
			}
			p = p->pNext;
		}
	}
}

void ThemCuoi(NODE_HOA_DON* &pHead, NODE_HOA_DON* p)
{
	if(pHead == NULL)
	{
		pHead = p;
	}
	else
	{
		for (NODE_HOA_DON* k = pHead; k != NULL; k = k->pNext)
		{
			if (k->pNext == NULL)
			{
				k->pNext = p;
				break;
			}
		}
	}
}


void DuyetDanhSachHoaDon(DS_NHAN_VIEN dsnv,NODE_HOA_DON* HoaDonTam[],int &SLHDX)
{
	NODE_HOA_DON* p;
	for(int i=0; i<dsnv.slnv; i++)
	{
		p = dsnv.nv[i]->pHead;
		while(p!=NULL)
		{
			if(p->Data.LOAI== "X")
			{
//				HoaDonTam[SLHDX] = new NODE_HOA_DON;
				HoaDonTam[SLHDX] = p;
				SLHDX++;
			}
			p = p->pNext;
		}
	}
}


void MenuTraHang(int &Vitri)
{
	char key_press;
//	Vitri = 1;
	int color;
	menuluachontrahang:
	while(1)
	{
		color = TrangBac;
		if(Vitri == 1)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=6; i<=10; i++)
		{
			gotoXY(9,i);
			cout<<"                       ";
		}
		gotoXY(17,8);
		cout<<"TRA HANG";
		color = TrangBac;
		
		if(Vitri == 2)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=12; i<=16; i++)
		{
			gotoXY(9,i);
			cout<<"                       ";
		}
		gotoXY(17,14);
		cout<<"HOAN TAC";
		color = TrangBac;
		
		if(Vitri == 3)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=18; i<=22; i++)
		{
			gotoXY(9,i);
			cout<<"                       ";
		}
		gotoXY(17,20);
		cout<<"BO CHON";
		color = TrangBac;	
		
		
		if(Vitri == 4)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=24; i<=28; i++)
		{
			gotoXY(9,i);
			cout<<"                       ";
		}
		gotoXY(19,26);
		cout<<"LUU";
		color = TrangBac;
		
		
		if(Vitri != 0)
		{
			key_press=getch();
			if(key_press == -32)
			{
						key_press = getch();
						
						
						//NHAN LEN
						if(key_press == 72)
						{
							if(Vitri != 1)
							{
								Vitri--;
							}
							else if(Vitri == 1)
							{
								Vitri = 4;
							}
						}
						//NHAN XUONG
						else if(key_press == 80)
						{
							if(Vitri != 4)
							{
								Vitri++;
							}
							else if(Vitri == 4)
							{
								Vitri = 1;
							}
						}
			}
			else if(key_press == 13)
			{
				if(Vitri == 4)
				{
					////////BAT DAU
							TextColor(TrangDoNhat);
							for(int i=0; i<4; i++)
								{
									gotoXY(5,32+i);
									cout<<"                               ";
								}
								gotoXY(10,33);
								cout<<"BAN CO CHAC LUU KHONG";
								TextColor(DoTrang);
												gotoXY(13,35);
												cout<<"CO";
												TextColor(TrangDoNhat);
												gotoXY(24,35);
												cout<<"KHONG";
												int Vitrilth = 1;
												char keylth;
											while(1)
												{
												//====== THUC THI =======
													keylth = getch();
													if(keylth == -32)
													{
														keylth = getch();
														if(keylth == 77)
														{
															//=== THUC THI
															if(Vitrilth == 1)
															{
																TextColor(TrangDoNhat);
																gotoXY(13,35);
																cout<<"CO";
																TextColor(DoTrang);
																gotoXY(24,35);
																cout<<"KHONG";
																Vitrilth = 2;
															}
															else if(Vitrilth == 2)
															{
																TextColor(DoTrang);
																gotoXY(13,35);
																cout<<"CO";
																TextColor(TrangDoNhat);
																gotoXY(24,35);
																cout<<"KHONG";
																Vitrilth = 1;
															}
														}	
													
														else if(keylth == 75)
														{
															//=== THUC THI
															if(Vitrilth == 1)
															{
																TextColor(TrangDoNhat);
																gotoXY(13,35);
																cout<<"CO";
																TextColor(DoTrang);
																gotoXY(24,35);
																cout<<"KHONG";
																Vitrilth = 2;
															}
															else if(Vitrilth == 2)
															{
																TextColor(DoTrang);
																gotoXY(13,35);
																cout<<"CO";
																TextColor(TrangDoNhat);
																gotoXY(24,35);
																cout<<"KHONG";
																Vitrilth = 1;
															}
														}
												}
												else if(keylth == 13)
												{
													//XOA BANG YES NO
													TextColor(TrangXoa);
														for(int i=0; i<4; i++)
														{
															gotoXY(5,32+i);
															cout<<"                               ";
														}
													
													if(Vitrilth == 1)//NEU LA YES
													{
														return;
													}
													else if(Vitrilth == 2)//NEU LA NO
													{
														goto menuluachontrahang;
													}
												}
												}
				}
				return;
			}
		}
		else if(Vitri == 0)
			{
				return;
			}
	}
}


void TaoKhungChonVatTuTraHang(NODE_HOA_DON *HoaDonTam[],int vthdht,DS_NHAN_VIEN dsnv)
{
	system("cls");
	system("color f0");
	TextColor(TrangXanhLa);
	
	//==THANH NGANG TOP
		gotoXY(0,0);
		cout<<"                                                                                                     ";
		gotoXY(101,0);
		cout<<"                                                                                                     ";
		//THANH NGANG BETWEEN TREN
		gotoXY(0,4);
		cout<<"                                                                                                     ";
		gotoXY(101,4);
		cout<<"                                                                                                     ";
		
		
		//THANH NGANG CHUC NANG
		gotoXY(2,30);
		cout<<"                                     ";
		
		gotoXY(2,37);
		cout<<"                                     ";
		//THANH NGANG DOWN	 
		gotoXY(0,43);
		cout<<"                                                                                                     ";
		gotoXY(101,43);
		cout<<"                                                                                                     ";
	
			
	//THANH DOC
	//THANH 1
	for(int i=0; i<=10; i++)
	{
		gotoXY(0,i+1);
		cout<<"  ";
		gotoXY(0,12+i);
		cout<<"  ";
		gotoXY(0,22+i);
		cout<<"  ";
		gotoXY(0,32+i);
		cout<<"  ";
	}

	
	//THANH 2
	for(int i=0; i<=10; i++)
	{
		gotoXY(200,1+i);
		cout<<"  ";
		gotoXY(200,12+i);
		cout<<"  ";
		gotoXY(200,22+i);
		cout<<"  ";
		gotoXY(200,32+i);
		cout<<"  ";
	}
	
	gotoXY(41,8);
	cout<<"                                                                              ";
	gotoXY(119,8);
	cout<<"                                                                                 ";
	
	//THANH 2
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(39,1+i);
		cout<<"  ";
		gotoXY(39,12+i);
		cout<<"  ";
		gotoXY(39,22+i);
		cout<<"  ";
		gotoXY(39,32+i);
		cout<<"  ";
	}
	
	
		//THANH 3
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(55,5+i);
		cout<<"  ";
		gotoXY(55,12+i);
		cout<<"  ";
		gotoXY(55,22+i);
		cout<<"  ";
		gotoXY(55,32+i);
		cout<<"  ";
	}
	
	
	
	
	
	
	
	//THANH 4
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(84,5+i);
		cout<<"  ";
		gotoXY(84,12+i);
		cout<<"  ";
		gotoXY(84,22+i);
		cout<<"  ";
		gotoXY(84,32+i);
		cout<<"  ";
	}
	//THANH 5
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(97,5+i);
		cout<<"  ";
		gotoXY(97,12+i);
		cout<<"  ";
		gotoXY(97,22+i);
		cout<<"  ";
		gotoXY(97,32+i);
		cout<<"  ";
	}
	//THANH 6
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(129,5+i);
		cout<<"  ";
		gotoXY(129,12+i);
		cout<<"  ";
		gotoXY(129,22+i);
		cout<<"  ";
		gotoXY(129,32+i);
		cout<<"  ";
	}
	//THANH 7
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(143,5+i);
		cout<<"  ";
		gotoXY(143,12+i);
		cout<<"  ";
		gotoXY(143,22+i);
		cout<<"  ";
		gotoXY(143,32+i);
		cout<<"  ";
	}
	
	//THANH 8
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(174,5+i);
		cout<<"  ";
		gotoXY(174,12+i);
		cout<<"  ";
		gotoXY(174,22+i);
		cout<<"  ";
		gotoXY(174,32+i);
		cout<<"  ";
	}
	
	
	TextColor(DoTrang);
	int vtnvlhd = TimNhanVienLapHoaDon(dsnv,HoaDonTam[vthdht]->Data.SOHD);
	gotoXY(45,2);
	cout<<"SO HOA DON : ";
	cout<<HoaDonTam[vthdht]->Data.SOHD;
	gotoXY(82,2);
	cout<<"NGAY LAP : ";
	cout<<HoaDonTam[vthdht]->Data.NgayLap.day<<"/"<<HoaDonTam[vthdht]->Data.NgayLap.month<<"/"<<HoaDonTam[vthdht]->Data.NgayLap.year;
	gotoXY(106,2);
	cout<<"LOAI : "<<HoaDonTam[vthdht]->Data.LOAI;
	gotoXY(118,2);
	cout<<"MA NV : "<<dsnv.nv[vtnvlhd]->MANV;
	gotoXY(138,2);
	cout<<"HO TEN : "<<dsnv.nv[vtnvlhd]->HO<<" "<<dsnv.nv[vtnvlhd]->TEN;
	gotoXY(10,2);
	TextColor(TrangDo);
	cout<<"CHUC NANG CHUONG TRINH";
	gotoXY(43,6);
	cout<<"MA VAT TU";
	//=== ke thanh doc gotoXY(88,4);
	gotoXY(65,6);
	cout<<"TEN VAT TU";
	//=== ke thanh doc gotoXY(146,4);
	gotoXY(88,6);
	cout<<"SO LUONG";
	//=== ke thanh doc gotoXY(164,4);
	gotoXY(107,6);
	cout<<"DON GIA (VND)";
	//=== ke thanh doc gotoXY(176,4);
	gotoXY(134,6);
	cout<<"VAT (%)";
	
	gotoXY(153,6);
	cout<<"TRI GIA (VND)";
	gotoXY(183,6);
	cout<<"TRANG THAI";
}

void MenuChucNangTraHang(int &Vitri)
{
	char key_press;
//	Vitri = 1;
	int color;
	while(1)
	{
		color = TrangBac;
		if(Vitri == 1)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=6; i<=10; i++)
		{
			gotoXY(4,i);
			cout<<"                       ";
		}
		gotoXY(7,8);
		cout<<"LUA CHON TRA HANG";
		color = TrangBac;
		
		
		if(Vitri == 2)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=6; i<=10; i++)
		{
			gotoXY(30,i);
			cout<<"                       ";
		}
		gotoXY(38,8);
		cout<<"BO CHON";
		color = TrangBac;
		
		if(Vitri == 3)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=13; i<=17; i++)
		{
			gotoXY(17,i);
			cout<<"                       ";
		}
		gotoXY(19,15);
		cout<<"RA GIAO DIEN CHINH";
		color = TrangBac;	
		
		if(Vitri != 0)
		{
			key_press=getch();
			if(key_press == -32)
			{
						key_press = getch();
						
						//NHAN QUA TRAI
						if(key_press == 75)
				        {
				        	if(Vitri == 1)
				        	{
				        		Vitri=2;
							}
							else if(Vitri == 2)
							{
								Vitri = 1;
							}
							else if(Vitri == 3)
							{
								Vitri = 1;
							}
						}
						//NHAN QUA PHAI
						else if(key_press == 77)
				        {
				        	if(Vitri == 1)
				        	{
				        		Vitri=2;
							}
							else if(Vitri == 2)
							{
								Vitri = 1;
							}
							else if(Vitri == 3)
							{
								Vitri = 2;
							}
						}
						//NHAN LEN
						else if(key_press == 72)
						{
							if(Vitri == 1 || Vitri == 2)
							{
								Vitri = 3;
							}
							else if(Vitri == 3)
							{
								Vitri = 2;
							}
						}
						//NHAN XUONG
						else if(key_press == 80)
						{
							if(Vitri == 1 || Vitri == 2)
							{
								Vitri = 3;
							}
							else if(Vitri == 3)
							{
								Vitri = 1;
							}
						}
			}
	       
			else if(key_press == 13)
			{
				break;
			}
		}
			else if(Vitri == 0)
			{
				break;
			}
	}
}

//XOA DU LIEU
void XoaDuLieuChonHoaDonTraHang(int dem)
{
	TextColor(TrangXoa);
	for(int i=0; i<dem;i++)
	{
			gotoXY(68,9+i);
			cout<<"                    ";
			gotoXY(107,9+i);	
			cout<<"          ";
			gotoXY(145,9+i);	
			cout<<" ";
			gotoXY(170,9+i);	
			cout<<"               ";
			
	}
}




void SoSanhVaInRa(string ChuoiSearch,NODE_HOA_DON* HoaDonTam[],int SLHDX,int &dem,int vthightlight,int &vthdht,int vtbatdau,int vtketthuc,int oldplace)
{
	//IN DU LIEU
	TextColor(TrangDen);
	dem = 0;
	for(int i=0; i<SLHDX;i++)
	{
		if(HoaDonTam[i]->Data.SOHD.find(ChuoiSearch) != -1)
		{
			if(dem == vthightlight)
			{
				TextColor(XanhTrang);
				vthdht = i;	
			}
					gotoXY(68,9+dem);
					cout<<HoaDonTam[i]->Data.SOHD;
					gotoXY(107,9+dem);	
					cout<<HoaDonTam[i]->Data.NgayLap.day<<"/"<<HoaDonTam[i]->Data.NgayLap.month<<"/"<<HoaDonTam[i]->Data.NgayLap.year;
					gotoXY(145,9+dem);	
					cout<<HoaDonTam[i]->Data.LOAI;
					gotoXY(170,9+dem);
					cout<<size_t(HoaDonTam[i]->Data.TONGTRIGIA);
			if(dem == vthightlight)
			{	
				TextColor(TrangDen);	
			}	
				dem++;
		}
	}
}


bool NamNhuan(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	return false;
}

int tinhSoNgayTrongThang(int month, int year)
{
	int nNumOfDays=0;

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		nNumOfDays = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		nNumOfDays = 30;
		break;
	case 2:
		if (NamNhuan(year))
		{
			nNumOfDays = 29;
		}
		else
		{
			nNumOfDays = 28;
		}
		break;
	}

	return nNumOfDays;
}


int TinhSoNgayTrongNam(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 366;
	}
	return 365;
}

bool KTThoiGianLapHoaDonHopLe(int day, int month, int year)
{
	if((day < 1 || day > tinhSoNgayTrongThang(month,year)) || month < 1 || year < 1)//THOI GIAN KHONG HOP LE
	{
		return false;
	}
	if(year > (1900 + time_ht->tm_year))
	{
		return false;
	}
	else if(year == (1900 + time_ht->tm_year))
	{
		if(month > (1+time_ht->tm_mon))
		{
			return false;
		}
		else if(month == (1+time_ht->tm_mon))
		{
			if(day > time_ht->tm_mday)
			{
				return false;
			}
		}
	}
	return true;
}



bool KTThoiGianHopLe(int day,int month,int year)
{
	if((day < 1 || day > tinhSoNgayTrongThang(month,year)) || month < 1 || year < 1)//THOI GIAN KHONG HOP LE
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool KT2KhoangTGHopLe(int daybd,int monthbd,int yearbd, int daykt,int monthkt,int yearkt)
{
	if(yearbd == yearkt)
	{
		if(monthbd == monthkt)
		{
			if(daybd >= daykt)
			{
				return false;
			}
		}
		else if(monthbd > monthkt)
		{
			return false;
		}
	}
	else if(yearbd > yearkt)
	{
		return false;
	}
	if(1900 + time_ht->tm_year < yearkt)
	{
		return false;
	}
	else if(1900 + time_ht->tm_year == yearkt)
	{
		if((1+time_ht->tm_mon) < monthkt)
		{
			return false;
		}
		else if((1+time_ht->tm_mon) == monthkt)
		{
			if(time_ht->tm_mday < daykt)
			{
				return false;
			}
		}
	}
	return true;
}




int TinhKhoangThoiGian(int day,int month,int year)
{
	int TG;
	time_t now = time('\0');
tm	*time_ht = localtime(&now);
	time_ht->tm_mon+=1;
	time_ht->tm_year+=1900;

	if(year == (time_ht->tm_year))
	{
		if(month == (time_ht->tm_mon))
		{
			TG = time_ht->tm_mday - day;
		}
		else
		{
			TG = tinhSoNgayTrongThang(month,year) - day;
			month++;
			while(month != time_ht->tm_mon)
			{
				TG+= tinhSoNgayTrongThang(month,year);
				month++;
			}
			TG+= time_ht->tm_mday;
		}
	}
	else
	{
		TG = time_ht->tm_mday;
		time_ht->tm_mon--;
		while (time_ht->tm_mon != 0)
		{
			TG += tinhSoNgayTrongThang(time_ht->tm_mon, time_ht->tm_year);
			time_ht->tm_mon--;
		}
		TG += tinhSoNgayTrongThang(month, year) - day;
		month++;
		while (month != 13)
		{
			TG += tinhSoNgayTrongThang(month, year);
			month++;
		}
			year++;
			while (year < time_ht->tm_year)
			{
				TG+= TinhSoNgayTrongNam(year);
				year++;
			}
	}
	return TG;
}





void TimKiemHoaDon(TREE_VAT_TU t,NODE_HOA_DON* HoaDonTam[],int SLHDX,DS_NHAN_VIEN dsnv)
{

	int doronghuongdan = 39;
	int Vitrikhoitao=0;
	string ChuoiSearch;
	char keykitu;
	int x,y;
	int sokytudanhap;
	int dorong = 20;
	int vthighlight,vthdht,vtbatdau,vtketthuc,oldplace,SoLuongSoSanh;

	
	gotoXY(x,y);
	chucnangtrahang:
	ChuoiSearch = "";
	x=74,y=2;
	sokytudanhap=0;
	vthighlight = 0,vthdht=0,vtbatdau=0,vtketthuc,oldplace=9,SoLuongSoSanh=0;	
	SoLuongSoSanh = SLHDX;	
	TaoKhungTraHang();
	//IN GIA TRI KHOI TAO
//	vtketthuc = SoLuongSoSanh;
	if(SLHDX <= 34)
	{
		vtketthuc = SLHDX;
	}
	else if(SLHDX > 34)
	{
		vtketthuc = 34;
	}
	TextColor(DenTrang);
	for(int i=vtbatdau; i<vtketthuc;i++)
	{
		if(i == vthighlight)
		{
			TextColor(TrangDoNhat);
			vthdht = i;
		}
		gotoXY(68,9+i);
			cout<<HoaDonTam[i]->Data.SOHD;
		gotoXY(107,9+i);	
			cout<<HoaDonTam[i]->Data.NgayLap.day<<"/"<<HoaDonTam[i]->Data.NgayLap.month<<"/"<<HoaDonTam[i]->Data.NgayLap.year;
		gotoXY(145,9+i);	
			cout<<HoaDonTam[i]->Data.LOAI;
		gotoXY(170,9+i);	
			cout<<size_t(HoaDonTam[i]->Data.TONGTRIGIA);
		if(i == vthighlight)
		{
			TextColor(DenTrang);
		}
	}
		MenuChucNangTraHang(Vitrikhoitao);
		chonhoadontrahang:
		while(1)
		{
			HuongDanSuDungTraHang1(doronghuongdan);
			ShowConsoleCursor(true);
			gotoXY(x,2);
			TextColor(DenTrang);
			keykitu = getch();//Bat phim khi nhan mot phim bat ki
			if(keykitu == 8)//Kiem neu la phim nhan la backspace thi se lui nguoc con tro lai va bien ki tu vua nhap vao la khoang trang
			{
				if(sokytudanhap != 0)
				{
					gotoXY(x,y);
					keykitu = 32;//gan ki tu vua nhap vao thanh khoang trang
					cout<<"\b";//Lenh lui nguoc con tro chi vi
					cout<<keykitu;//cout ra ki tu khoang trang
					cout<<"\b";
					sokytudanhap--;//lui lai 1 don vi
					ChuoiSearch.erase(sokytudanhap,1);
					x--;
					vthighlight = 0;
					vtbatdau = 0;
					oldplace = 9;
								
					//XOA DU LIEU CU
					TextColor(TrangXoa);
					for(int i=vtbatdau; i<vtketthuc;i++)
					{
							gotoXY(68,oldplace+i);
							cout<<"                    ";
							gotoXY(107,oldplace+i);	
							cout<<"          ";
							gotoXY(145,oldplace+i);		
							cout<<" ";
							gotoXY(170,oldplace+i);	
							cout<<"               ";
					}
					TextColor(DenTrang);
					if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
					{
						if(SLHDX <= 34)
						{
							vtketthuc = SLHDX;
						}
						else if(SLHDX > 34)
						{
							vtketthuc = 34;
						}
						for(int i=vtbatdau; i<vtketthuc; i++)
						{
							if(i == vthighlight)
							{
								TextColor(TrangDoNhat);
								vthdht = i;
							}
							gotoXY(68,oldplace+i);
							cout<<HoaDonTam[i]->Data.SOHD;
							gotoXY(107,oldplace+i);	
							cout<<HoaDonTam[i]->Data.NgayLap.day<<"/"<<HoaDonTam[i]->Data.NgayLap.month<<"/"<<HoaDonTam[i]->Data.NgayLap.year;
							gotoXY(145,oldplace+i);	
							cout<<HoaDonTam[i]->Data.LOAI;
							gotoXY(170,oldplace+i);
							cout<<size_t(HoaDonTam[i]->Data.TONGTRIGIA);
							if(i == vthighlight)
							{
								TextColor(DenTrang);
							}
						}
						SoLuongSoSanh = SLHDX;
					}
					else if(ChuoiSearch != "")
					{
						vtketthuc=0;
						SoLuongSoSanh = 0;
						for(int i=vtbatdau,j=0;j < SLHDX;)
						{
							if(HoaDonTam[j]->Data.SOHD.find(ChuoiSearch) != -1)
							{
								if(i < 34)
								{
									if(i == vthighlight)
									{
										TextColor(TrangDoNhat);
										vthdht = j;
									}
									gotoXY(68,oldplace+i);
									cout<<HoaDonTam[j]->Data.SOHD;
									gotoXY(107,oldplace+i);	
									cout<<HoaDonTam[j]->Data.NgayLap.day<<"/"<<HoaDonTam[j]->Data.NgayLap.month<<"/"<<HoaDonTam[j]->Data.NgayLap.year;
									gotoXY(145,oldplace+i);	
									cout<<HoaDonTam[j]->Data.LOAI;
									gotoXY(170,oldplace+i);
									cout<<size_t(HoaDonTam[j]->Data.TONGTRIGIA);
									if(i == vthighlight)
									{
										TextColor(DenTrang);
									}
									i++;
									vtketthuc++;
								}
								SoLuongSoSanh++;
							}
								j++;
						}
					}
				}
			}
			//Neu phim nhan khong phai la backspace thi in ra ki tu do
			else if((keykitu >=97 && keykitu<=122 || keykitu>=65 && keykitu<=90  || keykitu>=48 && keykitu<=57 || keykitu == 95 ) && sokytudanhap<dorong)
			{
				//XOA DU LIEU CU
				TextColor(TrangXoa);
				for(int i=vtbatdau; i<vtketthuc;i++)
					{
							gotoXY(68,oldplace+i);
							cout<<"                    ";
							gotoXY(107,oldplace+i);	
							cout<<"          ";
							gotoXY(145,oldplace+i);		
							cout<<" ";
							gotoXY(170,oldplace+i);	
							cout<<"               ";
					}
				if(keykitu>=97 && keykitu<=122)
				{
					keykitu-=32;
				}
				gotoXY(x,y);
				TextColor(DenTrang);
				cout<<keykitu;
				ChuoiSearch+=keykitu;
				sokytudanhap++;//tang len 1 don vi
				x++;
				vthighlight = 0;
				vtbatdau=0;
				vtketthuc = 0;
				oldplace = 9;
				SoLuongSoSanh = 0;
						for(int i=vtbatdau,j=0;j < SLHDX;)
						{
							if(HoaDonTam[j]->Data.SOHD.find(ChuoiSearch) != -1)
							{
								if(i < 34)
								{
									if(i == vthighlight)
									{
										TextColor(TrangDoNhat);
										vthdht = j;
									}
									gotoXY(68,oldplace+i);
									cout<<HoaDonTam[j]->Data.SOHD;
									gotoXY(107,oldplace+i);	
									cout<<HoaDonTam[j]->Data.NgayLap.day<<"/"<<HoaDonTam[j]->Data.NgayLap.month<<"/"<<HoaDonTam[j]->Data.NgayLap.year;
									gotoXY(145,oldplace+i);	
									cout<<HoaDonTam[j]->Data.LOAI;
									gotoXY(170,oldplace+i);
									cout<<size_t(HoaDonTam[j]->Data.TONGTRIGIA);
									if(i == vthighlight)
									{
										TextColor(DenTrang);
									}
									i++;
									vtketthuc++;
								}
								SoLuongSoSanh++;
							}
								j++;
						}
			}
			else if(keykitu == -32)
			{
				//XOA DU LIEU CU
				keykitu = getch();
				if(keykitu == 72)//NHAN LEN
				{
					if(vthighlight > vtbatdau)
					{
						vthighlight--;
					}
					else if(vthighlight == vtbatdau && vtbatdau > 0)
					{
						TextColor(TrangXoa);
						for(int i=vtbatdau; i<vtketthuc;i++)
						{
								gotoXY(68,oldplace+i);
								cout<<"                    ";
								gotoXY(107,oldplace+i);	
								cout<<"          ";
								gotoXY(145,oldplace+i);		
								cout<<" ";
								gotoXY(170,oldplace+i);	
								cout<<"               ";
						}
						vtbatdau--;
						vtketthuc--;
						vthighlight--;
						oldplace++;
					}
					TextColor(DenTrang);
						if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
						{
							for(int i=vtbatdau; i<vtketthuc; i++)
							{
								if(i == vthighlight)
								{
									TextColor(TrangDoNhat);
									vthdht = i;
								}
								gotoXY(68,oldplace+i);
								cout<<HoaDonTam[i]->Data.SOHD;
								gotoXY(107,oldplace+i);	
								cout<<HoaDonTam[i]->Data.NgayLap.day<<"/"<<HoaDonTam[i]->Data.NgayLap.month<<"/"<<HoaDonTam[i]->Data.NgayLap.year;
								gotoXY(145,oldplace+i);	
								cout<<HoaDonTam[i]->Data.LOAI;
								gotoXY(170,oldplace+i);
								cout<<size_t(HoaDonTam[i]->Data.TONGTRIGIA);
								if(i == vthighlight)
								{
									TextColor(DenTrang);
								}
							}
						}
						else if(ChuoiSearch != "")
						{
							int j=0;
								int i = 0;
								while(j < SLHDX)
								{
									if(HoaDonTam[j]->Data.SOHD.find(ChuoiSearch) != -1)
									{
										if(i>=vtbatdau && i<vtketthuc)
										{
											if(i == vthighlight)
											{
												TextColor(TrangDoNhat);
												vthdht = j;
											}
											gotoXY(68,oldplace+i);
											cout<<HoaDonTam[j]->Data.SOHD;
											gotoXY(107,oldplace+i);	
											cout<<HoaDonTam[j]->Data.NgayLap.day<<"/"<<HoaDonTam[j]->Data.NgayLap.month<<"/"<<HoaDonTam[j]->Data.NgayLap.year;
											gotoXY(145,oldplace+i);	
											cout<<HoaDonTam[j]->Data.LOAI;
											gotoXY(170,oldplace+i);
											cout<<size_t(HoaDonTam[j]->Data.TONGTRIGIA);
											if(i == vthighlight)
											{
												TextColor(DenTrang);
											}
										}
										i++;
									}
									j++;
								}
						}
				}
				else if(keykitu == 80)//NHAN XUONG
				{
					if(vthighlight < vtketthuc-1)
						{
							vthighlight++;
						}
					else if(vthighlight == (vtketthuc-1) && vtketthuc <= SoLuongSoSanh-1)
						{
							TextColor(TrangXoa);
						for(int i=vtbatdau; i<vtketthuc;i++)
						{
								gotoXY(68,oldplace+i);
								cout<<"                    ";
								gotoXY(107,oldplace+i);	
								cout<<"          ";
								gotoXY(145,oldplace+i);		
								cout<<" ";
								gotoXY(170,oldplace+i);	
								cout<<"               ";
						}
							vtbatdau++;
							vtketthuc++;
							vthighlight++;
							oldplace--;
						}
						TextColor(DenTrang);
						if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
						{
							for(int i=vtbatdau; i<vtketthuc; i++)
							{
								if(i == vthighlight)
								{
									TextColor(TrangDoNhat);
									vthdht = i;
								}
								gotoXY(68,oldplace+i);
								cout<<HoaDonTam[i]->Data.SOHD;
								gotoXY(107,oldplace+i);	
								cout<<HoaDonTam[i]->Data.NgayLap.day<<"/"<<HoaDonTam[i]->Data.NgayLap.month<<"/"<<HoaDonTam[i]->Data.NgayLap.year;
								gotoXY(145,oldplace+i);	
								cout<<HoaDonTam[i]->Data.LOAI;
								gotoXY(170,oldplace+i);
								cout<<size_t(HoaDonTam[i]->Data.TONGTRIGIA);
								if(i == vthighlight)
								{
									TextColor(DenTrang);
								}
							}
						}
						else if(ChuoiSearch != "")
						{
							int j=0;
								int i = 0;
								while(j < SLHDX)
								{
									if(HoaDonTam[j]->Data.SOHD.find(ChuoiSearch) != -1)
									{
										if(i>=vtbatdau && i<vtketthuc)
										{
											if(i == vthighlight)
											{
												TextColor(TrangDoNhat);
												vthdht = j;
											}
											gotoXY(68,oldplace+i);
											cout<<HoaDonTam[j]->Data.SOHD;
											gotoXY(107,oldplace+i);	
											cout<<HoaDonTam[j]->Data.NgayLap.day<<"/"<<HoaDonTam[j]->Data.NgayLap.month<<"/"<<HoaDonTam[j]->Data.NgayLap.year;
											gotoXY(145,oldplace+i);	
											cout<<HoaDonTam[j]->Data.LOAI;
											gotoXY(170,oldplace+i);
											cout<<size_t(HoaDonTam[j]->Data.TONGTRIGIA);
											if(i == vthighlight)
											{
												TextColor(DenTrang);
											}
										}
										i++;
									}
									j++;
								}
						}
				}
				else if(keykitu == 75)//NHAN QUA TRAI
				{
					luachonchucnangtrahang:
					ShowConsoleCursor(false);
					XoaHuongDanSuDungTraHang1(doronghuongdan);
					HuongDanSuDungTraHang2(doronghuongdan);
					Vitrikhoitao = 1;
					MenuChucNangTraHang(Vitrikhoitao);
					if(Vitrikhoitao == 1)//LUA CHON HANG
					{
						if(TinhKhoangThoiGian(HoaDonTam[vthdht]->Data.NgayLap.day,HoaDonTam[vthdht]->Data.NgayLap.month,HoaDonTam[vthdht]->Data.NgayLap.year) > 3)
						{
							TextColor(TrangDoNhat);
							for(int i=0;i<=2; i++)
							{
								gotoXY(15,29+i);
								cout<<"                      ";
							}
							gotoXY(19,30);
							cout<<"DA QUA HAN TRA";
							getch();
							TextColor(TrangXoa);
							for(int i=0;i<=2; i++)
							{
								gotoXY(15,29+i);
								cout<<"                      ";
							}
							goto luachonchucnangtrahang;
						}
						else//TRA HANG
						{
							char keylcvtth;
							int vtlcvtth=0;
							int Vitrikhoitaoth2=0;
							TaoKhungChonVatTuTraHang(HoaDonTam,vthdht,dsnv);
							
							MenuTraHang(Vitrikhoitaoth2);
							luachonvattutrahang:
							while(1)
							{
							HuongDanSuDungTraHang3(doronghuongdan);
							//IN RA DANH SACH VAT TU TRONG HOA DON
							TextColor(DenTrang);
							for(int i=0; i<HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.slvthd; i++)
							{
								if(vtlcvtth == i)
								{
									TextColor(TrangDoNhat);
								}
									gotoXY(42,9+i);
									cout<<HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[i].MAVT;
									gotoXY(59,9+i);
//									cout<<HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[i].TENVT;
									TimKiemVaInTenVatTu(t,HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[i].MAVT);
									gotoXY(87,9+i);	
									cout<<HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[i].SLVT;
									gotoXY(101,9+i);	
									cout<<HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[i].DONGIA;
									gotoXY(134,9+i);
									cout<<HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[i].VAT;
									gotoXY(148,9+i);
									cout<<size_t(HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[i].TRIGIA);
								if(HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[i].TRANGTHAI == 1)
								{
									gotoXY(178,9+i);
									cout<<"KHACH MUA";
								}
								else if( HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[i].TRANGTHAI == 2 )
								{
									gotoXY(178,9+i);
									cout<<"KHACH DA TRA HANG";
								}
								else if(HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[i].TRANGTHAI == 0 )
								{
									TextColor(DoTrang);
									gotoXY(178,9+i);
									cout<<"KHACH DA TRA HANG";
									TextColor(DenTrang);
								}
								if(vtlcvtth == i)
								{
									TextColor(DenTrang);
								}
							}
								keylcvtth = getch();
								if(keylcvtth == -32)
								{
									keylcvtth = getch();
									if(keylcvtth == 72)//NHAN LEN
									{
										if(vtlcvtth > 0)
										{
											vtlcvtth--;
										}
									}
									else if(keylcvtth == 80)//NHAN XUONG
									{
										if(vtlcvtth < (HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.slvthd-1))
										{
											vtlcvtth++;
										}
									}
									else if(keylcvtth == 75)//QUA TRAI
									{
										chontrahanghoadon:
										XoaHuongDanSuDungTraHang3(doronghuongdan);	
										HuongDanSuDungTraHang4(doronghuongdan);
										Vitrikhoitaoth2 = 1;
										MenuTraHang(Vitrikhoitaoth2);
										if(Vitrikhoitaoth2 == 1)//NHAN TRA HANG
										{
											if(HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[vtlcvtth].TRANGTHAI == 1)
											{
												HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[vtlcvtth].TRANGTHAI = 2;//DAT 2 LA TRANG THAI TAM THOI CUA KHACH DA TRA HANG
												TextColor(TrangDoNhat);
												gotoXY(178,9+vtlcvtth);
												cout<<"KHACH DA TRA HANG";
											}
											else if(HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[vtlcvtth].TRANGTHAI == 2)
											{
												TextColor(TrangDoNhat);
												for(int i=0; i<=3; i++)
												{
													gotoXY(7,32+i);
													cout<<"                           ";
												}	
												gotoXY(11,33);
												cout<<"TRANG THAI DANG LA";
												gotoXY(11,34);
												cout<<"KHACH DA TRA HANG";
												getch();
												TextColor(TrangXoa);
												for(int i=0; i<=3; i++)
												{
													gotoXY(7,32+i);
													cout<<"                           ";
												}
											}
											else if(HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[vtlcvtth].TRANGTHAI == 0)
											{
												TextColor(TrangDoNhat);
												for(int i=0; i<=3; i++)
												{
													gotoXY(7,32+i);
													cout<<"                           ";
												}	
												gotoXY(10,33);
												cout<<"HANG DA DUOC";
												gotoXY(10,34);
												cout<<"TRA TRUOC DO";
												getch();
												TextColor(TrangXoa);
												for(int i=0; i<=3; i++)
												{
													gotoXY(7,32+i);
													cout<<"                           ";
												}
											}
											//NGAY TAI VI TRI TRANG THAI DO IN RA "KHACH DA TRA HANG"
											//===== QUAY VE TRANG THAI BAN DAU CUA NUT NHAN =======
											TextColor(TrangBac);
											for(int i=6; i<=10; i++)
											{
												gotoXY(9,i);
												cout<<"                       ";
											}
											gotoXY(17,8);
											cout<<"TRA HANG";
											XoaHuongDanSuDungTraHang4(doronghuongdan);
											goto luachonvattutrahang;
										}
										else if(Vitrikhoitaoth2 == 2)//NHAN HOAN TAC
										{
											if(HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[vtlcvtth].TRANGTHAI == 2)
											{
												HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[vtlcvtth].TRANGTHAI = 1;
												TextColor(TrangXoa);
												gotoXY(178,9+vtlcvtth);
												cout<<"KHACH DA TRA HANG";
												TextColor(TrangDoNhat);
												gotoXY(178,9+vtlcvtth);
												cout<<"KHACH MUA";
											}
											else if(HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[vtlcvtth].TRANGTHAI == 1)
											{
												TextColor(TrangDoNhat);
												for(int i=0; i<=3; i++)
												{
													gotoXY(7,32+i);
													cout<<"                           ";
												}	
												gotoXY(11,33);
												cout<<"TRANG THAI DANG LA";
												gotoXY(14,34);
												cout<<"KHACH MUA";
												getch();
												TextColor(TrangXoa);
												for(int i=0; i<=3; i++)
												{
													gotoXY(7,32+i);
													cout<<"                           ";
												}
											}
											else if(HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[vtlcvtth].TRANGTHAI == 0)
											{
												for(int i=0; i<=3; i++)
												{
													gotoXY(7,32+i);
													cout<<"                           ";
												}	
												gotoXY(13,33);
												cout<<"HANG DA DUOC";
												gotoXY(13,34);
												cout<<"TRA TRUOC DO";
												getch();
												TextColor(TrangXoa);
												for(int i=0; i<=3; i++)
												{
													gotoXY(7,32+i);
													cout<<"                           ";
												}
											}
											
											TextColor(TrangBac);
											for(int i=12; i<=16; i++)
											{
												gotoXY(9,i);
												cout<<"                       ";
											}
											gotoXY(17,14);
											cout<<"HOAN TAC";
											XoaHuongDanSuDungTraHang4(doronghuongdan);
											goto luachonvattutrahang;
										}
										else if(Vitrikhoitaoth2 == 3)//BO CHON
										{
											TextColor(TrangBac);
											for(int i=18; i<=22; i++)
											{
												gotoXY(9,i);
												cout<<"                       ";
											}
											gotoXY(17,20);
											cout<<"BO CHON";
											XoaHuongDanSuDungTraHang4(doronghuongdan);
											goto luachonvattutrahang;
										}
										else if(Vitrikhoitaoth2 == 4)//NHAN LUU HOA DON TRA HANG
										{
											for(int j=0; j<HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.slvthd; j++)
											{
												if(HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[j].TRANGTHAI == 2)
												{
													TraVatTuVeKho(t,HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[j].MAVT,HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[j].SLVT);
													HoaDonTam[vthdht]->Data.ds_chi_tiet_hd.ds[j].TRANGTHAI = 0;
												}
											}
											Vitrikhoitao = 0;
											goto chucnangtrahang;
										}
									}
								}
								else if(keylcvtth == 13)//ENTER
								{
									goto chontrahanghoadon;
								}
							}
						}
					}
					else if(Vitrikhoitao == 2)//BO CHON
					{
						XoaHuongDanSuDungTraHang2(doronghuongdan);
						Vitrikhoitao = 0;
						MenuChucNangTraHang(Vitrikhoitao);
						TextColor(DenTrang);
						goto chonhoadontrahang;
					}
					else if(Vitrikhoitao == 3)//RA GIAO DIEN CHINH
					{
						return;
					}
				}
				
			}
			else if(keykitu == 13)//NEU LA PHIM ENTER
				{
					goto luachonchucnangtrahang;
				}
  		}
}


void XoaDuLieuDanhSacVatTu()
{
	TextColor(TrangXoa);
		for(int i=0; i<=10; i++)
	{
		
		gotoXY(55,1+i);
		cout<<"  ";
		gotoXY(55,12+i);
		cout<<"  ";
		gotoXY(55,22+i);
		cout<<"  ";
		gotoXY(55,32+i);
		cout<<"  ";
	}
	
	//THANH 3
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(91,5+i);
		cout<<"  ";
		gotoXY(91,12+i);
		cout<<"  ";
		gotoXY(91,22+i);
		cout<<"  ";
		gotoXY(91,32+i);
		cout<<"  ";
	}
	
		//THANH 4
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(91,5+i);
		cout<<"  ";
		gotoXY(91,12+i);
		cout<<"  ";
		gotoXY(91,22+i);
		cout<<"  ";
		gotoXY(91,32+i);
		cout<<"  ";
	}
	
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(130,5+i);
		cout<<"  ";
		gotoXY(130,12+i);
		cout<<"  ";
		gotoXY(130,22+i);
		cout<<"  ";
		gotoXY(130,32+i);
		cout<<"  ";
	}
	
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(160,5+i);
		cout<<"  ";
		gotoXY(160,12+i);
		cout<<"  ";
		gotoXY(160,22+i);
		cout<<"  ";
		gotoXY(160,32+i);
		cout<<"  ";
	}
}


void XoaDuLieuDanhSachHoaDon(int dem)
{
	//XOA DU LIEU
	XoaDuLieuChonHoaDonTraHang(dem);
	
	//XOA KHUNG
	gotoXY(64,2);
	cout<<"TIM KIEM : ";
	gotoXY(70,6);
	cout<<"SO HD";
	gotoXY(108,6);
	cout<<"NGAY LAP";
	gotoXY(143,6);
	cout<<"LOAI";
	gotoXY(170,6);
	cout<<"TONG TRI GIA";
	

		//THANH NGANG BETWEEN TREN
//		gotoXY(2,4);
//		cout<<"                                                     ";
//			
//
//		gotoXY(2,37);
//		cout<<"                                                     ";
//		
		//THANH 3
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(91,5+i);
		cout<<"  ";
		gotoXY(91,12+i);
		cout<<"  ";
		gotoXY(91,22+i);
		cout<<"  ";
		gotoXY(91,32+i);
		cout<<"  ";
	}

	
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(130,5+i);
		cout<<"  ";
		gotoXY(130,12+i);
		cout<<"  ";
		gotoXY(130,22+i);
		cout<<"  ";
		gotoXY(130,32+i);
		cout<<"  ";
	}
	
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(160,5+i);
		cout<<"  ";
		gotoXY(160,12+i);
		cout<<"  ";
		gotoXY(160,22+i);
		cout<<"  ";
		gotoXY(160,32+i);
		cout<<"  ";
	}
}

void MenuInHoaDon(int &Vitri)
{
	char key_press;
	int color;
	while(1)
	{
		color = TrangBac;
		if(Vitri == 1)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=9; i<=13; i++)
		{
			gotoXY(17,i);
			cout<<"                       ";
		}
		gotoXY(24,11);
		cout<<"IN HOA DON";
		color = TrangBac;
		
		
		if(Vitri == 2)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=18; i<=22; i++)
		{
			gotoXY(17,i);
			cout<<"                       ";
		}
		gotoXY(25,20);
		cout<<"BO CHON";
		color = TrangBac;
		
		
		if(Vitri == 3)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=28; i<=32; i++)
		{
			gotoXY(17,i);
			cout<<"                       ";
		}
		gotoXY(19,30);
		cout<<"RA GIAO DIEN CHINH";
		color = 159;
		
		if(Vitri !=0 )
		{
						key_press=getch();
			if(key_press == -32)
			{
						key_press = getch();
						
				
						if(key_press == 72)//LEN
				        {
				        	if(Vitri == 1)
				        	{
				        		Vitri=3;
							}
							else if(Vitri != 1)
				        	{
				        		Vitri--;
							}
						
						}
						else if(key_press == 80)//XUONG
						{
							if(Vitri == 3)
				        	{
				        		Vitri=1;
							}
							else if(Vitri != 3)
				        	{
				        		Vitri++;
							}
						}
			}
	       
			else if(key_press == 13)
			{
				break;
			}
		}
		else if(Vitri == 0)
		{
			break;
		}
	}
}


void XoaMenuChucNangInHoaDon()
{
	TextColor(TrangXoa);
	for(int i=9; i<=13; i++)
		{
			gotoXY(17,i);
			cout<<"                       ";
		}
	for(int i=18; i<=22; i++)
		{
			gotoXY(17,i);
			cout<<"                       ";
		}
	
	for(int i=28; i<=32; i++)
		{
			gotoXY(17,i);
			cout<<"                       ";
		}
}

void MenuInCTHD(int &Vitri)
{
	char key_press;
	int color;
	while(1)
	{
		color = TrangBac;
		if(Vitri == 1)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=12; i<=16; i++)
		{
			gotoXY(12,i);
			cout<<"                       ";
		}
		gotoXY(21,14);
		cout<<"THOAT";
		color = TrangBac;
		
		if(Vitri == 2)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=25; i<=29; i++)
		{
			gotoXY(12,i);
			cout<<"                       ";
		}
		gotoXY(14,27);
		cout<<"RA GIAO DIEN CHINH";
		color = TrangBac;
		
		if(Vitri !=0 )
		{
						key_press=getch();
			if(key_press == -32)
			{
						key_press = getch();
						
				
						if(key_press == 72)//LEN
				        {
				        	if(Vitri == 1)
				        	{
				        		Vitri=2;
							}
							else if(Vitri == 2)
				        	{
				        		Vitri=1;
							}
						
						}
						else if(key_press == 80)//XUONG
						{
							if(Vitri == 1)
				        	{
				        		Vitri=2;
							}
							else if(Vitri == 2)
				        	{
				        		Vitri=1;
							}
						}
			}
	       
			else if(key_press == 13)
			{
				break;
			}
		}
		else if(Vitri == 0)
		{
			break;
		}
	}
}



void TaoKhungInHoaDon()
{
	system("cls");
	system("color f0");
	TextColor(TrangDo);
	gotoXY(15,2);
	cout<<"CHUC NANG CHUONG TRINH ";
	gotoXY(70,6);
	cout<<"SO HD";
	gotoXY(108,6);
	cout<<"NGAY LAP";
	gotoXY(143,6);
	cout<<"LOAI";
	gotoXY(170,6);
	cout<<"TONG TRI GIA";
	TextColor(DoTrang);
	gotoXY(64,2);
	cout<<"TIM KIEM : ";
	TextColor(TrangXanhLa);
	
	//==THANH NGANG TOP
	
		gotoXY(0,0);
		cout<<"                                                                                                     ";
		gotoXY(101,0);
		cout<<"                                                                                                     ";
		//THANH NGANG BETWEEN TREN
		gotoXY(0,4);
		cout<<"                                                                                                     ";
		gotoXY(101,4);
		cout<<"                                                                                                     ";
			
		//THANH NGANG BETWEEN DUOI
		gotoXY(57,8);
		cout<<"                                                                 ";
		gotoXY(122,8);
		cout<<"                                                                              ";
		
		//THANH NGANG CHUC NANG
		gotoXY(2,37);
		cout<<"                                                      ";
		//THANH NGANG DOWN	 
		gotoXY(0,43);
		cout<<"                                                                                                     ";
		gotoXY(101,43);
		cout<<"                                                                                                     ";
		
		//THANH DOC
	//THANH 1
	for(int i=0; i<=10; i++)
	{
		gotoXY(0,i+1);
		cout<<"  ";
		gotoXY(0,12+i);
		cout<<"  ";
		gotoXY(0,22+i);
		cout<<"  ";
		gotoXY(0,32+i);
		cout<<"  ";
	}
//	THANH 2
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(55,1+i);
		cout<<"  ";
		gotoXY(55,12+i);
		cout<<"  ";
		gotoXY(55,22+i);
		cout<<"  ";
		gotoXY(55,32+i);
		cout<<"  ";
	}
	
	//THANH 3
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(91,5+i);
		cout<<"  ";
		gotoXY(91,12+i);
		cout<<"  ";
		gotoXY(91,22+i);
		cout<<"  ";
		gotoXY(91,32+i);
		cout<<"  ";
	}

	
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(130,5+i);
		cout<<"  ";
		gotoXY(130,12+i);
		cout<<"  ";
		gotoXY(130,22+i);
		cout<<"  ";
		gotoXY(130,32+i);
		cout<<"  ";
	}
	
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(160,5+i);
		cout<<"  ";
		gotoXY(160,12+i);
		cout<<"  ";
		gotoXY(160,22+i);
		cout<<"  ";
		gotoXY(160,32+i);
		cout<<"  ";
	}
	
	//THANH 3
	for(int i=0; i<=10; i++)
	{
		gotoXY(200,1+i);
		cout<<"  ";
		gotoXY(200,12+i);
		cout<<"  ";
		gotoXY(200,22+i);
		cout<<"  ";
		gotoXY(200,32+i);
		cout<<"  ";
	}
}

void XoaKhungInHoaDon()
{
	TextColor(TrangXoa);
	gotoXY(15,2);
	cout<<"CHUC NANG CHUONG TRINH ";
	gotoXY(64,2);
	cout<<"TIM KIEM : ";
	gotoXY(70,6);
	cout<<"SO HD";
	gotoXY(108,6);
	cout<<"NGAY LAP";
	gotoXY(143,6);
	cout<<"LOAI";
	gotoXY(170,6);
	cout<<"TONG TRI GIA";
	
	//XOA KHUNG NGANG DUOI CHUC NANG
	gotoXY(46,37);
	cout<<"         ";
	
	
	//THANH 2
	//XOA 1 PHAN
	gotoXY(55,1);
		cout<<"  ";
	gotoXY(55,2);
		cout<<"  ";
	gotoXY(55,3);
		cout<<"  ";	
	
	
	for(int i=0; i<=12; i++)
	{
		
		gotoXY(55,30+i);
		cout<<"  ";
	}
		//THANH 3
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(91,5+i);
		cout<<"  ";
		gotoXY(91,12+i);
		cout<<"  ";
		gotoXY(91,22+i);
		cout<<"  ";
		gotoXY(91,32+i);
		cout<<"  ";
	}

	//THANH 4
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(130,5+i);
		cout<<"  ";
		gotoXY(130,12+i);
		cout<<"  ";
		gotoXY(130,22+i);
		cout<<"  ";
		gotoXY(130,32+i);
		cout<<"  ";
	}
	
	//THANH 5
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(160,5+i);
		cout<<"  ";
		gotoXY(160,12+i);
		cout<<"  ";
		gotoXY(160,22+i);
		cout<<"  ";
		gotoXY(160,32+i);
		cout<<"  ";
	}
}



void InHoaDon(TREE_VAT_TU t,DS_NHAN_VIEN dsnv,int TONGSOHOADON)
{
	int doronghuongdan = 39;
	int vthighlight,vtbatdau,vtketthuc,oldplace,SoLuongSoSanh=TONGSOHOADON;
	string ChuoiSearch;
	int x,y;
	int dorong;
//	int f;
	char keykitu;
	int sokytudanhap =0;
	int ViTriKhoiTao = 0;
	int vtnvlhd;
	NODE_HOA_DON* p=NULL;
	NODE_HOA_DON* k=NULL;
	InDanhSachHoaDon:
	p=NULL;
	k=NULL;
	x = 74,y=2;
	sokytudanhap =0;
	TaoKhungInHoaDon();
	dorong = 20;	
	MenuInHoaDon(ViTriKhoiTao);
//	p = InDanhSachHoaDonTK(dsnv,vthighlight,SoLuongSoSanh,ChuoiSearch);
	
	vthighlight = 0,vtbatdau = 0,oldplace = 9;
	if(TONGSOHOADON <= 34)
	{
		vtketthuc = TONGSOHOADON;
	}
	else if(TONGSOHOADON > 34)
	{
		vtketthuc = 34;
	}
	
//	f=0;
	TextColor(DenTrang);
	for(int i=0,j=0; i<dsnv.slnv; i++)
		{
			p = dsnv.nv[i]->pHead;
		while(p!=NULL)
			{
				if(j>=vtbatdau && j<vtketthuc)
				{
					if(j == vthighlight)
					{
						TextColor(TrangDoNhat);
						k = p;
						vtnvlhd = i;
					}	
						gotoXY(68,oldplace+j);
						cout<<p->Data.SOHD;
						gotoXY(107,oldplace+j);	
						cout<<p->Data.NgayLap.day<<"/"<<p->Data.NgayLap.month<<"/"<<p->Data.NgayLap.year;
						gotoXY(145,oldplace+j);	
						cout<<p->Data.LOAI;
						gotoXY(170,oldplace+j);	
						cout<<size_t(p->Data.TONGTRIGIA);
					
					if(j == vthighlight)
					{
						TextColor(DenTrang);
					}
				}
				j++;
				p = p->pNext;
			}
		}
	
	
	TimKiemHoaDonIn:
	
		while(1)
		{
			HuongDanSuDungTraHang1(doronghuongdan);
			ShowConsoleCursor(true);
			gotoXY(x,2);
			keykitu = getch();//Bat phim khi nhan mot phim bat ki
			if(keykitu == 8)//Kiem neu la phim nhan la backspace thi se lui nguoc con tro lai va bien ki tu vua nhap vao la khoang trang
			{
				TextColor(DenTrang);
				if(sokytudanhap!=0)
				{
					gotoXY(x,y);
					keykitu = 32;//gan ki tu vua nhap vao thanh khoang trang
					cout<<"\b";//Lenh lui nguoc con tro chi vi
					cout<<keykitu;//cout ra ki tu khoang trang
					cout<<"\b";
					sokytudanhap--;//lui lai 1 don vi
					ChuoiSearch.erase(sokytudanhap,1);
					x--;
					vthighlight = 0;
					vtbatdau = 0;
					oldplace = 9;
					//XOA DU LIEU CU
					TextColor(TrangXoa);
					for(int i=vtbatdau; i<vtketthuc;i++)
					{
							gotoXY(68,oldplace+i);
							cout<<"                    ";
							gotoXY(107,oldplace+i);	
							cout<<"          ";
							gotoXY(145,oldplace+i);		
							cout<<" ";
							gotoXY(170,oldplace+i);	
							cout<<"               ";
					}
					TextColor(DenTrang);
					
//					t=0;
					if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
					{
						if(TONGSOHOADON <= 34)
						{
							vtketthuc = TONGSOHOADON;
						}
						else if(TONGSOHOADON > 34)
						{
							vtketthuc = 34;
						}
						
						for(int i=0,j=0; i<dsnv.slnv; i++)
						{
							p = dsnv.nv[i]->pHead;
						while(p!=NULL)
							{
								if(j>=vtbatdau && j<vtketthuc)
								{
									if(j == vthighlight)
									{
										TextColor(TrangDoNhat);
										k = p;
										vtnvlhd = i;
									}	
										gotoXY(68,oldplace+j);
										cout<<p->Data.SOHD;
										gotoXY(107,oldplace+j);	
										cout<<p->Data.NgayLap.day<<"/"<<p->Data.NgayLap.month<<"/"<<p->Data.NgayLap.year;
										gotoXY(145,oldplace+j);	
										cout<<p->Data.LOAI;
										gotoXY(170,oldplace+j);	
										cout<<size_t(p->Data.TONGTRIGIA);
									
									if(j == vthighlight)
									{
										TextColor(DenTrang);
									}
									
								}
								j++;
								p = p->pNext;
							}
						}
							SoLuongSoSanh = TONGSOHOADON;
					}
					else if(ChuoiSearch != "")
					{
						vtketthuc = 0;
						SoLuongSoSanh = 0;
						for(int i=0,j=0; i<dsnv.slnv; i++)
						{
							p = dsnv.nv[i]->pHead;
							while(p!=NULL)
							{
								if(p->Data.SOHD.find(ChuoiSearch) != -1)
								{
									if(j < 34)
									{
										if(j == vthighlight)
										{
											TextColor(TrangDoNhat);
											k = p;
										}
											gotoXY(68,oldplace+j);
											cout<<p->Data.SOHD;
											gotoXY(107,oldplace+j);	
											cout<<p->Data.NgayLap.day<<"/"<<p->Data.NgayLap.month<<"/"<<p->Data.NgayLap.year;
											gotoXY(145,oldplace+j);	
											cout<<p->Data.LOAI;
											gotoXY(170,oldplace+j);	
											cout<<size_t(p->Data.TONGTRIGIA);		
										if(j == vthighlight)
										{
											TextColor(DenTrang);
										}
										vtketthuc++;
									}
								j++;
								SoLuongSoSanh++;
								}
								
								p = p->pNext;
							}
						}
					}
				}
			}

			//Neu phim nhan khong phai la backspace thi in ra ki tu do
			else if((keykitu >=97 && keykitu<=122 || keykitu>=65 && keykitu<=90  || keykitu>=48 && keykitu<=57 || keykitu == 95 ) && sokytudanhap<dorong)
			{
				TextColor(TrangXoa);
					for(int i=vtbatdau; i<vtketthuc;i++)
					{
							gotoXY(68,oldplace+i);
							cout<<"                    ";
							gotoXY(107,oldplace+i);	
							cout<<"          ";
							gotoXY(145,oldplace+i);		
							cout<<" ";
							gotoXY(170,oldplace+i);	
							cout<<"               ";
					}
				if(keykitu>=97 && keykitu<=122)
				{
					keykitu-=32;
				}
				gotoXY(x,y);
				TextColor(DenTrang);
				cout<<keykitu;
				ChuoiSearch+=keykitu;
				sokytudanhap++;//tang len 1 don vi
				x++;
//				XoaDuLieuChonHoaDonTraHang(dem);
				vthighlight = 0;
				vtbatdau=0;
				vtketthuc = 0;
				oldplace = 9;
				SoLuongSoSanh = 0;
//				p = InDanhSachHoaDonTK(dsnv,vthighlight,dem,ChuoiSearch);
				for(int i=0,j=0; i<dsnv.slnv; i++)
					{
							p = dsnv.nv[i]->pHead;
							while(p!=NULL)
							{
								if(p->Data.SOHD.find(ChuoiSearch) != -1)
								{
									if(j < 34)
									{
										if(j == vthighlight)
										{
											TextColor(TrangDoNhat);
											k = p;
											vtnvlhd = i;
										}
											gotoXY(68,oldplace+j);
											cout<<p->Data.SOHD;
											gotoXY(107,oldplace+j);	
											cout<<p->Data.NgayLap.day<<"/"<<p->Data.NgayLap.month<<"/"<<p->Data.NgayLap.year;
											gotoXY(145,oldplace+j);	
											cout<<p->Data.LOAI;
											gotoXY(170,oldplace+j);	
											cout<<size_t(p->Data.TONGTRIGIA);		
										if(j == vthighlight)
										{
											TextColor(DenTrang);
										}
										
										vtketthuc++;
									}
										j++;
										SoLuongSoSanh++;
								}
								p = p->pNext;
								
							}
					}
			}
			else if(keykitu == -32)
			{
				keykitu = getch();
				if(keykitu == 72)//NHAN LEN
				{
					if(vthighlight > vtbatdau)
					{
						vthighlight--;
					}
					else if(vthighlight == vtbatdau && vtbatdau > 0)
					{
						TextColor(TrangXoa);
						for(int i=vtbatdau; i<vtketthuc;i++)
						{
									gotoXY(68,oldplace+i);
							cout<<"                    ";
							gotoXY(107,oldplace+i);	
							cout<<"          ";
							gotoXY(145,oldplace+i);		
							cout<<" ";
							gotoXY(170,oldplace+i);	
							cout<<"               ";
						}
						vtbatdau--;
						vtketthuc--;
						vthighlight--;
						oldplace++;
					}
					TextColor(DenTrang);
					if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
					{
						
						for(int i=0,j=0; i<dsnv.slnv; i++)
						{
							p = dsnv.nv[i]->pHead;
						while(p!=NULL)
							{
								if(j>=vtbatdau && j<vtketthuc)
								{
									if(j == vthighlight)
									{
										TextColor(TrangDoNhat);
										k = p;
										vtnvlhd = i;
									}	
										gotoXY(68,oldplace+j);
										cout<<p->Data.SOHD;
										gotoXY(107,oldplace+j);	
										cout<<p->Data.NgayLap.day<<"/"<<p->Data.NgayLap.month<<"/"<<p->Data.NgayLap.year;
										gotoXY(145,oldplace+j);	
										cout<<p->Data.LOAI;
										gotoXY(170,oldplace+j);	
										cout<<size_t(p->Data.TONGTRIGIA);
									
									if(j == vthighlight)
									{
										TextColor(DenTrang);
									}
								
								}
								j++;
								p = p->pNext;
							}
						}
					}
					else if(ChuoiSearch != "")
					{
						for(int i=0,j=0; i<dsnv.slnv; i++)
						{
							p = dsnv.nv[i]->pHead;
							while(p!=NULL)
							{
								if(p->Data.SOHD.find(ChuoiSearch) != -1)
								{
									if(j>=vtbatdau && j<vtketthuc)
									{
									if(j < 34)
									{
										if(j == vthighlight)
										{
											TextColor(TrangDoNhat);
											k = p;
											vtnvlhd = i;
										}
											gotoXY(68,oldplace+j);
											cout<<p->Data.SOHD;
											gotoXY(107,oldplace+j);	
											cout<<p->Data.NgayLap.day<<"/"<<p->Data.NgayLap.month<<"/"<<p->Data.NgayLap.year;
											gotoXY(145,oldplace+j);	
											cout<<p->Data.LOAI;
											gotoXY(170,oldplace+j);	
											cout<<size_t(p->Data.TONGTRIGIA);		
										if(j == vthighlight)
										{
											TextColor(DenTrang);
										}
									}
									}
								j++;
								}
								p = p->pNext;
							}
						}
					}
				}
				else if(keykitu == 80)//NHAN XUONG
				{
					if(vthighlight < vtketthuc-1)
						{
							vthighlight++;
						}
					else if(vthighlight == vtketthuc-1 && vtketthuc <= SoLuongSoSanh-1)
						{
							TextColor(TrangXoa);
							for(int i=vtbatdau; i<vtketthuc;i++)
							{
									gotoXY(68,oldplace+i);
									cout<<"                    ";
									gotoXY(107,oldplace+i);	
									cout<<"          ";
									gotoXY(145,oldplace+i);		
									cout<<" ";
									gotoXY(170,oldplace+i);	
									cout<<"               ";
							}
								vtbatdau++;
								vtketthuc++;
								vthighlight++;
								oldplace--;
						}
					TextColor(DenTrang);
					if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
					{
						for(int i=0,j=0; i<dsnv.slnv; i++)
						{
							p = dsnv.nv[i]->pHead;
							while(p!=NULL)
								{
									if(j>=vtbatdau && j<vtketthuc)
									{
										if(j == vthighlight)
										{
											TextColor(TrangDoNhat);
											k = p;
											vtnvlhd = i;
										}	
											gotoXY(68,oldplace+j);
											cout<<p->Data.SOHD;
											gotoXY(107,oldplace+j);	
											cout<<p->Data.NgayLap.day<<"/"<<p->Data.NgayLap.month<<"/"<<p->Data.NgayLap.year;
											gotoXY(145,oldplace+j);	
											cout<<p->Data.LOAI;
											gotoXY(170,oldplace+j);	
											cout<<size_t(p->Data.TONGTRIGIA);
										if(j == vthighlight)
										{
											TextColor(DenTrang);
										}
									}
									j++;
									p = p->pNext;
								}
						}
					}
					else if(ChuoiSearch != "")
					{
						for(int i=0,j=0; i<dsnv.slnv; i++)
						{
							p = dsnv.nv[i]->pHead;
							while(p!=NULL)
							{
								if(p->Data.SOHD.find(ChuoiSearch) != -1)
								{
									if(j>=vtbatdau && j<vtketthuc)
									{
									if(j < 34)
									{
										if(j == vthighlight)
										{
											TextColor(TrangDoNhat);
											k = p;
											vtnvlhd = i;
										}
											gotoXY(68,oldplace+j);
											cout<<p->Data.SOHD;
											gotoXY(107,oldplace+j);	
											cout<<p->Data.NgayLap.day<<"/"<<p->Data.NgayLap.month<<"/"<<p->Data.NgayLap.year;
											gotoXY(145,oldplace+j);	
											cout<<p->Data.LOAI;
											gotoXY(170,oldplace+j);	
											cout<<size_t(p->Data.TONGTRIGIA);		
										if(j == vthighlight)
										{
											TextColor(DenTrang);
										}
									}
								}
								j++;
								}
								p = p->pNext;
							}
						}
					}
				}
				else if(keykitu == 75)//QUA TRAI
				{
					XoaHuongDanSuDungTraHang1(doronghuongdan);
					HuongDanSuDungInHoaDon1(doronghuongdan);
					ShowConsoleCursor(false);
					nhayquatrai:
					ViTriKhoiTao = 1;
					MenuInHoaDon(ViTriKhoiTao);
					if(ViTriKhoiTao == 1)//IN HOA DON
					{
						//XOA DU LIEU TRONG KHUNG
							TextColor(TrangXoa);
						for(int i=vtbatdau; i<vtketthuc;i++)
						{
								gotoXY(68,oldplace+i);
								cout<<"                    ";
								gotoXY(107,oldplace+i);	
								cout<<"          ";
								gotoXY(145,oldplace+i);		
								cout<<" ";
								gotoXY(170,oldplace+i);	
								cout<<"               ";
						}
						XoaKhungInHoaDon();
						XoaMenuChucNangInHoaDon();
						XoaHuongDanSuDungInHoaDon1(doronghuongdan);
						HuongDanSuDungInHoaDon2(doronghuongdan);
						TextColor(TrangXoa);
						gotoXY(74,2);
						cout<<ChuoiSearch;
						TaoKhungCTHD(k,dsnv,vtnvlhd);
						TextColor(DenTrang);
						int Vitriin = 9;
						int STT=1;
						if(k->Data.LOAI == "X")//HOA DON XUAT (X)
						{
							for(int i=0; i<k->Data.ds_chi_tiet_hd.slvthd; i++)
							{
								if(k->Data.ds_chi_tiet_hd.ds[i].TRANGTHAI != 0)
									{
										gotoXY(49,Vitriin+i);
										cout<<STT;
										gotoXY(59,Vitriin+i);
										cout<<k->Data.ds_chi_tiet_hd.ds[i].MAVT;
										gotoXY(77,Vitriin+i);
										TimKiemVaInTenVatTu(t,k->Data.ds_chi_tiet_hd.ds[i].MAVT);
										gotoXY(126,Vitriin+i);
										cout<<k->Data.ds_chi_tiet_hd.ds[i].SLVT;
										gotoXY(141,Vitriin+i);
										cout<<(size_t)k->Data.ds_chi_tiet_hd.ds[i].DONGIA;
										gotoXY(160,Vitriin+i);
										cout<<k->Data.ds_chi_tiet_hd.ds[i].VAT;
										gotoXY(173,Vitriin+i);
										cout<<(size_t)k->Data.ds_chi_tiet_hd.ds[i].TRIGIA;
									}
								else if(p->Data.ds_chi_tiet_hd.ds[i].TRANGTHAI == 0)//VAT TU DA TRA HANG THI KHONG IN RA NUA
								{
										Vitriin--;
										STT--;
								}
								STT++;	
							}
							TextColor(TrangDo);
							gotoXY(180,33);
							cout<<(size_t)k->Data.TONGTRIGIA;
						}
						else//HOA DON NHAP (N)
						{
							for(int i=0; i<k->Data.ds_chi_tiet_hd.slvthd; i++)
							{
										gotoXY(49,9+i);
										cout<<STT;
										gotoXY(59,9+i);
										cout<<k->Data.ds_chi_tiet_hd.ds[i].MAVT;
										gotoXY(77,9+i);
										TimKiemVaInTenVatTu(t,k->Data.ds_chi_tiet_hd.ds[i].MAVT);
//										cout<<k->Data.ds_chi_tiet_hd.ds[i].TENVT;
										gotoXY(126,9+i);
										cout<<k->Data.ds_chi_tiet_hd.ds[i].SLVT;
										gotoXY(141,9+i);
										cout<<k->Data.ds_chi_tiet_hd.ds[i].DONGIA;
										gotoXY(160,9+i);
										cout<<k->Data.ds_chi_tiet_hd.ds[i].VAT;
										gotoXY(173,9+i);
										cout<<(size_t)k->Data.ds_chi_tiet_hd.ds[i].TRIGIA;
										STT++;
							}
							TextColor(TrangDo);
							gotoXY(180,33);
							cout<<(size_t)k->Data.TONGTRIGIA;
						}
							int ViTriKhoiTaoInCTHD = 1;		
							MenuInCTHD(ViTriKhoiTaoInCTHD);
							if(ViTriKhoiTaoInCTHD == 1)//THOAT
							{
								ChuoiSearch = "";
								ViTriKhoiTao = 0;
								goto InDanhSachHoaDon;
							}	
							else if(ViTriKhoiTaoInCTHD == 2)//RA GIAO DIEN CHINH
							{
								return;
							}
					}
					else if(ViTriKhoiTao == 2)//BO CHON
					{
						ViTriKhoiTao = 0;
						MenuInHoaDon(ViTriKhoiTao);
						goto TimKiemHoaDonIn;
					}
					else if(ViTriKhoiTao == 3)//RA GIAO DIEN CHINH
					{
						return;
					}
				}
		}
				else if(keykitu == 13)
				{
						goto nhayquatrai;
					
				}
			}
}

void MenuLietKeNhanVienLapHoaDon(int &Vitri)
{
	char key_press;
//	Vitri = 1;
	int color;
	while(1)
	{
		color = TrangBac;
		if(Vitri == 1)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=7; i<=11; i++)
		{
			gotoXY(7,i);
			cout<<"                       ";
		}
		gotoXY(11,9);
		cout<<"LIET KE HOA DON";
		color = TrangBac;
		
		
		if(Vitri == 2)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=14; i<=18; i++)
		{
			gotoXY(7,i);
			cout<<"                       ";
		}
		gotoXY(15,16);
		cout<<"BO CHON";
		color = TrangBac;
		
		if(Vitri == 3)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=21; i<=25; i++)
		{
			gotoXY(7,i);
			cout<<"                       ";
		}
		gotoXY(9,23);
		cout<<"RA GIAO DIEN CHINH";
		color = TrangBac;	
		
		if(Vitri != 0)
		{
			key_press=getch();
			if(key_press == -32)
			{
						key_press = getch();
						//NHAN LEN
						if(key_press == 72)
						{
							if(Vitri == 1 )
							{
								Vitri = 3;
							}
							else if(Vitri != 1)
							{
								Vitri--;
							}
						}
						//NHAN XUONG
						else if(key_press == 80)
						{
							if(Vitri == 3)
							{
								Vitri = 1;
							}
							else if(Vitri != 3)
							{
								Vitri++;
							}
						}
			}
	       
			else if(key_press == 13)
			{
				break;
			}
		}
			else if(Vitri == 0)
			{
				break;
			}
	}
}

void XoaDuLieuTimNhanVienLapHoaDon(int dem)
{
	for(int i=0; i<dem; i++)
	{
		gotoXY(44,9+i);
		cout<<"          ";
		gotoXY(72,9+i);
		cout<<"                         ";
		gotoXY(116,9+i);
		cout<<"          ";
		gotoXY(143,9+i);
		cout<<"   ";
		gotoXY(174,9+i);
		cout<<"         ";
	}
	
}




int InDanhSachNhanVienTK(DS_NHAN_VIEN dsnv, int vitrihighlight,int &dem,string MANVTK)
{
	int vitrinvhl=0;
	dem=0;
	TextColor(DenTrang);
	if(MANVTK == "")
	{
		for(int i=0; i<dsnv.slnv; i++)
	 	{
			if(vitrihighlight == dem)
				{
					TextColor(XanhTrang);
					vitrinvhl = i;
				}
			gotoXY(44,9+i);
			cout<<dsnv.nv[i]->MANV;
			gotoXY(72,9+i);
			cout<<dsnv.nv[i]->HO;
			gotoXY(116,9+i);
			cout<<dsnv.nv[i]->TEN;
			gotoXY(143,9+i);
			cout<<dsnv.nv[i]->PHAI;
			gotoXY(174,9+i);
			cout<<dsnv.nv[i]->CMND;
			if(vitrihighlight == dem)
				{
					TextColor(DenTrang);
				}
			dem++;
			if(dem == 34)
			{
				return vitrinvhl;
			}
	 	}
	}
	else
	{
		for(int i=0; i<dsnv.slnv; i++)
	 	{
	 		if(ChuyenSoThanhChuoi(dsnv.nv[i]->MANV).find(MANVTK) != -1 )
	 		{
	 			if(vitrihighlight == dem)
				{
					TextColor(XanhTrang);
					vitrinvhl = i;
				}
				gotoXY(44,9+dem);
				cout<<dsnv.nv[i]->MANV;
				gotoXY(72,9+dem);
				cout<<dsnv.nv[i]->HO;
				gotoXY(116,9+dem);
				cout<<dsnv.nv[i]->TEN;
				gotoXY(143,9+dem);
				cout<<dsnv.nv[i]->PHAI;
				gotoXY(174,9+dem);
				cout<<dsnv.nv[i]->CMND;
				if(vitrihighlight == dem)
				{
					TextColor(DenTrang);
				}
				dem++;
				if(dem == 34)
				{
					return vitrinvhl;
				}
			}
	 	}
	}
	return vitrinvhl;
}



void XoaKhungTimKiemNhanVienLapHoaDon()
{
	//XOA ITEM
	TextColor(TrangXoa);
	gotoXY(50,2);
	cout<<"NHAP MA NV :            ";
	
	gotoXY(45,6);
	cout<<"MA NV";
	gotoXY(83,6);
	cout<<"HO";
	gotoXY(117,6);
	cout<<"TEN";
	gotoXY(143,6);
	cout<<"PHAI";
	gotoXY(176,6);
	cout<<"CMND";
	//THANH 3
	for(int i=0; i<=10; i++)
	{
		gotoXY(60,5+i);
		cout<<"  ";
		gotoXY(60,12+i);
		cout<<"  ";
		gotoXY(60,22+i);
		cout<<"  ";
		gotoXY(60,32+i);
		cout<<"  ";
	}
	
		//THANH 4
	for(int i=0; i<=10; i++)
	{
		gotoXY(105,5+i);
		cout<<"  ";
		gotoXY(105,12+i);
		cout<<"  ";
		gotoXY(105,22+i);
		cout<<"  ";
		gotoXY(105,32+i);
		cout<<"  ";
	}
		//THANH 5
	for(int i=0; i<=10; i++)
	{
		gotoXY(132,5+i);
		cout<<"  ";
		gotoXY(132,12+i);
		cout<<"  ";
		gotoXY(132,22+i);
		cout<<"  ";
		gotoXY(132,32+i);
		cout<<"  ";
	}
		//THANH 6
	for(int i=0; i<=10; i++)
	{
		gotoXY(158,5+i);
		cout<<"  ";
		gotoXY(158,12+i);
		cout<<"  ";
		gotoXY(158,22+i);
		cout<<"  ";
		gotoXY(158,32+i);
		cout<<"  ";
	}
	
	//XOA MENU
		for(int i=7; i<=11; i++)
		{
			gotoXY(7,i);
			cout<<"                       ";
		}
	
		for(int i=14; i<=18; i++)
		{
			gotoXY(7,i);
			cout<<"                       ";
		}
	
		
	
		for(int i=21; i<=25; i++)
		{
			gotoXY(7,i);
			cout<<"                       ";
		}
}

void TaoKhungInHoaDonNV()
{
	TextColor(DoTrang);
	gotoXY(50,2);
	cout<<"NHAN VIEN : ";
	TextColor(TrangDo);
	gotoXY(41,6);
	cout<<"SOHD";
	gotoXY(52,6);
	cout<<"NGAY LAP";
	gotoXY(64,6);
	cout<<"LOAI";
	gotoXY(75,6);
	cout<<"MA VT";
	gotoXY(108,6);
	cout<<"TEN VT";
	gotoXY(144,6);
	cout<<"SO LUONG";
	gotoXY(160,6);
	cout<<"DON GIA";
	gotoXY(161,7);
	cout<<"(VND)";
	gotoXY(173,6);
	cout<<"VAT";
	gotoXY(173,7);
	cout<<"(%)";
	gotoXY(183,6);
	cout<<"TRI GIA (VND)";
	
	TextColor(TrangXanhLa);
		//THANH NGANG BETWEEN DUOI
		gotoXY(37,8);
		cout<<"                                                                                     ";
		gotoXY(122,8);
		cout<<"                                                                              ";
	for(int i=0; i<=10; i++)
	{
		gotoXY(48,5+i);
		cout<<"  ";
		gotoXY(48,12+i);
		cout<<"  ";
		gotoXY(48,22+i);
		cout<<"  ";
		gotoXY(48,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		gotoXY(61,5+i);
		cout<<"  ";
		gotoXY(61,12+i);
		cout<<"  ";
		gotoXY(61,22+i);
		cout<<"  ";
		gotoXY(61,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		gotoXY(69,5+i);
		cout<<"  ";
		gotoXY(69,12+i);
		cout<<"  ";
		gotoXY(69,22+i);
		cout<<"  ";
		gotoXY(69,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		gotoXY(84,5+i);
		cout<<"  ";
		gotoXY(84,12+i);
		cout<<"  ";
		gotoXY(84,22+i);
		cout<<"  ";
		gotoXY(84,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		gotoXY(139,5+i);
		cout<<"  ";
		gotoXY(139,12+i);
		cout<<"  ";
		gotoXY(139,22+i);
		cout<<"  ";
		gotoXY(139,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		gotoXY(154,5+i);
		cout<<"  ";
		gotoXY(154,12+i);
		cout<<"  ";
		gotoXY(154,22+i);
		cout<<"  ";
		gotoXY(154,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		gotoXY(170,5+i);
		cout<<"  ";
		gotoXY(170,12+i);
		cout<<"  ";
		gotoXY(170,22+i);
		cout<<"  ";
		gotoXY(170,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		gotoXY(177,5+i);
		cout<<"  ";
		gotoXY(177,12+i);
		cout<<"  ";
		gotoXY(177,22+i);
		cout<<"  ";
		gotoXY(177,32+i);
		cout<<"  ";
	}
}


void XoaMenuLietKeHoaDon()
{
	TextColor(TrangXoa);
		for(int i=7; i<=11; i++)
		{
			gotoXY(7,i);
			cout<<"                       ";
		}
	
		for(int i=21; i<=25; i++)
		{
			gotoXY(7,i);
			cout<<"                       ";
		}
}


void XoaKhungInHoaDonNV(NHAN_VIEN* nv,TG tgbd,TG tgkt)
{
	TextColor(TrangXoa);
	gotoXY(50,2);
	cout<<"NHAN VIEN :                               ";
	gotoXY(41,6);
	cout<<"SOHD";
	gotoXY(52,6);
	cout<<"NGAY LAP";
	gotoXY(64,6);
	cout<<"LOAI";
	gotoXY(75,6);
	cout<<"MA VT";
	gotoXY(108,6);
	cout<<"TEN VT";
	gotoXY(144,6);
	cout<<"SO LUONG";
	gotoXY(160,6);
	cout<<"DON GIA";
	gotoXY(161,7);
	cout<<"(VND)";
	gotoXY(173,6);
	cout<<"VAT";
	gotoXY(173,7);
	cout<<"(%)";
	gotoXY(183,6);
	cout<<"TRI GIA (VND)";
	
	//XOA THOI GIAN
	gotoXY(110,2);
	cout<<"  ";
	gotoXY(114,2);
	cout<<"  ";
	gotoXY(118,2);
	cout<<"    ";
	gotoXY(156,2);
	cout<<"  ";
	gotoXY(160,2);
	cout<<"  ";
	gotoXY(164,2);
	cout<<"    ";
	
	
	
	
	
		//THANH NGANG BETWEEN DUOI
		gotoXY(37,8);
		cout<<"                                                                                     ";
		gotoXY(122,8);
		cout<<"                                                                              ";
	for(int i=0; i<=10; i++)
	{
		gotoXY(48,5+i);
		cout<<"  ";
		gotoXY(48,12+i);
		cout<<"  ";
		gotoXY(48,22+i);
		cout<<"  ";
		gotoXY(48,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		gotoXY(61,5+i);
		cout<<"  ";
		gotoXY(61,12+i);
		cout<<"  ";
		gotoXY(61,22+i);
		cout<<"  ";
		gotoXY(61,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		gotoXY(69,5+i);
		cout<<"  ";
		gotoXY(69,12+i);
		cout<<"  ";
		gotoXY(69,22+i);
		cout<<"  ";
		gotoXY(69,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		gotoXY(84,5+i);
		cout<<"  ";
		gotoXY(84,12+i);
		cout<<"  ";
		gotoXY(84,22+i);
		cout<<"  ";
		gotoXY(84,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		gotoXY(139,5+i);
		cout<<"  ";
		gotoXY(139,12+i);
		cout<<"  ";
		gotoXY(139,22+i);
		cout<<"  ";
		gotoXY(139,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		gotoXY(154,5+i);
		cout<<"  ";
		gotoXY(154,12+i);
		cout<<"  ";
		gotoXY(154,22+i);
		cout<<"  ";
		gotoXY(154,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		gotoXY(170,5+i);
		cout<<"  ";
		gotoXY(170,12+i);
		cout<<"  ";
		gotoXY(170,22+i);
		cout<<"  ";
		gotoXY(170,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		gotoXY(177,5+i);
		cout<<"  ";
		gotoXY(177,12+i);
		cout<<"  ";
		gotoXY(177,22+i);
		cout<<"  ";
		gotoXY(177,32+i);
		cout<<"  ";
	}
	
	int dem=0;
	//XOA DU LIEU
	NODE_HOA_DON* p;
	p = nv->pHead;
		while(p!=NULL)
		{
			if(KTThoiGianTrongKhoangThoiGian(p->Data.NgayLap,tgbd,tgkt) == true)
			{
				gotoXY(38,9+dem);//SOHD
				cout<<"          ";	
				gotoXY(51,9+dem);//NGAY LAP	
				cout<<"          ";
				gotoXY(65,9+dem);//LOAI	
				cout<<" ";
				for(int i=0; i<p->Data.ds_chi_tiet_hd.slvthd; i++)
				{
						gotoXY(72,9+dem+i);//MA VT
						cout<<"          ";
						gotoXY(87,9+dem+i);
						cout<<"                                                  ";//TEN VT
						gotoXY(143,9+dem+i);//SLVT
						cout<<"          ";
						gotoXY(158,9+dem+i);//DON GIA
						cout<<"          ";
						gotoXY(173,9+dem+i);//VAT
						cout<<"   ";
						gotoXY(181,9+dem+i);//TRI GIA
						cout<<"               ";
				}
				dem+=p->Data.ds_chi_tiet_hd.slvthd+1;
			}
				p = p->pNext;
		}
	
	
	//XOA MENU
	XoaMenuLietKeHoaDon();
}

bool KTThoiGianTrongKhoangThoiGian(Date tgtest,TG tgbd,TG tgkt)
{
	//SO SANH VS THOI GIAN BAT DAU
	if(tgtest.year < atoi(tgbd.year.c_str()))
	{
		return false;
	}
	else if(tgtest.year == atoi(tgbd.year.c_str()))
	{
		if(tgtest.month < atoi(tgbd.month.c_str()))
		{
			return false;
		}
		else if(tgtest.month == atoi(tgbd.month.c_str()))
		{
			if(tgtest.day < atoi(tgbd.day.c_str()))
			{
				return false;
			}
		}
	}
	//SO SANH VS THOI GIAN KET THUC
	if(tgtest.year > atoi(tgkt.year.c_str()))
	{
		return false;
	}
	else if(tgtest.year == atoi(tgkt.year.c_str()))
	{
		if(tgtest.month > atoi(tgkt.month.c_str()))
		{
			return false;
		}
		else if(tgtest.month == atoi(tgkt.month.c_str()))
		{
			if(tgtest.day > atoi(tgkt.day.c_str()))
			{
				return false;
			}
		}
	}
	return true;
}



void InHoaDonNV(TREE_VAT_TU t,NHAN_VIEN* nv,TG tgbd,TG tgkt)
{
	gotoXY(62,2);
	TextColor(DoTrang);
	cout<<nv->HO<<" "<<nv->TEN;
	TextColor(DenTrang);
	int dem=0;
		NODE_HOA_DON* p;
		p = nv->pHead;
		while(p!=NULL)
		{
			if(KTThoiGianTrongKhoangThoiGian(p->Data.NgayLap,tgbd,tgkt) == true)
			{
				gotoXY(38,9+dem);
				cout<<p->Data.SOHD;	
				gotoXY(51,9+dem);	
				cout<<p->Data.NgayLap.day<<"/"<<p->Data.NgayLap.month<<"/"<<p->Data.NgayLap.year;
				gotoXY(65,9+dem);	
				cout<<p->Data.LOAI;
				for(int i=0; i<p->Data.ds_chi_tiet_hd.slvthd; i++)
				{
					gotoXY(72,9+dem+i);
					cout<<p->Data.ds_chi_tiet_hd.ds[i].MAVT;
					gotoXY(87,9+dem+i);
//					cout<<p->Data.ds_chi_tiet_hd.ds[i].TENVT;
					TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[i].MAVT);
					gotoXY(143,9+dem+i);
					cout<<p->Data.ds_chi_tiet_hd.ds[i].SLVT;
					gotoXY(158,9+dem+i);
					cout<<p->Data.ds_chi_tiet_hd.ds[i].DONGIA;
					gotoXY(173,9+dem+i);
					cout<<p->Data.ds_chi_tiet_hd.ds[i].VAT;
					gotoXY(181,9+dem+i);
					cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[i].TRIGIA;
				}
				dem+=p->Data.ds_chi_tiet_hd.slvthd+1;
			}
				p = p->pNext;
		}
		if(dem == 0)
		{
			TextColor(TrangDoNhat);
			for(int i=30; i<=34; i++)
				{
					gotoXY(7,i);
					cout<<"                       ";
				}
					gotoXY(9,32);
					cout<<"NHAN VIEN NAY";
					gotoXY(9,33);
					cout<<"KHONG CO HOA DON";
					getch();
					TextColor(TrangXoa);
			for(int i=30; i<=34; i++)
				{
					gotoXY(7,i);
					cout<<"                       ";
				}
		
		}
}



void MenuLietKeHoaDon(int &Vitri)
{
	char key_press;
	int color;
	while(1)
	{
		color = TrangBac;
		if(Vitri == 1)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=7; i<=11; i++)
		{
			gotoXY(7,i);
			cout<<"                       ";
		}
		gotoXY(16,9);
		cout<<"THOAT";
		color = TrangBac;
		
		
		
		if(Vitri == 2)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=21; i<=25; i++)
		{
			gotoXY(7,i);
			cout<<"                       ";
		}
		gotoXY(9,23);
		cout<<"RA GIAO DIEN CHINH";
		color = TrangBac;	
		
		if(Vitri != 0)
		{
			key_press=getch();
			if(key_press == -32)
			{
						key_press = getch();
						//NHAN LEN
						if(key_press == 72)
						{
							if(Vitri == 1 )
							{
								Vitri = 2;
							}
							else if(Vitri == 2)
							{
								Vitri=1;
							}
						}
						//NHAN XUONG
						else if(key_press == 80)
						{
							if(Vitri == 1 )
							{
								Vitri = 2;
							}
							else if(Vitri == 2)
							{
								Vitri=1;
							}
						}
			}
	       
			else if(key_press == 13)
			{
				break;
			}
		}
			else if(Vitri == 0)
			{
				break;
			}
	}
}










void LietKeHoaDon(TREE_VAT_TU t,DS_NHAN_VIEN dsnv)
{
	int vtbatdau,vtketthuc,SoLuongSoSanh,vthighlight=0,vtnvlhd,oldplace;
	string MANVTK;
	string ChuoiSearch;
	int x,y;
	char keykitu;
	int sokytudanhap =0;
	int lengthmanv,lengthdaybd,lengthmonthbd,lengthyearbd,lengthdaykt,lengthmonthkt,lengthyearkt;
	int dorong;
	
	TG tgbd,tgkt;
	int ViTriLietKeHoaDon=0,Vitrithem;
	TaoKhungLietKeHoaDon();
	TimKiemNhanVienLapHoaDon1:
	lengthmanv=0,lengthdaybd=0,lengthmonthbd=0,lengthyearbd=0,lengthdaykt=0,lengthmonthkt=0,lengthyearkt=0;
	ChuoiSearch = "",tgbd.day="",tgbd.month="",tgbd.year="",tgkt.day="",tgkt.month="",tgkt.year="";
	sokytudanhap = 0;
	Vitrithem = 1;
	TaoKhungLietKeHoaDon2();
	MenuLietKeNhanVienLapHoaDon(ViTriLietKeHoaDon);
	MANVTK="";
	TextColor(DenTrang);
	vtbatdau=0,vthighlight=0,vtnvlhd=0,oldplace=9;
	
	
	if(dsnv.slnv <= 34)
	{
		vtketthuc = dsnv.slnv;
	}
	else if(dsnv.slnv > 34)
	{
		vtketthuc = 34;
	}
	for(int i=vtbatdau; i<vtketthuc; i++)
	{
		if(i == vthighlight)
		{
			TextColor(TrangDoNhat);
			vtnvlhd = i;
		}
		gotoXY(44,9+i);
		cout<<dsnv.nv[i]->MANV;
		gotoXY(72,9+i);
		cout<<dsnv.nv[i]->HO;
		gotoXY(116,9+i);
		cout<<dsnv.nv[i]->TEN;
		gotoXY(143,9+i);
		cout<<dsnv.nv[i]->PHAI;
		gotoXY(174,9+i);
		cout<<dsnv.nv[i]->CMND;
		if(i == vthighlight)
		{
			TextColor(DenTrang);
		}
	}
		SoLuongSoSanh = dsnv.slnv;
		int doronghuongdan = 39;
//	vtnvlhd = InDanhSachNhanVienTK(dsnv,vthighlight,dem,MaNVTK);
	TimKiemNhanVienLapHoaDon2:
	 	while(1)
				{
					HuongDanSuDungLietKeHoaDon1(doronghuongdan);
					nhapthongtintimkiem:
					ShowConsoleCursor(true);
						TextColor(DenTrang);
							if(Vitrithem == 1)
							{
								ChuoiSearch = MANVTK;
								sokytudanhap = lengthmanv;
								x=63+sokytudanhap;
								y= 2;
								dorong = 10;
								while(1)
								{
									
									gotoXY(63+sokytudanhap,2);
										keykitu = getch();//Bat phim khi nhan mot phim bat ki
										if(keykitu == 8)//Kiem neu la phim nhan la backspace thi se lui nguoc con tro lai va bien ki tu vua nhap vao la khoang trang
											{
												if(sokytudanhap != 0)
												{
													gotoXY(x,y);
													keykitu = 32;//gan ki tu vua nhap vao thanh khoang trang
													cout<<"\b";//Lenh lui nguoc con tro chi vi
													cout<<keykitu;//cout ra ki tu khoang trang
													cout<<"\b";
													sokytudanhap--;//lui lai 1 don vi
													ChuoiSearch.erase(sokytudanhap,1);
													x--;
													vthighlight = 0;
													vtbatdau = 0;
													oldplace = 9;
																
													//XOA DU LIEU CU
													TextColor(TrangXoa);
													for(int i=vtbatdau; i<vtketthuc;i++)
													{
															gotoXY(44,oldplace+i);
															cout<<"          ";
															gotoXY(72,oldplace+i);
															cout<<"                         ";
															gotoXY(116,oldplace+i);
															cout<<"          ";
															gotoXY(143,oldplace+i);
															cout<<"   ";
															gotoXY(174,oldplace+i);
															cout<<"         ";
													}
													TextColor(DenTrang);
													if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
													{
														if(dsnv.slnv <= 34)
														{
															vtketthuc = dsnv.slnv;
														}
														else if(dsnv.slnv > 34)
														{
															vtketthuc = 34;
														}
														for(int i=vtbatdau; i<vtketthuc; i++)
															{
																if(i == vthighlight)
																{
																	TextColor(TrangDoNhat);
																	vtnvlhd = i;
																}
																gotoXY(44,oldplace+i);
																cout<<dsnv.nv[i]->MANV;
																gotoXY(72,oldplace+i);
																cout<<dsnv.nv[i]->HO;
																gotoXY(116,oldplace+i);
																cout<<dsnv.nv[i]->TEN;
																gotoXY(143,oldplace+i);
																cout<<dsnv.nv[i]->PHAI;
																gotoXY(174,oldplace+i);
																cout<<dsnv.nv[i]->CMND;
																if(i == vthighlight)
																{
																	TextColor(DenTrang);
																}
															}
														SoLuongSoSanh = dsnv.slnv;
													}
													else if(ChuoiSearch != "")
													{
														vtketthuc=0;
														SoLuongSoSanh = 0;
														for(int i=vtbatdau,j=0;j < dsnv.slnv;)
														{
															if(ChuyenSoThanhChuoi(dsnv.nv[j]->MANV).find(ChuoiSearch) != -1)
															{
																if(i < 34)
																{
																	if(i == vthighlight)
																	{
																		TextColor(TrangDoNhat);
																		vtnvlhd = j;
																	}
																	gotoXY(44,oldplace+i);
																	cout<<dsnv.nv[j]->MANV;
																	gotoXY(72,oldplace+i);
																	cout<<dsnv.nv[j]->HO;
																	gotoXY(116,oldplace+i);
																	cout<<dsnv.nv[j]->TEN;
																	gotoXY(143,oldplace+i);
																	cout<<dsnv.nv[j]->PHAI;
																	gotoXY(174,oldplace+i);
																	cout<<dsnv.nv[j]->CMND;
																	if(i == vthighlight)
																	{
																		TextColor(DenTrang);
																	}
																	i++;
																	vtketthuc++;
																}
																SoLuongSoSanh++;
															}
																j++;
														}
													}
												}
											}
											
											
											//Neu phim nhan khong phai la backspace thi in ra ki tu do
										else if((keykitu>=48 && keykitu<=57) && sokytudanhap<dorong)//BAT PHIM NHAP DU LIEU MA NHAN VIEN(KY TU SO)
											{
												//XOA DU LIEU CU
												TextColor(TrangXoa);
												for(int i=vtbatdau; i<vtketthuc;i++)
												{
													gotoXY(44,oldplace+i);
													cout<<"          ";
													gotoXY(72,oldplace+i);
													cout<<"                         ";
													gotoXY(116,oldplace+i);
													cout<<"          ";
													gotoXY(143,oldplace+i);
													cout<<"   ";
													gotoXY(174,oldplace+i);
													cout<<"         ";
												}
												gotoXY(x,y);
												TextColor(DenTrang);
												cout<<keykitu;
												ChuoiSearch+=keykitu;
												MANVTK = ChuoiSearch;
												sokytudanhap++;//tang len 1 don vi
												x++;
												vthighlight = 0;
												vtbatdau=0;
												vtketthuc = 0;
												oldplace = 9;
												SoLuongSoSanh = 0;
												vtketthuc=0;
												SoLuongSoSanh = 0;
												for(int i=vtbatdau,j=0;j < dsnv.slnv;)
													{
														if(ChuyenSoThanhChuoi(dsnv.nv[j]->MANV).find(MANVTK) != -1)
														{
															if(i < 34)
															{
															if(i == vthighlight)
																{
																	TextColor(TrangDoNhat);
																	vtnvlhd = j;
																}
																gotoXY(44,oldplace+i);
																cout<<dsnv.nv[j]->MANV;
																gotoXY(72,oldplace+i);
																cout<<dsnv.nv[j]->HO;
																gotoXY(116,oldplace+i);
																cout<<dsnv.nv[j]->TEN;
																gotoXY(143,oldplace+i);
																cout<<dsnv.nv[j]->PHAI;
																gotoXY(174,oldplace+i);
																cout<<dsnv.nv[j]->CMND;
															if(i == vthighlight)
																{
																	TextColor(DenTrang);
																}
																i++;
																vtketthuc++;
															}
																SoLuongSoSanh++;
														}
																j++;
													}
											}
										else if(keykitu == -32)
											{
												keykitu = getch();
												if(keykitu == 72)//NHAN LEN
												{
													if(vthighlight > vtbatdau)
													{
														vthighlight--;
													}
													else if(vthighlight == vtbatdau && vtbatdau > 0)
													{
														TextColor(TrangXoa);
														for(int i=vtbatdau; i<vtketthuc;i++)
														{
															gotoXY(44,oldplace+i);
															cout<<"          ";
															gotoXY(72,oldplace+i);
															cout<<"                         ";
															gotoXY(116,oldplace+i);
															cout<<"          ";
															gotoXY(143,oldplace+i);
															cout<<"   ";
															gotoXY(174,oldplace+i);
															cout<<"         ";
														}
														vtbatdau--;
														vtketthuc--;
														vthighlight--;
														oldplace++;
													}
													TextColor(DenTrang);
														if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
														{
															for(int i=vtbatdau; i<vtketthuc; i++)
															{
																if(i == vthighlight)
																{
																	TextColor(TrangDoNhat);
																	vtnvlhd = i;
																}
																gotoXY(44,oldplace+i);
																cout<<dsnv.nv[i]->MANV;
																gotoXY(72,oldplace+i);
																cout<<dsnv.nv[i]->HO;
																gotoXY(116,oldplace+i);
																cout<<dsnv.nv[i]->TEN;
																gotoXY(143,oldplace+i);
																cout<<dsnv.nv[i]->PHAI;
																gotoXY(174,oldplace+i);
																cout<<dsnv.nv[i]->CMND;
																if(i == vthighlight)
																{
																	TextColor(DenTrang);
																}
															}
														}
														else if(ChuoiSearch != "")
														{
															for(int i=vtbatdau,j=0; i < vtketthuc;)
															{
																if(ChuyenSoThanhChuoi(dsnv.nv[j]->MANV).find(ChuoiSearch) != -1)
																{
																	if(i == vthighlight)
																	{
																		TextColor(TrangDoNhat);
																		vtnvlhd = j;
																	}
																	gotoXY(44,oldplace+i);
																	cout<<dsnv.nv[j]->MANV;
																	gotoXY(72,oldplace+i);
																	cout<<dsnv.nv[j]->HO;
																	gotoXY(116,oldplace+i);
																	cout<<dsnv.nv[j]->TEN;
																	gotoXY(143,oldplace+i);
																	cout<<dsnv.nv[j]->PHAI;
																	gotoXY(174,oldplace+i);
																	cout<<dsnv.nv[j]->CMND;
																	if(i == vthighlight)
																	{
																		TextColor(DenTrang);
																	}
																	i++;
																}
																j++;
															}
														}
												}
												else if(keykitu == 80)//NHAN XUONG
												{
													if(vthighlight < vtketthuc-1)
														{
															vthighlight++;
														}
													else if(vthighlight == (vtketthuc-1) && vtketthuc <= SoLuongSoSanh-1)
														{
															TextColor(TrangXoa);
														for(int i=vtbatdau; i<vtketthuc;i++)
														{
															gotoXY(44,oldplace+i);
															cout<<"          ";
															gotoXY(72,oldplace+i);
															cout<<"                         ";
															gotoXY(116,oldplace+i);
															cout<<"          ";
															gotoXY(143,oldplace+i);
															cout<<"   ";
															gotoXY(174,oldplace+i);
															cout<<"         ";
														}
															vtbatdau++;
															vtketthuc++;
															vthighlight++;
															oldplace--;
														}
														TextColor(DenTrang);
														if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
														{
															for(int i=vtbatdau; i<vtketthuc; i++)
															{
																if(i == vthighlight)
																{
																	TextColor(TrangDoNhat);
																	vtnvlhd = i;
																}
																gotoXY(44,oldplace+i);
																cout<<dsnv.nv[i]->MANV;
																gotoXY(72,oldplace+i);
																cout<<dsnv.nv[i]->HO;
																gotoXY(116,oldplace+i);
																cout<<dsnv.nv[i]->TEN;
																gotoXY(143,oldplace+i);
																cout<<dsnv.nv[i]->PHAI;
																gotoXY(174,oldplace+i);
																cout<<dsnv.nv[i]->CMND;
																if(i == vthighlight)
																{
																	TextColor(DenTrang);
																}
															}
														}
														else if(ChuoiSearch != "")
														{
															for(int i=vtbatdau,j=0; i < vtketthuc && j < dsnv.slnv;)
															{
																if(ChuyenSoThanhChuoi(dsnv.nv[j]->MANV).find(ChuoiSearch) != -1)
																{
																	if(i == vthighlight)
																	{
																		TextColor(TrangDoNhat);
																		vtnvlhd = j;
																	}
																	gotoXY(44,oldplace+i);
																	cout<<dsnv.nv[j]->MANV;
																	gotoXY(72,oldplace+i);
																	cout<<dsnv.nv[j]->HO;
																	gotoXY(116,oldplace+i);
																	cout<<dsnv.nv[j]->TEN;
																	gotoXY(143,oldplace+i);
																	cout<<dsnv.nv[j]->PHAI;
																	gotoXY(174,oldplace+i);
																	cout<<dsnv.nv[j]->CMND;
																	if(i == vthighlight)
																	{
																		TextColor(DenTrang);
																	}
																	i++;
																}
																j++;
															}
														}
												}
												else if(keykitu == 75)//QUA TRAI
												{
													XoaHuongDanSuDungLietKeHoaDon1(doronghuongdan);
												
													if(Vitrithem != 1)
													{
														Vitrithem--;
														goto nhapthongtintimkiem;
													}
													else if(Vitrithem == 1)//NHAY RA MENU
													{
														nhayramenulietkehoadon:
														ShowConsoleCursor(false);
														//KIEM TRA
														MANVTK = ChuoiSearch;
														lengthmanv = sokytudanhap;
																//NHAY RA MENU
																ViTriLietKeHoaDon=1;
																MenuLietKeNhanVienLapHoaDon(ViTriLietKeHoaDon);
																
																	if(ViTriLietKeHoaDon == 1)//LIET KE DANH SACH HOA DON
																	{
																		if(tgbd.day.length() == 0 || tgbd.month.length() == 0 || tgbd.year.length() == 0 || tgkt.day.length() == 0 || tgkt.month.length() == 0 || tgkt.year.length() == 0)
																		{
																			TextColor(TrangDoNhat);
																			for(int i=30; i<=34; i++)
																			{
																				gotoXY(7,i);
																				cout<<"                       ";
																			}
																			gotoXY(9,32);
																			cout<<"DU LIEU DANG TRONG";
																			getch();
																			TextColor(DenTrang);
																			for(int i=30; i<=34; i++)
																			{
																				gotoXY(7,i);
																				cout<<"                       ";
																			}
																			if(keykitu == 72 || keykitu == 75 || keykitu == 77 || keykitu == 80)
																			{
																				keykitu = getch();
																			}
																			goto nhayramenulietkehoadon;
																		}
																		
																		if(KTThoiGianHopLe(atoi(tgbd.day.c_str()),atoi(tgbd.month.c_str()),atoi(tgbd.year.c_str())) == false 
																		|| KTThoiGianHopLe(atoi(tgkt.day.c_str()),atoi(tgkt.month.c_str()),atoi(tgkt.year.c_str())) == false
																		|| KT2KhoangTGHopLe(atoi(tgbd.day.c_str()),atoi(tgbd.month.c_str()),atoi(tgbd.year.c_str()),
																	atoi(tgkt.day.c_str()),atoi(tgkt.month.c_str()),atoi(tgkt.year.c_str()) ) == false
																		) 
																		{
																		TextColor(TrangDoNhat);
																		for(int i=30; i<=34; i++)
																		{
																			gotoXY(5,i);
																			cout<<"                          ";
																		}
																			gotoXY(7,32);
																			cout<<"THOI GIAN KHONG HOP LE";
																			getch();
																			TextColor(DenTrang);
																		for(int i=30; i<=34; i++)
																		{
																			gotoXY(5,i);
																			cout<<"                          ";
																		}
																		goto nhayramenulietkehoadon;
																		}
																			XoaKhungTimKiemNhanVienLapHoaDon();
																			for(int i=vtbatdau; i<vtketthuc;i++)
																			{
																				gotoXY(44,oldplace+i);
																				cout<<"          ";
																				gotoXY(72,oldplace+i);
																				cout<<"                         ";
																				gotoXY(116,oldplace+i);
																				cout<<"          ";
																				gotoXY(143,oldplace+i);
																				cout<<"   ";
																				gotoXY(174,oldplace+i);
																				cout<<"         ";
																			}
																			TaoKhungInHoaDonNV();
																			InHoaDonNV(t,dsnv.nv[vtnvlhd],tgbd,tgkt);
																			int vtlkhd=1;
																			MenuLietKeHoaDon(vtlkhd);
																			if(vtlkhd == 1)//THOAT
																			{
																				ViTriLietKeHoaDon = 0;
																				XoaKhungInHoaDonNV(dsnv.nv[vtnvlhd],tgbd,tgkt);
																				goto TimKiemNhanVienLapHoaDon1;
																			}
																			else if(vtlkhd == 2)//RA GIAO DIEN CHINH
																			{
																				return;
																			}
																	}
																	else if(ViTriLietKeHoaDon == 2)//BO CHON
																	{
																		ViTriLietKeHoaDon=0;
																		MenuLietKeNhanVienLapHoaDon(ViTriLietKeHoaDon);
																		goto TimKiemNhanVienLapHoaDon2;
																	}
																	else if(ViTriLietKeHoaDon == 3)//RA GIAO DIEN CHINH
																	{
																		return;
																	}	
															}
													}
													else if(keykitu == 77)//QUA PHAI
													{
														MANVTK = ChuoiSearch;
														lengthmanv = sokytudanhap;
														if(Vitrithem != 7)
														{
															Vitrithem++;
															goto nhapthongtintimkiem;
														}
													}
												}
												
										else if(keykitu == 13)
										{
											goto nhayramenulietkehoadon;
										}
								}
						}
							//NGAY BAT DAU
							else if(Vitrithem == 2)
										{
											ChuoiSearch = tgbd.day;
											sokytudanhap = lengthdaybd;
											x = 110 + sokytudanhap;
											y = 2;
											dorong = 2;
											keykitu = So(ChuoiSearch,dorong,x,y,sokytudanhap);
										}
							//THANG BAT DAU
							else if(Vitrithem == 3)
										{
											ChuoiSearch = tgbd.month;
											sokytudanhap = lengthmonthbd;
											x = 114 + sokytudanhap;
											y = 2;
											dorong = 2;
											keykitu = So(ChuoiSearch,dorong,x,y,sokytudanhap);
										}
							//NAM BAT DAU
							else if(Vitrithem == 4)
										{
											ChuoiSearch =tgbd.year;
											sokytudanhap = lengthyearbd;
											x = 118 + sokytudanhap;
											y = 2;
											dorong = 4;
											keykitu = So(ChuoiSearch,dorong,x,y,sokytudanhap);
										}
										//DAY KET THUC
							else if(Vitrithem == 5)
										{
											ChuoiSearch = tgkt.day;
											sokytudanhap = lengthdaykt;
											x = 156 + sokytudanhap;
											y = 2;
											dorong = 2;
											keykitu = So(ChuoiSearch,dorong,x,y,sokytudanhap);
										}
										//THANG KET THUC
							else if(Vitrithem == 6)
										{
											ChuoiSearch = tgkt.month;
											sokytudanhap = lengthmonthkt;
											x = 160 + sokytudanhap;
											y = 2;
											dorong = 2;
											keykitu = So(ChuoiSearch,dorong,x,y,sokytudanhap);
										}
										//NAM KET THUC
							else if(Vitrithem == 7)
										{
											ChuoiSearch = tgkt.year;
											sokytudanhap = lengthyearkt;
											x = 164 + sokytudanhap;
											y = 2;
											dorong = 4;
											keykitu = So(ChuoiSearch,dorong,x,y,sokytudanhap);
										}
						if(Vitrithem == 2)
										{
											tgbd.day = ChuoiSearch;
											lengthdaybd = sokytudanhap;
										}
						//THANG BAT DAU
						else if(Vitrithem == 3)
										{
											tgbd.month = ChuoiSearch;
											lengthmonthbd = sokytudanhap;
										}
						//NAM BAT DAU
						else if(Vitrithem == 4)
										{
											tgbd.year = ChuoiSearch;
											lengthyearbd = sokytudanhap;
										}
						//DAY KET THUC
						else if(Vitrithem == 5)
										{
											tgkt.day = ChuoiSearch;
											lengthdaykt = sokytudanhap;
										}
						//THANG KET THUC
						else if(Vitrithem == 6)
										{
											tgkt.month = ChuoiSearch;
											lengthmonthkt = sokytudanhap;
										}
						//NAM KET THUC
						else if(Vitrithem == 7)
										{
											tgkt.year = ChuoiSearch;
											lengthyearkt = sokytudanhap;
										}
						if(keykitu == -32)//NHAN PHIM DIEU KHIEN
										{
											keykitu = getch();
											if(keykitu == 75)//QUA TRAI
												{
													if(Vitrithem != 1)
													{
														Vitrithem--;
													}
													else if(Vitrithem == 1)//NHAY RA MENU
													{
														goto nhayramenulietkehoadon;
													}
												}
												else if(keykitu == 77)//QUA PHAI
												{
													if(Vitrithem != 7)
													{
														Vitrithem++;
													}
												}
										}
						else if(keykitu == 13)//ENTER
						{
							XoaHuongDanSuDungLietKeHoaDon1(doronghuongdan);
							goto nhayramenulietkehoadon;
						}	
			}
}


void ThongKeDoanhThuTheoThang(DS_NHAN_VIEN dsnv, DOANHTHU ThongKe,int nam)
{
	NODE_HOA_DON* p;
	TextColor(DenTrang);
	
for(int i=0; i<dsnv.slnv; i++)
	{
		p = dsnv.nv[i]->pHead;	
		while(p!=NULL)
		{
			if(p->Data.LOAI == "X")
			{
				if(p->Data.NgayLap.year == nam)
				{
				if(p->Data.NgayLap.month == 1)
				{
					ThongKe.thang1+= p->Data.TONGTRIGIA;
				}
				else if(p->Data.NgayLap.month == 2)
				{
					ThongKe.thang2+= p->Data.TONGTRIGIA;
				}
				else if(p->Data.NgayLap.month == 3)
				{
					ThongKe.thang3+= p->Data.TONGTRIGIA;
				}
				else if(p->Data.NgayLap.month == 4)
				{
					ThongKe.thang4+= p->Data.TONGTRIGIA;
				}
				else if(p->Data.NgayLap.month == 5)
				{
					ThongKe.thang5+= p->Data.TONGTRIGIA;
				}
				else if(p->Data.NgayLap.month == 6)
				{
					ThongKe.thang6+= p->Data.TONGTRIGIA;
				}
				else if(p->Data.NgayLap.month == 7)
				{
					ThongKe.thang7+= p->Data.TONGTRIGIA;
				}
				else if(p->Data.NgayLap.month == 8)
				{
					ThongKe.thang8+= p->Data.TONGTRIGIA;
				}
				else if(p->Data.NgayLap.month == 9)
				{
					ThongKe.thang9+= p->Data.TONGTRIGIA;
				}
				else if(p->Data.NgayLap.month == 10)
				{
					ThongKe.thang10+= p->Data.TONGTRIGIA;
				}
				else if(p->Data.NgayLap.month == 11)
				{
					ThongKe.thang11+= p->Data.TONGTRIGIA;
				}
				else if(p->Data.NgayLap.month == 12)
				{
					ThongKe.thang12+= p->Data.TONGTRIGIA;
				}
			}
			}
			
			p=p->pNext;
		}
	}

	TextColor(DenTrang);

	//IN RA DOANH THU
	//THANG 1
	gotoXY(91,13);
	cout<<(size_t)ThongKe.thang1<<" VND";
	//THANG 2
	gotoXY(91,17);
	cout<<(size_t)ThongKe.thang2<<" VND";
	//THANG 3
	gotoXY(91,21);
	cout<<(size_t)ThongKe.thang3<<" VND";
	//THANG 4
	gotoXY(91,25);
	cout<<(size_t)ThongKe.thang4<<" VND";
	//THANG 5
	gotoXY(91,29);
	cout<<(size_t)ThongKe.thang5<<" VND";
	//THANG 6
	gotoXY(91,33);
	cout<<(size_t)ThongKe.thang6<<" VND";
	//THANG 7
	gotoXY(147,13);
	cout<<(size_t)ThongKe.thang7<<" VND";
	//THANG 8
	gotoXY(147,17);
	cout<<(size_t)ThongKe.thang8<<" VND";
	//THANG 9
	gotoXY(147,21);
	cout<<(size_t)ThongKe.thang9<<" VND";
	//THANG 10
	gotoXY(147,25);
	cout<<(size_t)ThongKe.thang10<<" VND";
	//THANG 11
	gotoXY(147,29);
	cout<<(size_t)ThongKe.thang11<<" VND";
	//THANG 12
	gotoXY(147,33);
	cout<<(size_t)ThongKe.thang12<<" VND";
}
	 
	 
void XoaDuLieuThongKe()
{
	TextColor(TrangXoa);
	//THANG 1
	gotoXY(91,13);
	cout<<"                           ";
	//THANG 2
	gotoXY(91,17);
	cout<<"                           ";
	//THANG 3
	gotoXY(91,21);
	cout<<"                           ";
	//THANG 4
	gotoXY(91,25);
	cout<<"                           ";
	//THANG 5
	gotoXY(91,29);
	cout<<"                           ";
	//THANG 6
	gotoXY(91,33);
	cout<<"                           ";
	//THANG 7
	gotoXY(147,13);
	cout<<"                           ";
	//THANG 8
	gotoXY(147,17);
	cout<<"                           ";
	//THANG 9
	gotoXY(147,21);
	cout<<"                           ";
	//THANG 10
	gotoXY(147,25);
	cout<<"                           ";
	//THANG 11
	gotoXY(147,29);
	cout<<"                           ";
	//THANG 12
	gotoXY(147,33);
	cout<<"                           ";
}	 
	 
void ThongKeDoanhThu(DS_NHAN_VIEN dsnv)
{
	DOANHTHU ThongKe;
	string namtk,chuoi;
	TaoKhungThongKe();
	int Vitrikhoitao = 0;
	int x,y;
	char keykitu;
	int sokytudanhap =0;
	int lengthyeartk=0;
	int dorong,doronghuongdan = 39;
	MenuChucNangThongKe(Vitrikhoitao);
	while(1)
	{
		nhapnamthongke:
		HuongDanSuDungLietKeHoaDon1(doronghuongdan);	
		TextColor(DenTrang);	
			ShowConsoleCursor(true);
			chuoi = namtk;
			sokytudanhap = lengthyeartk;
			x = 134 + sokytudanhap;
			y = 4;
			dorong = 4;
			keykitu = So(chuoi,dorong,x,y,sokytudanhap);
			namtk = chuoi;
			lengthyeartk = sokytudanhap;
			if(keykitu == -32)
			{
				keykitu = getch();
				if(keykitu == 75)//QUA TRAI
				{
					dichuyenquatrai:
					XoaHuongDanSuDungLietKeHoaDon1(doronghuongdan);
					ShowConsoleCursor(false);
						Vitrikhoitao = 1;
						chonmenuchucnang1:
						MenuChucNangThongKe(Vitrikhoitao);
						if(Vitrikhoitao == 1)//THONG KE DOANH THU THEO NAM
						{
							if(lengthyeartk == 0)
							{
								TextColor(TrangDoNhat);
								for(int i=30; i<=34; i++)
									{
										gotoXY(7,i);
										cout<<"                       ";
									}
									gotoXY(9,32);
									cout<<"VUI LONG NHAP NAM";
									TextColor(TrangXoa);
									getch();
									for(int i=30; i<=34; i++)
										{
											gotoXY(7,i);
											cout<<"                       ";
										}
							}
							else if(atoi(namtk.c_str()) > time_ht->tm_year+1900 || atoi(namtk.c_str()) < 1990)//LON HON NAM HIEN TAI OR NHO HON 1990 THI KHONG HOP LE
							{
								TextColor(TrangDoNhat);
								for(int i=30; i<=34; i++)
									{
										gotoXY(7,i);
										cout<<"                        ";
									}
									gotoXY(8,32);
									cout<<"THOI GIAN KHONG HOP LE";
									TextColor(TrangXoa);
									getch();
									for(int i=30; i<=34; i++)
										{
											gotoXY(7,i);
											cout<<"                        ";
										}
							}
							else
							{
								ThongKeDoanhThuTheoThang(dsnv,ThongKe,atoi(namtk.c_str()));
							}
							goto chonmenuchucnang1;
						}
						else if(Vitrikhoitao == 2)//DI CHUYEN TOI NHAP NAM
						{
							Vitrikhoitao = 0;
							MenuChucNangThongKe(Vitrikhoitao);
							XoaDuLieuThongKe();
							goto nhapnamthongke;
						}
						else if(Vitrikhoitao == 3)//RA GIAO DIEN CHINH
						{
							return;
						}
				}
			}
			else if(keykitu == 13)
			{
					goto dichuyenquatrai;
			}
	}
}	 

