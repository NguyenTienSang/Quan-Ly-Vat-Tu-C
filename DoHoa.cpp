#include "KhaiBaoCauTruc.h"
#include"DoHoa.h"
#include"console.h"
#include<iostream>
using namespace std;
#include<fstream>
#pragma warning(disable : 4996)
int color;
//=========== TAO KHUNG GIAO DIEN CHINH ==========
int TaoKhungGiaoDienChinh(int &Vitri)
{
	color = 159;
	char key_press;
    int ascii_value;
	char a[100];
	ifstream filein;
	TextColor(3);
	filein.open("QuanLyVatTu.txt");
	int i=0;
	while(!filein.eof())
	{
		filein.getline(a,100);
		gotoXY(10,3+i);
		cout<<a;
		i++;
	}
	
	TextColor(241);
	gotoXY(155,5);
	cout<<"                          ";
	gotoXY(155,6);
	cout<<"                          ";
	gotoXY(160,6);
	cout<<"HUONG DAN SU DUNG";
	gotoXY(155,7);
	cout<<"                          ";
	TextColor(159);
	for(int i=11; i<38; i=i+15)
	{
		gotoXY(155,i);
		cout<<"                          ";
		gotoXY(155,i+1);
		cout<<"                          ";
		gotoXY(155,i+2);
		cout<<"                          ";
		
		gotoXY(155,5+i);
		cout<<"                          ";
		gotoXY(155,5+i+1);
		cout<<"                          ";
		gotoXY(155,5+i+2);
		cout<<"                          ";
		
		gotoXY(155,10+i);
		cout<<"                          ";
		gotoXY(155,10+i+1);
		cout<<"                          ";
		gotoXY(155,10+i+2);
		cout<<"                          ";
	}
	gotoXY(160,12);
	cout<<"ARROW UP : LEN";
	gotoXY(160,17);	
	cout<<"ARROW DOWN : XUONG";
	gotoXY(157,22);
	cout<<"ARROW LEFT : SANG TRAI";
	gotoXY(157,27);
	cout<<"ARROW RIGHT : SANG PHAI";
	gotoXY(160,32);	
	cout<<"ENTER : CHON";
	gotoXY(160,37);
	cout<<"ESC : THOAT";
	TextColor(color);
	
	//==THANH NGANG TOP
		gotoXY(0,0);
		cout<<"                                                                                               ";
		gotoXY(95,0);
		cout<<"                                                                                               ";
		//THANH NGANG DOWN	 
		gotoXY(0,43);
		cout<<"                                                                                               ";
		gotoXY(95,43);
		cout<<"                                                                                               ";
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
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(148,i+1);
		cout<<"  ";
		gotoXY(148,12+i);
		cout<<"  ";
		gotoXY(148,22+i);
		cout<<"  ";
		gotoXY(148,32+i);
		cout<<"  ";
	}
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(188,i+1);
		cout<<"  ";
		gotoXY(188,12+i);
		cout<<"  ";
		gotoXY(188,22+i);
		cout<<"  ";
		gotoXY(188,32+i);
		cout<<"  ";
	}
    while(1)
    {
		    //============ 1 NHAP VAT TU =================
		    if(Vitri == 1)
		    {
		    	color = 241;
			}
			TextColor(color);
			for(int i=15; i<=19; i++)
			{
				gotoXY(15,i);
				cout<<"                               ";
			}
				gotoXY(24,17);
				cout<<"NHAP VAT TU";
				color = 159;
			//=================== 2 IN DANH SACH VAT TU ==============
			if(Vitri == 2)
		    {
		    	color = 241;
			}
			TextColor(color);	
			for(int i=15; i<=19; i++)
			{
				gotoXY(60,i);
				cout<<"                               ";
			}
				gotoXY(65,17);
				cout<<"IN DANH SACH VAT TU";
				color = 159;
			//============== 3 NHAP NHAN VIEN ==============	
			if(Vitri == 3)
		    {
		    	color = 241;
			}
			TextColor(color);	
			for(int i=15; i<=19; i++)
			{
				gotoXY(105,i);
				cout<<"                               ";
			}
				gotoXY(114,17);
				cout<<"NHAP NHAN VIEN";
				color = 159;
			//=============== 4 IN DANH SACH NHAN VIEN ============	
			if(Vitri == 4)
		    {
		    	color = 241;
			}
			TextColor(color);	
			for(int i=25; i<=29; i++)
			{
				gotoXY(15,i);
				cout<<"                               ";
			}
				gotoXY(19,27);
				cout<<"IN DANH SACH NHAN VIEN";
				color = 159;
			//============== 5 LAP HOA DON =========
			if(Vitri == 5)
		    {
		    	color = 241;
			}
			TextColor(color);	
			for(int i=25; i<=29; i++)
			{
				gotoXY(60,i);
				cout<<"                               ";
			}
				gotoXY(68,27);
				cout<<"LAP HOA DON";
				color = 159;
			//============ 6 TRA HANG ==========
			if(Vitri == 6)
		    {
		    	color = 241;
			}
			TextColor(color);	
			for(int i=25; i<=29; i++)
			{
				gotoXY(105,i);
				cout<<"                               ";
			}
				gotoXY(116,27);
				cout<<"TRA HANG";
				color = 159;
			//=========== 7 IN HOA DON ===========
			if(Vitri == 7)
		    {
		    	color = 241;
			}
			TextColor(color);	
			for(int i=35; i<=39; i++)
			{
				gotoXY(15,i);
				cout<<"                               ";
			}
				gotoXY(24,37);
				cout<<"IN HOA DON";
				color = 159;
			//=========== 8 LIET KE HOA DON =========
			if(Vitri == 8)
		    {
		    	color = 241;
			}
			TextColor(color);	
				for(int i=35; i<=39; i++)
			{
				gotoXY(60,i);
				cout<<"                               ";
			}
				gotoXY(67,37);
				cout<<"LIET KE HOA DON";
				color = 159;
			//=========== 9 KET THUC CHUONG TRINH ==========
			if(Vitri == 9)
		    {
		    	color = 241;
			}
			TextColor(color);	
				for(int i=35; i<=39; i++)
			{
				gotoXY(105,i);
				cout<<"                               ";
			}
				gotoXY(110,37);
				cout<<"KET THUC CHUONG TRINH";
				color = 159;
	
		//======= TO MAU O DUOC CHON =======
				
        key_press=getch();
        ascii_value=key_press;
        if(ascii_value==27) // For ESC
            break;
        if(ascii_value==13) // For ESC
            break;   
		//======= NHAN QUA TRAI
		if(ascii_value == 75)
		{
			if(Vitri == 1)
				{
					Vitri = 3;
				}
			else if(Vitri == 4)
				{
					Vitri = 6;
				}
			else if(Vitri == 7)
				{
					Vitri = 9;
				}		
			else
			{
				Vitri--;
			}
		}    
        //====== NHAN QUA PHAI
        else if(ascii_value == 77)
		{
			if(Vitri == 3)
				{
					Vitri = 1;
				}
			else if(Vitri == 6)
				{
					Vitri = 4;
				}
			else if(Vitri == 9)
				{
					Vitri = 7;
				}	
			else
			{
				Vitri++;
			}
		}
		//====== NHAN LEN
		else if(ascii_value == 72)
		{
			if(Vitri == 1 || Vitri == 2 || Vitri == 3)
				{
					Vitri = Vitri + 6;
				}
			else
			{
				Vitri = Vitri - 3;
			}
		}  
		//======= NHAN XUONG
		else if(key_press == 80)
		{
			if(Vitri == 7 || Vitri == 8 || Vitri == 9)
				{
					Vitri = Vitri -  6;
				}
			else
			{
				Vitri = Vitri + 3;
			}
		}  
    }
	
}



//======== TAO KHUNG NHAP VAT TU ========
int TaoKhungNhapVatTu(TREE_VAT_TU &t,int &Vitri)
{

	system("cls");
	system("color 07");
	color = 159;
	if(Vitri == 1)
	{
		color = 241;
	}
	TextColor(color);
	for(int i=5; i<=9; i++)
	{
		gotoXY(15,i);
		cout<<"                               ";
	}
	gotoXY(24,7);
	cout<<"THEM VAT TU";
	color = 159;
	
	
	if(Vitri == 2)
	{
		color = 241;
	}
	TextColor(color);
	for(int i=15; i<=19; i++)
	{
		gotoXY(15,i);
		cout<<"                               ";
	}
	gotoXY(24,17);
	cout<<"XOA VAT TU";
	color = 159;
	
	
	if(Vitri == 3)
	{
		color = 241;
	}
	TextColor(color);
	for(int i=25; i<=29; i++)
	{
		gotoXY(15,i);
		cout<<"                               ";
	}
	gotoXY(17,27);
	cout<<"HIEU CHINH THONG TIN VAT TU";
	color = 159;
	
	if(Vitri == 4)
	{
		color = 241;
	}
	TextColor(color);
	for(int i=35; i<=39; i++)
	{
		gotoXY(15,i);
		cout<<"                               ";
	}
	gotoXY(24,37);
	cout<<"RA GIAO DIEN CHINH";
	color = 159;
	getch();

}



//============ MENU THEM, XOA, SUA VAT TU ==============
int MenuThemVatTu(TREE_VAT_TU &t, int Vitri)
{
	bool KT = true;
	while(KT)
	{

			TaoKhungNhapVatTu(t,Vitri);
			getch();
//			if(Vitri == 1)
//			{
//				Nhap_Thong_Tin_Vat_Tu(t);
//			}
//			else if(Vitri == 2)
//			{
//				Xoa_Vat_Tu_Khoi_Danh_Sach(t);
//			}
//			else if(Vitri == 3)
//			{
//				
//			}
//			else if(Vitri == 4)
//			{
//				KT = false;
//			}
	}

}




