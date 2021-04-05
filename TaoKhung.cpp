#include "KhaiBaoCauTruc.h"
#include "TaoKhung.h"
#include "VatTu.h"
#include "NhanVien.h"
#include "HoaDon.h"
#include "XuLyChuoi.h"
#include "console.h"
#include<conio.h>
#include<iostream>
using namespace std;
#include <string.h>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include<fstream>
#include<ctime>



#define SLVTHDTAM 20

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
#define XanhXanh 170
#define TrangBac 143
#define DoDo 68
#define TrangDo 79
#define TrangDoNhat 207
#define TrangDen 15
int color;

//=========== TAO KHUNG GIAO DIEN CHINH ==========
void TaoKhungGiaoDienChinh(int &Vitri)
{
	system("cls");
	system("color f0");
	char key_pressgd;
	string a;
	ifstream filein;
	TextColor(XanhLaDamTrang);
	filein.open("QuanLyVatTu.txt");
	int i=0;
	while(!filein.eof())
	{
		getline(filein,a);
		gotoXY(10,3+i);
		cout<<a;
		i++;
	}
	filein.close();
	TextColor(TrangDoNhat);
	gotoXY(162,4);
	cout<<"                          ";
	gotoXY(162,5);
	cout<<"                          ";
	gotoXY(162,6);
	cout<<"                          ";
	gotoXY(162,7);
	cout<<"                          ";
	gotoXY(162,8);
	cout<<"                          ";
	gotoXY(167,6);
	cout<<"HUONG DAN SU DUNG";
	TextColor(TrangXanhLa);
	for(int i=12; i<28; i=i+15)
	{
		gotoXY(158,i);
		cout<<"                                  ";
		gotoXY(158,i+1);
		cout<<"                                  ";
		gotoXY(158,i+2);
		cout<<"                                  ";
		
		gotoXY(158,5+i);
		cout<<"                                  ";
		gotoXY(158,5+i+1);
		cout<<"                                  ";
		gotoXY(158,5+i+2);
		cout<<"                                  ";
		
		gotoXY(158,10+i);
		cout<<"                                  ";
		gotoXY(158,10+i+1);
		cout<<"                                  ";
		gotoXY(158,10+i+2);
		cout<<"                                  ";
	}
	gotoXY(167,13);
	cout<<"ARROW UP : LEN";
	gotoXY(167,18);	
	cout<<"ARROW DOWN : XUONG";
	gotoXY(164,23);
	cout<<"ARROW LEFT : SANG TRAI";
	gotoXY(164,28);
	cout<<"ARROW RIGHT : SANG PHAI";
	gotoXY(167,33);	
	cout<<"ENTER : CHON";
	gotoXY(167,38);
	cout<<"ESC : THOAT";
	TextColor(TrangXanhLa);
	
	//==THANH NGANG TOP
		gotoXY(0,0);
		cout<<"                                                                                                     ";
		gotoXY(101,0);
		cout<<"                                                                                                     ";
		//THANH NGANG DOWN	 
		gotoXY(0,43);
		cout<<"                                                                                                     ";
		gotoXY(101,43);
		cout<<"                                                                                                     ";
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
		gotoXY(200,1+i);
		cout<<"  ";
		gotoXY(200,12+i);
		cout<<"  ";
		gotoXY(200,22+i);
		cout<<"  ";
		gotoXY(200,32+i);
		cout<<"  ";
	}
	
	
    while(1)
    {
		    //============ 1 NHAP VAT TU =================
		    if(Vitri == 1)
		    {
		    	color = TrangXanhLa;
			}
			TextColor(color);
			for(int i=15; i<=19; i++)
			{
				gotoXY(15,i);
				cout<<"                               ";
			}
				gotoXY(24,17);
				cout<<"NHAP VAT TU";
				color = TrangBac;
			//=================== 2 IN DANH SACH VAT TU ==============
			if(Vitri == 2)
		    {
		    	color = TrangXanhLa;
			}
			TextColor(color);	
			for(int i=15; i<=19; i++)
			{
				gotoXY(60,i);
				cout<<"                               ";
			}
				gotoXY(65,17);
				cout<<"IN DANH SACH VAT TU";
				color = TrangBac;
			//============== 3 NHAP NHAN VIEN ==============	
			if(Vitri == 3)
		    {
		    	color = TrangXanhLa;
			}
			TextColor(color);	
			for(int i=15; i<=19; i++)
			{
				gotoXY(105,i);
				cout<<"                               ";
			}
				gotoXY(114,17);
				cout<<"NHAP NHAN VIEN";
				color = TrangBac;
			//=============== 4 IN DANH SACH NHAN VIEN ============	
			if(Vitri == 4)
		    {
		    	color = TrangXanhLa;
			}
			TextColor(color);	
			for(int i=25; i<=29; i++)
			{
				gotoXY(15,i);
				cout<<"                               ";
			}
				gotoXY(19,27);
				cout<<"IN DANH SACH NHAN VIEN";
				color = TrangBac;
			//============== 5 LAP HOA DON =========
			if(Vitri == 5)
		    {
		    	color = TrangXanhLa;
			}
			TextColor(color);	
			for(int i=25; i<=29; i++)
			{
				gotoXY(60,i);
				cout<<"                               ";
			}
				gotoXY(68,27);
				cout<<"LAP HOA DON";
				color = TrangBac;
			//============ 6 TRA HANG ==========
			if(Vitri == 6)
		    {
		    	color = TrangXanhLa;
			}
			TextColor(color);	
			for(int i=25; i<=29; i++)
			{
				gotoXY(105,i);
				cout<<"                               ";
			}
				gotoXY(116,27);
				cout<<"TRA HANG";
				color = TrangBac;
			//=========== 7 IN HOA DON ===========
			if(Vitri == 7)
		    {
		    	color = TrangXanhLa;
			}
			TextColor(color);	
			for(int i=35; i<=39; i++)
			{
				gotoXY(15,i);
				cout<<"                               ";
			}
				gotoXY(24,37);
				cout<<"IN HOA DON";
				color = TrangBac;
			//=========== 8 LIET KE HOA DON =========
			if(Vitri == 8)
		    {
		    	color = TrangXanhLa;
			}
			TextColor(color);	
				for(int i=35; i<=39; i++)
			{
				gotoXY(60,i);
				cout<<"                               ";
			}
				gotoXY(67,37);
				cout<<"LIET KE HOA DON";
				color = TrangBac;
			//=========== 9 KET THUC CHUONG TRINH ==========
			if(Vitri == 9)
		    {
		    	color = TrangXanhLa;
			}
			TextColor(color);	
				for(int i=35; i<=39; i++)
			{
				gotoXY(105,i);
				cout<<"                               ";
			}
				gotoXY(112,37);
				cout<<"THONG KE HOA DON";
				color = TrangBac;
	
		//======= TO MAU O DUOC CHON =======
				
        key_pressgd =getch();
        if(key_pressgd == 13) // For ENTER
            break;
        if(key_pressgd == 27) // For ESC
           {
           		Vitri = 0;
           		break;
			}  
		//======= NHAN QUA TRAI
		if(key_pressgd == 75)
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
        else if(key_pressgd == 77)
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
		else if(key_pressgd == 72)
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
		else if(key_pressgd == 80)
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


//============ TAO KHUNG IN VAT TU ============
void TaoKhungInVatTu(TREE_VAT_TU tam[], int slvt)
{
	system("cls");
	system("color f0");
	
	TextColor(TrangXanhLa);
	//==THANH NGANG TOP
		gotoXY(0,0);
		cout<<"                                                                                                     ";
		gotoXY(101,0);
		cout<<"                                                                                                     ";	
		//==THANH NGANG TREN ITEM
		gotoXY(0,4);
		cout<<"                                                                                               ";
		gotoXY(95,4);
		cout<<"                                                               ";
		
		//==THANH NGANG DUOI ITEM
		gotoXY(0,8);
		cout<<"                                                                                               ";
		gotoXY(95,8);
		cout<<"                                                               ";
		
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
	for(int i=0; i<=12; i++)
	{
		
		gotoXY(25,5+i);
		cout<<"  ";
		gotoXY(25,18+i);
		cout<<"  ";
		gotoXY(25,30+i);
		cout<<"  ";
	}
	
	//THANH 3
	for(int i=0; i<=12; i++)
	{
		
		gotoXY(94,5+i);
		cout<<"  ";
		gotoXY(94,18+i);
		cout<<"  ";
		gotoXY(94,30+i);
		cout<<"  ";
	}
	
	//THANH 4
	for(int i=0; i<=12; i++)
	{
		
		gotoXY(129,5+i);
		cout<<"  ";
		gotoXY(129,18+i);
		cout<<"  ";
		gotoXY(129,30+i);
		cout<<"  ";
	}
	
	
	//THANH 5
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(157,i+1);
		cout<<"  ";
		gotoXY(157,12+i);
		cout<<"  ";
		gotoXY(157,22+i);
		cout<<"  ";
		gotoXY(157,32+i);
		cout<<"  ";
	}
	
	//THANH 6
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(200,i+1);
		cout<<"  ";
		gotoXY(200,12+i);
		cout<<"  ";
		gotoXY(200,22+i);
		cout<<"  ";
		gotoXY(200,32+i);
		cout<<"  ";
	}
	
	TextColor(TrangDo);
	gotoXY(70,2);
	cout<<"DANH SACH VAT TU TRONG KHO";
	//===============
	//DANH MUC
	gotoXY(9,6);
	cout<<"MA VAT TU";
	gotoXY(54,6);
	cout<<"TEN VAT TU";
	gotoXY(106,6);
	cout<<"DON VI TINH";
	gotoXY(139,6);
	cout<<"SO LUONG TON";
	
	
	TextColor(TrangDoNhat);
	gotoXY(167,5);
	cout<<"                          ";
	gotoXY(167,6);
	cout<<"                          ";
	gotoXY(167,7);
	cout<<"                          ";
	gotoXY(167,8);
	cout<<"                          ";
	gotoXY(167,9);
	cout<<"                          ";
	gotoXY(172,7);
	cout<<"HUONG DAN SU DUNG";
	//HUONG DAN SU DUNG
	TextColor(TrangXanhLa);
	int ve = 14;
	for(int i=0; i<=4; i++)
	{
		gotoXY(165,ve+i);
		cout<<"                              ";
		
		gotoXY(165,9+ve+i);
		cout<<"                              ";
	
		gotoXY(165,18+ve+i);
		cout<<"                              ";
	}
	
	
	
	

	gotoXY(169,16);
	cout<<"ARROW LEFT : SANG TRAI";
	gotoXY(168,25);	
	cout<<"ARROW RIGHT : SANG PHAI";
	gotoXY(167,34);
	cout<<"ESC : RA GIAO DIEN CHINH";
	
	
	char keyinvt=77;
	int vitriinvt = 1;
	int sotrang,sovtsein;
	
	//IN BANG KHOI TAO
	
	
	
	if(slvt%32==0)
	{
		sotrang = slvt/32;
	}
	else if(slvt%32 != 0)
	{
		sotrang = slvt/32 + 1;
	}
	while(1)
	{
				//XOA DU LIEU TRONG KHUNG
				if(keyinvt == 77 || keyinvt == 75)
				{
					TextColor(TrangXoa);
					for(int i=0; i<32; i++)
					{
						gotoXY(5,9+i);
						cout<<"          ";
						gotoXY(39,9+i);
						cout<<"                                                 ";
						gotoXY(110,9+i);
						cout<<"          ";
						gotoXY(139,9+i);
						cout<<"          ";
					}
					gotoXY(136,42);
					cout<<"          ";
					//=================
					//IN DANH SACH VAT TU
					if(vitriinvt == sotrang)
					{
						sovtsein = slvt;
					
					}
					else if(vitriinvt != sotrang)
					{
						sovtsein = 32;
					}
					TextColor(DenTrang);
					for(int i=(vitriinvt-1)*32; i<sovtsein; i++)
					{
						gotoXY(5,9+i-(vitriinvt-1)*32);
						cout<<tam[i]->MAVT;
						gotoXY(39,9+i-(vitriinvt-1)*32);
						cout<<tam[i]->TENVT;
						gotoXY(110,9+i-(vitriinvt-1)*32);
						cout<<tam[i]->DVT;
						gotoXY(139,9+i-(vitriinvt-1)*32);
						cout<<tam[i]->SOLT;
					}
					gotoXY(144,41);
					cout<<"Trang : "<<vitriinvt;
				}
				
				keyinvt = getch();
				if(keyinvt == -32)
				{
					keyinvt = getch();
					if(keyinvt == 77)//SANG PHAI
					{
						if(vitriinvt < sotrang)
						{
							vitriinvt++;
						}
						else if(vitriinvt == sotrang)
						{
							vitriinvt = 1;
						}
					}
					else if(keyinvt == 75)//SANG TRAI
					{
						if(vitriinvt > 1)
						{
							vitriinvt--;
						}
						else if(vitriinvt == 1)
						{
							vitriinvt = sotrang;
						}
					}
				}
				else if(keyinvt == 27)
				{
					system("cls");
					break;
				}
	}
	

	
	//===============================================	
}

//======== TAO KHUNG NHAP VAT TU ========
void TaoKhungNhapVatTu(int &Vitri)
{
	char key_press;
	
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
			gotoXY(13,i);
			cout<<"                       ";
		}
		gotoXY(19,8);
		cout<<"THEM VAT TU";
		color = TrangBac;
		
		
		if(Vitri == 2)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=6; i<=10; i++)
		{
			gotoXY(39,i);
			cout<<"                       ";
		}
		gotoXY(45,8);
		cout<<"XOA VAT TU";
		color = TrangBac;
		
		
		if(Vitri == 3)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=12; i<=16; i++)
		{
			gotoXY(13,i);
			cout<<"                       ";
		}
		gotoXY(16,14);
		cout<<"HIEU CHINH VAT TU";
		color = TrangBac;
		
		if(Vitri == 4)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=12; i<=16; i++)
		{
			gotoXY(39,i);
			cout<<"                       ";
		}
		gotoXY(47,14);
		cout<<"BO CHON";
		color = TrangBac;
		
		if(Vitri == 5)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=18; i<=22; i++)
		{
			gotoXY(26,i);
			cout<<"                       ";
		}
		gotoXY(28,20);
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
				        		Vitri = 2;
							}
							else if(Vitri == 2)
				        	{
				        		Vitri = 1;
							}
							else if(Vitri == 3)
				        	{
				        		Vitri = 4;
							}
							else if(Vitri == 4)
				        	{
				        		Vitri = 3;
							}
							else if(Vitri == 5)
							{
								Vitri = 3;
							}
						}
						//NHAN QUA PHAI
						else if(key_press == 77)
				        {
				        	if(Vitri == 1)
							{
								Vitri = 2;
							}
				        	else if(Vitri == 2)
				        	{
				        		Vitri = 1;
							}
							else if(Vitri == 3)
				        	{
				        		Vitri = 4;
							}
							else if(Vitri == 4)
				        	{
				        		Vitri = 3;
							}
							else if(Vitri == 5)
							{
								Vitri = 4;
							}
						}
						//NHAN XUONG
						else if(key_press == 80)
				        {
				        	if(Vitri == 1 || Vitri == 3)
				        	{
				        		Vitri+=2;
							}
							else if(Vitri == 2)
				        	{
				        		Vitri=4;
							}
							else if(Vitri == 4)
							{
								Vitri = 5;
							}
							else if(Vitri == 5)
				        	{
				        		Vitri=1;
							}
						}
						//NHAN LEN
						else if(key_press == 72)
						{
							if(Vitri == 1 || Vitri == 2)
				        	{
				        		Vitri = 5;
							}
							else if(Vitri == 3 || Vitri == 4)
				        	{
				        		Vitri-=2;
							}
							else if(Vitri == 5)
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




void TaoKhungDanhSachVatTu()
{
	system("cls");
	system("color f0");

	TextColor(DoTrang);
	gotoXY(75,6);
	cout<<"TIM KIEM :";
	TextColor(TrangDo);
	gotoXY(125,2);
	cout<<"DANH SACH VAT TU TRONG KHO";
	gotoXY(24,2);
	cout<<"CHUC NANG CHUONG TRINH";
	
	gotoXY(78,10);
	cout<<"MA VAT TU";
	gotoXY(115,10);
	cout<<"TEN VAT TU";
	gotoXY(153,10);
	cout<<"DON VI TINH";
	gotoXY(182,10);
	cout<<"SO LUONG TON";


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
		gotoXY(70,8);
		cout<<"                                                                 ";
		gotoXY(135,8);
		cout<<"                                                                 ";
		
		
		//THANH NGANG BETWEEN DUOI
		gotoXY(70,12);
		cout<<"                                                                 ";
		gotoXY(135,12);
		cout<<"                                                                 ";
		//THANH NGANG CHUC NANG
		gotoXY(2,24);
		cout<<"                                                                     ";
		gotoXY(2,37);
		cout<<"                                                                     ";
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
		
		gotoXY(70,1+i);
		cout<<"  ";
		gotoXY(70,12+i);
		cout<<"  ";
		gotoXY(70,22+i);
		cout<<"  ";
		gotoXY(70,32+i);
		cout<<"  ";
	}
	//THANH 3
	for(int i=0; i<=8; i++)
	{
		
		gotoXY(93,8+i);
		cout<<"  ";
		gotoXY(93,17+i);
		cout<<"  ";
		gotoXY(93,26+i);
		cout<<"  ";
		gotoXY(93,34+i);
		cout<<"  ";
	}
	//THANH 4
	for(int i=0; i<=8; i++)
	{
		gotoXY(147,8+i);
		cout<<"  ";
		gotoXY(147,17+i);
		cout<<"  ";
		gotoXY(147,26+i);
		cout<<"  ";
		gotoXY(147,34+i);
		cout<<"  ";
	}
	//THANH 5

		for(int i=0; i<=8; i++)
	{
		gotoXY(174,8+i);
		cout<<"  ";
		gotoXY(174,17+i);
		cout<<"  ";
		gotoXY(174,26+i);
		cout<<"  ";
		gotoXY(174,34+i);
		cout<<"  ";
	}
	
	
//	THANH 6
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(200,i+1);
		cout<<"  ";
		gotoXY(200,12+i);
		cout<<"  ";
		gotoXY(200,22+i);
		cout<<"  ";
		gotoXY(200,32+i);
		cout<<"  ";
	}

	
}

void HuongDanSuDungVatTu1()
{
	TextColor(TrangXanhLa);
	for(int i=0; i<3; i++)
	{
		gotoXY(7,39+i);
		cout<<"                          ";
		gotoXY(39,39+i);
		cout<<"                          ";
	}
	gotoXY(10,40);
	cout<<"ENTER/LEFT : QUA TRAI";
	gotoXY(42,40);	
	cout<<"UP/DOWN : LEN/XUONG";
}


void XoaHuongDanSuDungVatTu1()
{
	TextColor(TrangXoa);
	for(int i=0; i<3; i++)
	{
		gotoXY(7,39+i);
		cout<<"                          ";
		gotoXY(39,39+i);
		cout<<"                          ";
	}
}

void HuongDanSuDungVatTu2()
{
	TextColor(TrangXanhLa);
	for(int i=0; i<3; i++)
	{
		gotoXY(7,39+i);
		cout<<"                  ";
		gotoXY(30,39+i);
		cout<<"                                  ";
	}
	gotoXY(10,40);
	cout<<"ENTER : CHON";
	gotoXY(32,40);	
	cout<<"LEFT/RIGHT/UP/DOWN : DI CHUYEN";
}

void XoaHuongDanSuDungVatTu2()
{
	TextColor(TrangXoa);
	for(int i=0; i<3; i++)
	{
		gotoXY(7,39+i);
		cout<<"                  ";
		gotoXY(30,39+i);
		cout<<"                                  ";
	}

}

void HuongDanHieuChinhVatTu1()
{
	TextColor(TrangXanhLa);
	for(int i=0; i<3; i++)
	{
		gotoXY(36,39+i);
		cout<<"              ";
		gotoXY(53,39+i);
		cout<<"              ";
	}
	gotoXY(38,40);
	cout<<"ENTER: LUU";
	gotoXY(57,40);
	cout<<"F1: HUY";
}

void XoaHuongDanHieuChinhVatTu1()
{
	TextColor(TrangXoa);
	for(int i=0; i<3; i++)
	{
		gotoXY(36,39+i);
		cout<<"              ";
		gotoXY(53,39+i);
		cout<<"              ";
	}
}


void HuongDanSuDungNhanVien1(int doronghuongdan)
{
	TextColor(TrangXanhLa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"                          ";
		gotoXY(32,doronghuongdan+i);
		cout<<"                          ";
	}
	gotoXY(7,doronghuongdan+1);
	cout<<"ENTER/LEFT : QUA TRAI";
	gotoXY(36,doronghuongdan+1);	
	cout<<"UP/DOWN : LEN/XUONG";
}

void XoaHuongDanSuDungNhanVien1(int doronghuongdan)
{
	TextColor(TrangXoa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"                          ";
		gotoXY(32,doronghuongdan+i);
		cout<<"                          ";
	}
}

void HuongDanSuDungNhanVien2(int doronghuongdan)
{
	TextColor(TrangXanhLa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"                  ";
		gotoXY(24,doronghuongdan+i);
		cout<<"                                  ";
	}
	gotoXY(7,doronghuongdan+1);
	cout<<"ENTER : CHON";
	gotoXY(26,doronghuongdan+1);	
	cout<<"LEFT/RIGHT/UP/DOWN : DI CHUYEN";
}

void XoaHuongDanSuDungNhanVien2(int doronghuongdan)
{
	TextColor(TrangXoa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"                  ";
		gotoXY(24,doronghuongdan+i);
		cout<<"                                  ";
	}
}

void HuongDanHieuChinhNhanVien1()
{
	TextColor(TrangXanhLa);
	for(int i=0; i<3; i++)
	{
		gotoXY(32,39+i);
		cout<<"               ";
		gotoXY(48,39+i);
		cout<<"           ";
	}
	gotoXY(34,40);
	cout<<"ENTER: LUU";
	gotoXY(50,40);
	cout<<"F1: HUY";
}

void XoaHuongDanHieuChinhNhanVien1()
{
	TextColor(TrangXoa);
	for(int i=0; i<3; i++)
	{
		gotoXY(32,39+i);
		cout<<"               ";
		gotoXY(48,39+i);
		cout<<"           ";
	}
}



void HuongDanSuDungChiTietHoaDon1(int doronghuongdan)
{
	TextColor(TrangXanhLaDam);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"              ";
		gotoXY(20,doronghuongdan+i);
		cout<<"                      ";
	}
	gotoXY(5,doronghuongdan+1);
	cout<<"ENTER : CHON";
	gotoXY(21,doronghuongdan+1);	
	cout<<"L/R/U/D : DI CHUYEN";
}

 void XoaHuongDanSuDungChiTietHoaDon1(int doronghuongdan)
 {
 		TextColor(TrangXoa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"              ";
		gotoXY(20,doronghuongdan+i);
		cout<<"                      ";
	}
 }
 
void HuongDanSuDungChiTietHoaDon2(int doronghuongdan)
 {
 	TextColor(TrangXanhLaDam);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"              ";
		gotoXY(20,doronghuongdan+i);
		cout<<"                      ";
	}
	gotoXY(5,doronghuongdan+1);
	cout<<"ENTER : CHON";
	gotoXY(21,doronghuongdan+1);	
	cout<<"LEFT : THOAT H.CHINH";
 }

void XoaHuongDanSuDungChiTietHoaDon2(int doronghuongdan)
 {
 	TextColor(TrangXoa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"              ";
		gotoXY(20,doronghuongdan+i);
		cout<<"                      ";
	}
 }

void HuongDanSuDungChiTietHoaDon3(int doronghuongdan)
 {
 	TextColor(TrangXanhLaDam);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"              ";
		gotoXY(20,doronghuongdan+i);
		cout<<"                      ";
	}
	gotoXY(5,doronghuongdan+1);
	cout<<"ENTER : CHON";
	gotoXY(23,doronghuongdan+1);	
	cout<<"LEFT : THOAT XOA";
 }

void HuongDanSuDungTraHang1(int doronghuongdan)
{
	TextColor(TrangXanhLa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"                       ";
		gotoXY(29,doronghuongdan+i);
		cout<<"                        ";
	}
	gotoXY(5,doronghuongdan+1);
	cout<<"ENTER/LEFT : QUA TRAI";
	gotoXY(31,doronghuongdan+1);	
	cout<<"UP/DOWN : LEN/XUONG";
}

void XoaHuongDanSuDungTraHang1(int doronghuongdan)
{
	TextColor(TrangXoa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"                       ";
		gotoXY(29,doronghuongdan+i);
		cout<<"                        ";
	}
}

void HuongDanSuDungTraHang2(int doronghuongdan)
{
	TextColor(TrangXanhLa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"              ";
		gotoXY(20,doronghuongdan+i);
		cout<<"                                 ";
	}
	gotoXY(5,doronghuongdan+1);
	cout<<"ENTER : CHON";
	gotoXY(21,doronghuongdan+1);	
	cout<<"RIGHT/LEFT/UP/DOWN : DI CHUYEN";
}

void XoaHuongDanSuDungTraHang2(int doronghuongdan)
{
	TextColor(TrangXoa);
		for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"              ";
		gotoXY(20,doronghuongdan+i);
		cout<<"                                 ";
	}
}

void HuongDanSuDungTraHang3(int doronghuongdan)
{
	TextColor(TrangXanhLa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"                    ";
		gotoXY(26,doronghuongdan+i);
		cout<<"           ";
	}
	gotoXY(5,doronghuongdan+1);
	cout<<"ENTER/LEFT: Q.TRAI";
	gotoXY(27,doronghuongdan+1);	
	cout<<"U/D: L/X";
}

void XoaHuongDanSuDungTraHang3(int doronghuongdan)
{
	TextColor(TrangXoa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"                    ";
		gotoXY(26,doronghuongdan+i);
		cout<<"           ";
	}
}

void HuongDanSuDungTraHang4(int doronghuongdan)
{
	TextColor(TrangXanhLa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"               ";
		gotoXY(21,doronghuongdan+i);
		cout<<"                ";
	}
	gotoXY(6,doronghuongdan+1);
	cout<<"ENTER: CHON";
	gotoXY(23,doronghuongdan+1);	
	cout<<"UP/DOWN: L/X";
}

void XoaHuongDanSuDungTraHang4(int doronghuongdan)
{
	TextColor(TrangXoa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"               ";
		gotoXY(21,doronghuongdan+i);
		cout<<"                ";
	}
}

void HuongDanSuDungInHoaDon1(int doronghuongdan)
{
	TextColor(TrangXanhLa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"                       ";
		gotoXY(29,doronghuongdan+i);
		cout<<"                        ";
	}
	gotoXY(10,doronghuongdan+1);
	cout<<"ENTER : CHON";
	gotoXY(31,doronghuongdan+1);	
	cout<<"UP/DOWN : LEN/XUONG";
}

void XoaHuongDanSuDungInHoaDon1(int doronghuongdan)
{
	TextColor(TrangXoa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"                       ";
		gotoXY(29,doronghuongdan+i);
		cout<<"                        ";
	}
}

void HuongDanSuDungInHoaDon2(int doronghuongdan)
{
	TextColor(TrangXanhLa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"             ";
		gotoXY(19,doronghuongdan+i);
		cout<<"                       ";
	}
	gotoXY(5,doronghuongdan+1);
	cout<<"ENTER: CHON";
	gotoXY(21,doronghuongdan+1);	
	cout<<"UP/DOWN : LEN/XUONG";
}

void HuongDanSuDungLietKeHoaDon1(int doronghuongdan)
{
	TextColor(TrangXanhLa);
	for(int i=0; i<3; i++)
	{
		gotoXY(4,doronghuongdan+i);
		cout<<"              ";
		gotoXY(20,doronghuongdan+i);
		cout<<"             ";
	}
	gotoXY(6,doronghuongdan+1);
	cout<<"ENTER/LEFT";
	gotoXY(23,doronghuongdan+1);	
	cout<<"UP/DOWN";
}

void XoaHuongDanSuDungLietKeHoaDon1(int doronghuongdan)
{
	TextColor(XanhXanh);
	gotoXY(6,doronghuongdan+1);
	cout<<"ENTER/LEFT";
	TextColor(TrangXanhLa);
	gotoXY(9,doronghuongdan+1);
	cout<<"ENTER";
}





//============ MENU THEM, XOA, SUA VAT TU ==============
void MenuThemVatTu(TREE_VAT_TU &t, TREE_VAT_TU tam[], int &slvt,DS_NHAN_VIEN dsnv)
{
	clrscr();
	int Vitrikhoitao =0;
	system("color f0");
	TaoKhungDanhSachVatTu();
	TaoKhungNhapVatTu(Vitrikhoitao);
	TextColor(DenTrang);
	

	Vitrikhoitao = 1;
	int vtbatdau,vtketthuc,SoLuongSoSanh,vthighlight,vthienthi,vtvtht,oldplace,dorong=10,Vitricnvt;
	string ChuoiSearch;
	int x_search=85,y_search=6;
	char key_press;
	int sokytudanhapsearch =0;
	
		//KHOI TAO BAN DAU
	
	vtbatdau=0,vthighlight=0,vtvtht,oldplace=13;
		
	if(slvt <= 30)
	{
		vtketthuc = slvt;
	}
	else if(slvt > 30)
	{
		vtketthuc = 30;
	}
	TextColor(DenTrang);
	for(int i=vtbatdau; i<vtketthuc; i++)
	{
		if(i == vthighlight)
		{
			TextColor(TrangDoNhat);
			vtvtht = i;
			vthienthi = i;
		}
			gotoXY(75,oldplace+i);
			cout<<tam[i]->MAVT;
			gotoXY(103,oldplace+i);
			cout<<tam[i]->TENVT;		
			gotoXY(157,oldplace+i);
			cout<<tam[i]->DVT;
			gotoXY(186,oldplace+i);
			cout<<tam[i]->SOLT;	
		if(i == vthighlight)
		{
			TextColor(DenTrang);
		}
	}
	SoLuongSoSanh = slvt;
	while(1)//DANH SACH VAT TU
	{
		HuongDanSuDungVatTu1();
		//BAT PHIM
		ShowConsoleCursor(true);
		gotoXY(85+sokytudanhapsearch,6);
			key_press=getch();
		if(key_press == 8)//Kiem neu la phim nhan la backspace thi se lui nguoc con tro lai va bien ki tu vua nhap vao la khoang trang
				{
					if(sokytudanhapsearch != 0)
						{
							TextColor(DenTrang);
							gotoXY(x_search,y_search);
							key_press = 32;//gan ki tu vua nhap vao thanh khoang trang
							cout<<"\b";//Lenh lui nguoc con tro chi vi
							cout<<key_press;//cout ra ki tu khoang trang
							cout<<"\b";
							sokytudanhapsearch--;//lui lai 1 don vi
							ChuoiSearch.erase(sokytudanhapsearch,1);
							x_search--;
																
							//XOA DU LIEU CU
							TextColor(TrangXoa);
							for(int i=vtbatdau; i<vtketthuc;i++)						
							{
								gotoXY(75,oldplace+i);
								cout<<"             ";
								gotoXY(103,oldplace+i);
								cout<<"                                      ";	
								gotoXY(157,oldplace+i);
								cout<<"        ";
								gotoXY(186,oldplace+i);
								cout<<"           "; 
							}
							TextColor(DenTrang);
							vthighlight = 0;
							vtbatdau = 0;
							oldplace = 13;
							if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
							{
								if(slvt <= 30)
								{
									vtketthuc = slvt;
								}
							else if(slvt > 30)
								{
									vtketthuc = 30;
								}
								TextColor(DenTrang);
							for(int i=vtbatdau; i<vtketthuc; i++)
								{
									if(i == vthighlight)
									{
										TextColor(TrangDoNhat);
										vtvtht = i;
										vthienthi = i;
									}
									gotoXY(75,oldplace+i);
									cout<<tam[i]->MAVT;
									gotoXY(103,oldplace+i);
									cout<<tam[i]->TENVT;		
									gotoXY(157,oldplace+i);
									cout<<tam[i]->DVT;
									gotoXY(186,oldplace+i);
									cout<<tam[i]->SOLT;
									if(i == vthighlight)
										{
											TextColor(DenTrang);
										}
								}
								SoLuongSoSanh = slvt;
							}
							else if(ChuoiSearch != "")
								{
									TextColor(DenTrang);
									vtketthuc=0;
									SoLuongSoSanh = 0;
								for(int i=vtbatdau,j=0;j < slvt;)
									{
										if(tam[j]->MAVT.find(ChuoiSearch) != -1)
										{
											if(i < 30)
												{
													if(i == vthighlight)
														{
															TextColor(TrangDoNhat);
															vtvtht= j;
															vthienthi = i;
														}
															gotoXY(75,oldplace+i);
															cout<<tam[j]->MAVT;
															gotoXY(103,oldplace+i);
															cout<<tam[j]->TENVT;		
															gotoXY(157,oldplace+i);
															cout<<tam[j]->DVT;
															gotoXY(186,oldplace+i);
															cout<<tam[j]->SOLT;
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
		
		else if((key_press >=97 && key_press<=122 || key_press>=65 && key_press<=90  || key_press>=48 && key_press<=57 || key_press == 95 ) && sokytudanhapsearch<dorong)
											{
												//XOA DU LIEU CU
												TextColor(TrangXoa);
												for(int i=vtbatdau; i<vtketthuc;i++)						
												{
													gotoXY(75,oldplace+i);
													cout<<"             ";
													gotoXY(103,oldplace+i);
													cout<<"                                      ";	
													gotoXY(157,oldplace+i);
													cout<<"        ";
													gotoXY(186,oldplace+i);
													cout<<"           "; 
												}
												if(key_press>=97 && key_press<=122)
												{
													key_press-=32;
												}
												gotoXY(x_search,y_search);
												TextColor(DenTrang);
												cout<<key_press;
												ChuoiSearch+=key_press;
												sokytudanhapsearch++;//tang len 1 don vi
												x_search++;
												vthighlight = 0;
												vtbatdau=0;
												vtketthuc = 0;
												oldplace = 13;
												SoLuongSoSanh = 0;
												vtketthuc=0;
												TextColor(DenTrang);
												for(int i=vtbatdau,j=0;j < slvt;)
													{
														if(tam[j]->MAVT.find(ChuoiSearch) != -1)
														{
															if(i < 30)
															{
																if(i == vthighlight)
																	{
																		TextColor(TrangDoNhat);
																		vtvtht = j;
																		vthienthi = i;
																	}
																	gotoXY(75,oldplace+i);
																	cout<<tam[j]->MAVT;
																	gotoXY(103,oldplace+i);
																	cout<<tam[j]->TENVT;		
																	gotoXY(157,oldplace+i);
																	cout<<tam[j]->DVT;
																	gotoXY(186,oldplace+i);
																	cout<<tam[j]->SOLT;
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
		
		
		else if(key_press == -32)
		{
			key_press = getch();
				if(key_press == 72)//NHAN LEN
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
									gotoXY(75,oldplace+i);
									cout<<"             ";
									gotoXY(103,oldplace+i);
									cout<<"                                      ";	
									gotoXY(157,oldplace+i);
									cout<<"        ";
									gotoXY(186,oldplace+i);
									cout<<"           "; 
								}
								vtbatdau--;
								vtketthuc--;
								vthighlight--;
								oldplace++;
							}
							
							if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
							{
								TextColor(DenTrang);
								for(int i=vtbatdau; i<vtketthuc; i++)
									{
										if(i == vthighlight)
										{
											TextColor(TrangDoNhat);
											vtvtht = i;
											vthienthi = i;
										}
										gotoXY(75,oldplace+i);
										gotoXY(75,oldplace+i);
										cout<<tam[i]->MAVT;
										gotoXY(103,oldplace+i);
										cout<<tam[i]->TENVT;		
										gotoXY(157,oldplace+i);
										cout<<tam[i]->DVT;
										gotoXY(186,oldplace+i);
										cout<<tam[i]->SOLT;							
										if(i == vthighlight)
										{
											TextColor(DenTrang);
										}
									}
							}
							else if(ChuoiSearch != "")
							{
								TextColor(DenTrang);
								int j=0;
								int i = 0;
								while(j < slvt)
								{
									if(tam[j]->MAVT.find(ChuoiSearch) != -1)
									{
										if(i>=vtbatdau && i<vtketthuc)
										{
											if(i == vthighlight)
											{
												TextColor(TrangDoNhat);
												vtvtht = j;
												vthienthi = i;
											}
												gotoXY(75,oldplace+i);
												cout<<tam[j]->MAVT;
												gotoXY(103,oldplace+i);
												cout<<tam[j]->TENVT;		
												gotoXY(157,oldplace+i);
												cout<<tam[j]->DVT;
												gotoXY(186,oldplace+i);
												cout<<tam[j]->SOLT;
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
					
				else if(key_press == 80)//NHAN XUONG
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
									gotoXY(75,oldplace+i);
									cout<<"             ";
									gotoXY(103,oldplace+i);
									cout<<"                                      ";	
									gotoXY(157,oldplace+i);
									cout<<"        ";
									gotoXY(186,oldplace+i);
									cout<<"           "; 
							}
							vtbatdau++;
							vtketthuc++;
							vthighlight++;
							oldplace--;
						}
						
						if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
						{
							TextColor(DenTrang);
							for(int i=vtbatdau; i<vtketthuc; i++)
							{
								if(i == vthighlight)
								{
									TextColor(TrangDoNhat);
									vtvtht = i;
									vthienthi = i;
								}
								gotoXY(75,oldplace+i);
								cout<<tam[i]->MAVT;
								gotoXY(103,oldplace+i);
								cout<<tam[i]->TENVT;		
								gotoXY(157,oldplace+i);
								cout<<tam[i]->DVT;
								gotoXY(186,oldplace+i);
								cout<<tam[i]->SOLT;					
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
							TextColor(DenTrang);
							while(j < slvt)
							{
								if(tam[j]->MAVT.find(ChuoiSearch) != -1)
								{
									if(i>=vtbatdau && i<vtketthuc)
									{
										if(i == vthighlight)
										{
											TextColor(TrangDoNhat);
											vtvtht = j;
											vthienthi = i;
										}
											gotoXY(75,oldplace+i);
											cout<<tam[j]->MAVT;
											gotoXY(103,oldplace+i);
											cout<<tam[j]->TENVT;		
											gotoXY(157,oldplace+i);
											cout<<tam[j]->DVT;
											gotoXY(186,oldplace+i);
											cout<<tam[j]->SOLT;
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
				//====================	
			//NHAN QUA TRAI	
			//NHAN ENTER
		else if(key_press == 75)
		{
			Vitrikhoitao = 1;
			batphimchucnangthemvattu: //NHAN CHUC NANG THEM VAT TU
			XoaHuongDanSuDungVatTu1();//XOA HUONG DAN SU DUNG 1
			HuongDanSuDungVatTu2();//HUONG DAN SU DUNG 2
			ShowConsoleCursor(false);
			TaoKhungNhapVatTu(Vitrikhoitao);
			//======= 1.THEM VAT TU VAO TRONG DANH SACH ==============
			if(Vitrikhoitao == 1)
			{
				XoaHuongDanSuDungVatTu2();
				string MAVTT,TENVTT,DVTT,SLTT,chuoi;
				char keythem;
				int lengthmavt=0,lengthtenvt=0,lenghthdvt=0,lengthslt=0;
				int Vitrithem=1,VitriMa=27,VitriTen=28,VitriDV=33,VitriSL=30;
				int x,y,sokytudanhap=0,dorong=0;
				
				TextColor(TrangDo);
				gotoXY(16,27);
				cout<<"NHAP THONG TIN VAT TU";
				
				TextColor(DoTrang);
				gotoXY(7,29);
				cout<<"MA VAT TU : ";

				gotoXY(7,31);
				cout<<"TEN VAT TU : ";
			
				gotoXY(7,33);
				cout<<"DON VI TINH : ";
				
				gotoXY(7,35);
				cout<<"SO LUONG TON : ";
				TextColor(DenTrang);
				gotoXY(18,29);
				while(1)
				{
					//TRUOC KHI NHAP CHUOI
					themthongtinvattu:
					ShowConsoleCursor(true);
					if(Vitrithem == 1)//MAVT
					{
						chuoi = MAVTT;
						sokytudanhap = lengthmavt;
						x = 18 + sokytudanhap;
						y = 29;
						dorong = 10;
						keythem = ChuSoVa_(chuoi,dorong,x,y,sokytudanhap);
					}
					else if(Vitrithem == 2)//TEN VAT TU
					{
						chuoi = TENVTT;
						sokytudanhap = lengthtenvt;
						x = 19 + sokytudanhap;
						y = 31;
						dorong = 50;
						keythem = ChuSoDauCachVa_(chuoi,dorong,x,y,sokytudanhap);
					}
					else if(Vitrithem == 3)//DON VI TINH
					{
						chuoi = DVTT;
						sokytudanhap = lenghthdvt;
						x = 20 + sokytudanhap;
						y = 33;
						dorong = 10;
						keythem = ChuSoDauCachVa_(chuoi,dorong,x,y,sokytudanhap);
					}
					else if(Vitrithem == 4)//SO LUONG TON
					{
						chuoi = SLTT;
						sokytudanhap = lengthslt;
						x = 21 + sokytudanhap;
						y = 35;
						dorong = 6;
						keythem = SoVaDauCham(chuoi,dorong,x,y,sokytudanhap);
					}
					//BAT PHIM KI TU NHAP VAO
					//CAP NHAT LAI CHUOI SAU KHI NHAP
					if(Vitrithem == 1)
					{
						MAVTT = chuoi;
						lengthmavt = sokytudanhap;
					}
					else if(Vitrithem == 2)
					{
						TENVTT = chuoi;
						lengthtenvt = sokytudanhap;
					}
					else if(Vitrithem == 3)
					{
						DVTT = chuoi;
						lenghthdvt = sokytudanhap;
					}
					else if(Vitrithem == 4)
					{
						SLTT = chuoi;
						lengthslt = sokytudanhap;
					}
					
					if(keythem == -32)//NHAN PHIM DIEU KHIEN
					{
						keythem = getch();
						if(keythem == 72)//NHAN LEN
						{
							if(Vitrithem == 1)
							{
								Vitrithem = 4;
							}
							else if(Vitrithem != 1)
							{
								Vitrithem--;
							}
						}
						else if(keythem == 80)//NHAN XUONG
						{
							if(Vitrithem == 4)
							{
								Vitrithem = 1;
							}
							else if(Vitrithem !=4)
							{
								Vitrithem++;
							}
						}
					}
					else if(keythem == 13)//NHAN ENTER
					{
						ShowConsoleCursor(false);
							if(MAVTT.length() == 0 || TENVTT.length() == 0 || DVTT.length() == 0 || SLTT.length() == 0)
							{
								TextColor(TrangDoNhat);
								for(int dhdl=0;dhdl<3; dhdl++)
								{
									gotoXY(20,39+dhdl);
									cout<<"                            ";
								}
								gotoXY(22,40);
								cout<<"DU LIEU KHONG DUOC TRONG";
								getch();
								TextColor(DenTrang);
								for(int dhdl=0;dhdl<3; dhdl++)
								{
									gotoXY(20,39+dhdl);
									cout<<"                            ";
								}
								TextColor(DenTrang);
								goto themthongtinvattu;//DI CHUYEN DEN VI TRI THOAT DE TIEP TUC NHAP THONG TIN VAT TU
							}
						 	if(TimKiem(t,MAVTT) == true)//NEU MA VAT TU TRUNG THI NHAP LAI
						 	{
						 		TextColor(TrangDoNhat);
								for(int dhdl=0;dhdl<3; dhdl++)
								{
									gotoXY(20,39+dhdl);
									cout<<"                            ";
								}
								gotoXY(22,40);
								cout<<"MA VAT TU BI TRUNG";
								getch();
								TextColor(TrangXoa);
								for(int dhdl=0;dhdl<3; dhdl++)
								{
									gotoXY(20,39+dhdl);
									cout<<"                            ";
								}
								TextColor(DenTrang);
								goto themthongtinvattu;//DI CHUYEN DEN VI TRI THOAT DE TIEP TUC NHAP THONG TIN VAT TU
							}
							else//NEU MA VAT TU KHONG TRUNG
							{
								TextColor(TrangDoNhat);
								for(int dhdl=0;dhdl<3; dhdl++)
								{
									gotoXY(20,39+dhdl);
									cout<<"                      ";
								}
									gotoXY(23,39);
									cout<<"BAN CO MUON LUU";
									gotoXY(34,41);
									cout<<"NO";
									TextColor(DoTrang);
									gotoXY(25,41);
									cout<<"YES";
									
									char keylvt;
									int Vitrilvt = 1;
									while(1)
									{
										keylvt = getch();
										if(keylvt == -32)
										{
											keylvt = getch();
											if(keylvt == 75)//QUA TRAI
											{
												if(Vitrilvt == 1)
												{
													Vitrilvt = 2;
													TextColor(TrangDoNhat);
													gotoXY(25,41);
													cout<<"YES";
													TextColor(DoTrang);
													gotoXY(34,41);
													cout<<"NO";
												}
												else if(Vitrilvt == 2)
												{
														Vitrilvt = 1;
														TextColor(DoTrang);
														gotoXY(25,41);
														cout<<"YES";
														TextColor(TrangDoNhat);
														gotoXY(34,41);
														cout<<"NO";
												}
											}
											else if(keylvt == 77)//QUA PHAI
											{
												if(Vitrilvt == 1)
												{
													Vitrilvt = 2;
													TextColor(TrangDoNhat);
													gotoXY(25,41);
													cout<<"YES";
													TextColor(DoTrang);
													gotoXY(34,41);
													cout<<"NO";
												}
												else if(Vitrilvt == 2)
												{
														Vitrilvt = 1;
														TextColor(DoTrang);
														gotoXY(25,41);
														cout<<"YES";
														TextColor(TrangDoNhat);
														gotoXY(34,41);
														cout<<"NO";
												}
											}
										}
										else if(keylvt == 13)//NEU LA PHIM ENTER
										{
											//=== XOA BANG CHON YES NO
												TextColor(DenTrang);
												for(int dhdl=0;dhdl<3; dhdl++)
												{
													gotoXY(20,39+dhdl);
													cout<<"                      ";
												}
												TextColor(DenTrang);
											//==========
											if(Vitrilvt == 1)//NEU LA YES THI LUU VAT TU
												{
													if(slvt <= 30)
													{
														vtketthuc = slvt;
													}
													else if(slvt > 30)
													{
														vtketthuc = 30;
													}
													gotoXY(85,6);
													TextColor(TrangXoa);
													cout<<ChuoiSearch;
												
													//XOA DU LIEU NHAP VAO
													for(int xdlnv=0; xdlnv<9; xdlnv++)
													{
														gotoXY(5,27+xdlnv);
														cout<<"                                                                ";
													}
													TextColor(DenTrang);
													
													x_search=85;
													ChuoiSearch = "";
													sokytudanhapsearch =0;
													vtbatdau=0,vthighlight=0,oldplace=13;
													
													//THEM VAT TU VAO TRONG CAY
													TREE_VAT_TU p = Khoi_tao_node_vat_tu();
													
													p->MAVT = MAVTT;
													p->TENVT = TENVTT;
													p->DVT = DVTT;
													
													p->SOLT = atof(SLTT.c_str());
													Insert_node(t,p);
													//======== THEM VAT TU MOI VAO DANH SACH MANG CO THU TU ==========
//														tam[slvt] = new Vat_tu;
 														slvt++;
														
																int k;
																for(k=slvt-1; k>0; k--)
																{
																	if(p->MAVT > tam[k-1]->MAVT)
																		{
																			tam[k] = tam[k-1];
																		}
																	else if(p->MAVT < tam[k-1]->MAVT)
																		{
																			break;
																		}
																}
																tam[k] = NULL;
																tam[k] = p;
																p = NULL;
																delete p;	
													//====== XOA DU LIEU TRONG BANG =======
												TextColor(TrangXoa);
												for(int i=vtbatdau; i<vtketthuc;i++)						
												{
													gotoXY(75,oldplace+i);
													cout<<"             ";
													gotoXY(103,oldplace+i);
													cout<<"                                      ";	
													gotoXY(157,oldplace+i);
													cout<<"        ";
													gotoXY(186,oldplace+i);
													cout<<"           "; 
												}
												TextColor(DenTrang);
												vthighlight = k;
												if(k <= vtbatdau)//XAC DINH VI TRI VAT TU VUA THEM
												{
													vtketthuc-=vtbatdau-k;
													oldplace+=vtbatdau-k;
													vtbatdau =k;
													
												}
												else if(k >= vtketthuc)
												{
													vtbatdau+= (k-vtketthuc)+1;
													oldplace-=(k-vtketthuc)+1;
													vtketthuc=k+1;
												}
													
													TextColor(DenTrang);
													for(int i=vtbatdau; i<vtketthuc; i++)
													{
														if(i == vthighlight)
														{
															TextColor(TrangDoNhat);
															vtvtht = i;
														}
															gotoXY(75,oldplace+i);
															cout<<tam[i]->MAVT;
															gotoXY(103,oldplace+i);
															cout<<tam[i]->TENVT;		
															gotoXY(157,oldplace+i);
															cout<<tam[i]->DVT;
															gotoXY(186,oldplace+i);
															cout<<tam[i]->SOLT;	
														if(i == vthighlight)
														{
															TextColor(DenTrang);
														}
													}
													SoLuongSoSanh = slvt;
												goto batphimchucnangthemvattu;
												}
												else if(Vitrilvt == 2)//NEU LA NO THI KHONG LUU
												{
													goto themthongtinvattu;
												}	
										}
									}
							}
					}
				}
			}
			
			//====== 2.XOA VAT TU TRONG DANH SANH ============
			else if(Vitrikhoitao == 2)//THUC HIEN XOA VAT TU
			{
				char key;
				int Vitrixoa = 1;
				TextColor(TrangDoNhat);
				for(int k = 0; k<=6; k++)
				{
					gotoXY(20,28+k);
					cout<<"                                ";
				}
				
				if(SoLuongSoSanh ==0)
				{
					
						gotoXY(27,31);
						cout<<"DANH SACH DANG RONG";
						getch();
						TextColor(TrangXoa);
						for(int k = 0; k<=6; k++)
						{
							gotoXY(20,28+k);
							cout<<"                                ";
						}
						goto batphimchucnangthemvattu;
				}
				
				if(SoLuongSoSanh != 0)
				{
					if(tam[vtvtht]->TrangThaiLapHoaDon == true)
					{
						gotoXY(25,31);
						cout<<"VAT TU DA LAP HOA DON";
						getch();
						TextColor(TrangXoa);
						for(int k = 0; k<=6; k++)
						{
							gotoXY(20,28+k);
							cout<<"                                ";
						}
						goto batphimchucnangthemvattu;
					}
						gotoXY(26,30);
						cout<<"BAN CO CHAC XOA KHONG";
						TextColor(DoTrang);
						gotoXY(28,33);
						cout<<"CO";
						TextColor(TrangDoNhat);
						gotoXY(39,33);
						cout<<"KHONG";
					while(1)
						{
							//====== THUC THI =======
							key = getch();
							if(key == -32)
							{
								key = getch();
								if(key == 77)//QUA PHAI
								{
									//=== THUC THI
									if(Vitrixoa == 1)
									{
										TextColor(TrangDoNhat);
										gotoXY(28,33);
										cout<<"CO";
										TextColor(DoTrang);
										gotoXY(39,33);
										cout<<"KHONG";
										Vitrixoa = 2;
									}
									else if(Vitrixoa == 2)
									{
										TextColor(DoTrang);
										gotoXY(28,33);
										cout<<"CO";
										TextColor(TrangDoNhat);
										gotoXY(39,33);
										cout<<"KHONG";
										Vitrixoa = 1;
									}
								}	
							
								else if(key == 75)//QUA TRAI
								{
									//=== THUC THI
									if(Vitrixoa == 1)
									{
										TextColor(TrangDoNhat);
										gotoXY(28,33);
										cout<<"CO";
										TextColor(DoTrang);
										gotoXY(39,33);
										cout<<"KHONG";
										Vitrixoa = 2;
									}
									else if(Vitrixoa == 2)
									{
										TextColor(DoTrang);
										gotoXY(28,33);
										cout<<"CO";
										TextColor(TrangDoNhat);
										gotoXY(39,33);
										cout<<"KHONG";
										Vitrixoa = 1;
									}
								}
							}
							
							else if(key == 13)
								{
									if(Vitrixoa == 1)//CHON YES - THUC HIEN XOA
									{
											string XOAVT;
											TextColor(DenTrang);
											XOAVT = tam[vtvtht]->MAVT;
											TextColor(DenTrang);
											for(int k = vtvtht+1; k<slvt; k++)
											{
												tam[k-1] = tam[k];
											}
											tam[slvt-1] = NULL;
											delete tam[slvt-1];
											slvt--;		
											Xoa_Vat_Tu_Khoi_Danh_Sach(t,XOAVT);							
												TextColor(TrangXoa);//XOA DU LIEU TRONG KHUNG
												for(int i=vtbatdau; i<vtketthuc;i++)						
												{
													gotoXY(75,oldplace+i);
													cout<<"             ";
													gotoXY(103,oldplace+i);
													cout<<"                                      ";	
													gotoXY(157,oldplace+i);
													cout<<"        ";
													gotoXY(186,oldplace+i);
													cout<<"           "; 
												}
												
												if(SoLuongSoSanh == vtketthuc)
													{
														if(vtbatdau > 0)
														{
															vtbatdau--;	
															oldplace++;
														}
														
														if(vthighlight == vtketthuc-1)
														{
															vthighlight--;
														}
														vtketthuc--;
													}
												SoLuongSoSanh--;
												
												//IN LAI DU LIEU
												int j=0;
												int i = 0;
												TextColor(DenTrang);
												while(j < slvt)
												{
												
													if(tam[j]->MAVT.find(ChuoiSearch) != -1)
													{
														if(i>=vtbatdau && i<vtketthuc)
														{
															if(i == vthighlight)
															{
																TextColor(TrangDoNhat);
																vtvtht = j;
															}
																gotoXY(75,oldplace+i);
																cout<<tam[j]->MAVT;
																gotoXY(103,oldplace+i);
																cout<<tam[j]->TENVT;		
																gotoXY(157,oldplace+i);
																cout<<tam[j]->DVT;
																gotoXY(186,oldplace+i);
																cout<<tam[j]->SOLT;
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
									TextColor(TrangXoa);//XOA BANG BAN CO CHAC XOA
									for(int k = 0; k<=6; k++)
									{
										gotoXY(20,28+k);
										cout<<"                                ";
									}
									goto batphimchucnangthemvattu;
								}
						
						}//NGOAC HAM WHILE
				}
				//BAT PHIM LUA CHON XOA HOAC KHONG
			}
			
			//=========== 3.THUC HIEN HIEU CHINH THONG TIN VAT TU ===========
			else if(Vitrikhoitao == 3)
			{
				char key_hieuchinh;
				int Vitrihieuchinh = 1;
				string TENVTHC,DVTHC,chuoi;
				char keythem;
				int lengthtenvthc,lengthdvthc;
				int x,y,sokytudanhap=0,dorong=0;
				
				while(1)
				{
					lengthtenvthc=0,lengthdvthc=0;
					TENVTHC="",DVTHC="",chuoi="";
					sokytudanhap=0;
						TextColor(TrangXanhLa);
						if(Vitrihieuchinh == 1)
						{
							TextColor(TrangDoNhat);
						}
						
						for(int i=27; i<=29; i++)
						{
							gotoXY(11,i);
							cout<<"                       ";
						}
						gotoXY(18,28);
						cout<<"TEN VAT TU";
						TextColor(TrangXanhLa);
						
						if(Vitrihieuchinh == 2)
						{
							TextColor(TrangDoNhat);
						}
						for(int i=27; i<=29; i++)
						{
							gotoXY(41,i);
							cout<<"                       ";
						}
						gotoXY(48,28);
						cout<<"DON VI TINH";
						TextColor(TrangXanhLa);
						
						if(Vitrihieuchinh == 3)
						{
							TextColor(TrangDoNhat);
						}
						for(int i=31; i<=33; i++)
						{
							gotoXY(26,i);
							cout<<"                       ";
						}
						gotoXY(34,32);
						cout<<"BO CHON";
						TextColor(TrangXanhLa);
						luachonhieuchinhvattu:
							
						//==== BAT PHIM PHAN HIEU CHINH VAT TU ===========
						key_hieuchinh = getch();
						if(key_hieuchinh == -32)
						{
							key_hieuchinh = getch();
							//QUA TRAI
							if(key_hieuchinh == 75)
								{
									if(Vitrihieuchinh == 1)
									{
										Vitrihieuchinh=2;
									}
									else if(Vitrihieuchinh == 2)
									{
										Vitrihieuchinh=1;
									}
									else if(Vitrihieuchinh == 3)
									{
										Vitrihieuchinh=2;
									}
								}
							//QUA PHAI
							else if(key_hieuchinh == 77)
							{
								if(Vitrihieuchinh == 1)
								{
									Vitrihieuchinh=2;
								}
								else if(Vitrihieuchinh == 2)
								{
									Vitrihieuchinh=1;
								}
								else if(Vitrihieuchinh == 3)
									{
										Vitrihieuchinh=1;
									}
							}
							//LEN
							else if(key_hieuchinh == 72)
							{
								if(Vitrihieuchinh == 1 || Vitrihieuchinh == 2)
								{
									Vitrihieuchinh=3;
								}
								else if(Vitrihieuchinh == 3)
								{
									Vitrihieuchinh=2;
								}
							}
							//XUONG
							else if(key_hieuchinh == 80)
							{
								if(Vitrihieuchinh == 1 || Vitrihieuchinh == 2)
								{
									Vitrihieuchinh=3;
								}
								else if(Vitrihieuchinh == 3)
								{
									Vitrihieuchinh=1;
								}
							}
						}
						else if(key_hieuchinh == 13)
							{
								ShowConsoleCursor(true);
								
								if(Vitrihieuchinh == 1)//HIEU CHINH TEN VAT TU
								{
									XoaHuongDanSuDungVatTu2();
									TextColor(DenTrang);
									gotoXY(16,35);
									cout<<"NHAP TEN VAT TU :";
									chuoi = TENVTHC;
									sokytudanhap = lengthtenvthc;
									while(1)
									{
									nhaptenvthc:
									HuongDanHieuChinhVatTu1();
									TextColor(DenTrang);
										x = 33 + sokytudanhap;
										y = 35;
										dorong = 50;
										keythem = ChuSoDauCachVa_(chuoi,dorong,x,y,sokytudanhap);
										TENVTHC = chuoi;
										lengthtenvthc = sokytudanhap;
										if(keythem == 13)//NEU LA ENTER
										{
											ShowConsoleCursor(false);
											if(TENVTHC == "")
											{
												TextColor(TrangDoNhat);
												for(int dhdl=0;dhdl<3; dhdl++)
												{
													gotoXY(5,39+dhdl);
													cout<<"                            ";
												}
												gotoXY(7,40);
												cout<<"DU LIEU KHONG DUOC TRONG";
												getch();
												TextColor(DenTrang);
												for(int dhdl=0;dhdl<3; dhdl++)
												{
													gotoXY(5,39+dhdl);
													cout<<"                            ";
												}
												XoaHuongDanHieuChinhVatTu1();
												ShowConsoleCursor(true);
												goto nhaptenvthc;
											}
											TimKiemVaHieuChinh(t,tam[vtvtht]->MAVT,TENVTHC,Vitrihieuchinh);
											tam[vtvtht]->TENVT = TENVTHC;
											TextColor(TrangXoa);
											gotoXY(15,35);
											cout<<"                                                  ";	//XOA DU LIEU NHAP VAO
											gotoXY(103,oldplace+vthienthi);
											cout<<"                                      ";	//XOA DU LIEU TRONG KHUNG
											TextColor(TrangDoNhat);
											gotoXY(103,oldplace+vthienthi);
											cout<<tam[vtvtht]->TENVT;
											ShowConsoleCursor(false);
											XoaHuongDanHieuChinhVatTu1();
											HuongDanSuDungVatTu2();
											goto luachonhieuchinhvattu;
										}
										else if(keythem == 0)//NEU LA F
										{
											keythem = getch();
											if(keythem == 59)//NEU LA F1
											{
												lengthtenvthc=0,lengthdvthc=0;
												TENVTHC="",DVTHC="",chuoi="";
												sokytudanhap=0;
												TextColor(TrangXoa);
												gotoXY(15,35);
												cout<<"                                                  ";	//XOA DU LIEU NHAP VAO
												ShowConsoleCursor(false);
												XoaHuongDanHieuChinhVatTu1();
												HuongDanSuDungVatTu2();//HUONG DAN SU DUNG 2
												goto luachonhieuchinhvattu;
											}
										}
										else if(keythem == -32)//NEU LA KEY DIEU HUONG
										{
											keythem = getch();
										}
									}
								}
								else if(Vitrihieuchinh == 2)//HIEU CHINH DON VI TINH
								{
									XoaHuongDanSuDungVatTu2();
									TextColor(DenTrang);
									string DVTHC;
									gotoXY(16,35);
									cout<<"NHAP DON VI TINH :";
									chuoi = DVTHC;
									sokytudanhap = lengthdvthc;
									while(1)
									{
										nhapdvtvthc:
										HuongDanHieuChinhVatTu1();
										TextColor(DenTrang);
										x = 34 + sokytudanhap;
										y = 35;
										dorong = 10;
										keythem = ChuSoDauCachVa_(chuoi,dorong,x,y,sokytudanhap);
										DVTHC = chuoi;
										lengthdvthc = sokytudanhap;
									
									if(keythem == 13)//NEU LA ENTER
										{
											if(DVTHC == "")
											{
												TextColor(TrangDoNhat);
												for(int dhdl=0;dhdl<3; dhdl++)
												{
													gotoXY(5,39+dhdl);
													cout<<"                            ";
												}
												gotoXY(7,40);
												cout<<"DU LIEU KHONG DUOC TRONG";
												getch();
												TextColor(DenTrang);
												for(int dhdl=0;dhdl<3; dhdl++)
												{
													gotoXY(5,39+dhdl);
													cout<<"                            ";
												}
												XoaHuongDanHieuChinhVatTu1();
												ShowConsoleCursor(true);
												goto nhapdvtvthc;
											}
											TimKiemVaHieuChinh(t,tam[vtvtht]->MAVT,DVTHC,Vitrihieuchinh);
											tam[vtvtht]->DVT = DVTHC;
											TextColor(TrangXoa);
											gotoXY(15,35);
											cout<<"                                                  ";	//XOA DU LIEU NHAP VAO
											gotoXY(157,oldplace+vthienthi);
											cout<<"          ";//XOA DU LIEU TRONG KHUNG
											TextColor(TrangDoNhat);
											gotoXY(157,oldplace+vthienthi);
											cout<<tam[vtvtht]->DVT;
											ShowConsoleCursor(false);
											XoaHuongDanHieuChinhVatTu1();
											HuongDanSuDungVatTu2();
											goto luachonhieuchinhvattu;
										}
									else if(keythem == 0)//NEU LA F1
										{
											keythem = getch();
											if(keythem == 59)//NEU LA F1
											{
												lengthtenvthc=0,lengthdvthc=0;
												TENVTHC="",DVTHC="",chuoi="";
												sokytudanhap=0;
												TextColor(TrangXoa);
												gotoXY(15,35);
												cout<<"                                                  ";	//XOA DU LIEU NHAP VAO
												ShowConsoleCursor(false);
												XoaHuongDanHieuChinhVatTu1();
												HuongDanSuDungVatTu2();//HUONG DAN SU DUNG 2
												goto luachonhieuchinhvattu;
											}
										}
									else if(keythem == -32)//NEU LA KEY DIEU HUONG
										{
											keythem = getch();
										}
									}
								}
								else if(Vitrihieuchinh == 3)//BO CHON HIEU CHINH
								{
									TextColor(DenTrang);
									//XOA O TEN VT
									for(int i=27; i<=29; i++)
										{
											gotoXY(11,i);
											cout<<"                       ";
										}
									//=======================
									//XOA O DON VI TINH
									for(int i=27; i<=29; i++)
										{
											gotoXY(41,i);
											cout<<"                       ";
										}
									//=======================
									
								
									//XOA O BO CHON
									for(int i=31; i<=33; i++)
										{
											gotoXY(26,i);
											cout<<"                       ";
										}
									goto batphimchucnangthemvattu;//NHAY DEN LUA CHON CAC CHUC NANG THEM VAT TU
								}
								ShowConsoleCursor(false);
							}
				}
			}
			
			//=========== 4. BO CHON ===========
			else if(Vitrikhoitao == 4)
			{
				XoaHuongDanSuDungVatTu2();
				Vitrikhoitao = 0;
				TaoKhungNhapVatTu(Vitrikhoitao);
			}
			
			//=========== 5.RA GIAO DIEN CHINH ===============
			else if(Vitrikhoitao == 5)
			{
				system("cls");
				system("color 07");
				return;
			}
			
		}
		///////////KET THUC NHAN QUA TRAI
		}
		
	
	
		else if(key_press == 13)
		{
			Vitrikhoitao = 1;
			goto batphimchucnangthemvattu;
		}
	}
}

//============ TAO KHUNG NHAN VIEN (THEM, XOA, SUA THONG TIN NHAN VIEN ==============
void TaoKhungNhapNhanVien()
{
	system("cls");
	system("color f0");
	TextColor(TrangDo);
	gotoXY(20,2);
	cout<<"CHUC NANG CHUONG TRINH";
	gotoXY(116,2);
	cout<<"DANH SACH NHAN VIEN";
	gotoXY(64,10);
	cout<<"MA NHAN VIEN";
	gotoXY(98,10);
	cout<<"HO";
	gotoXY(135,10);
	cout<<"TEN";
	gotoXY(156,10);
	cout<<"GIOI TINH";
	gotoXY(185,10);
	cout<<"CMND";
	gotoXY(65,6);
	TextColor(DoTrang);
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
		gotoXY(60,8);
		cout<<"                                                                   ";
		gotoXY(125,8);
		cout<<"                                                                           ";
		gotoXY(60,12);
		cout<<"                                                                   ";
		gotoXY(125,12);
		cout<<"                                                                           ";
		//THANH NGANG CHUC NANG
		gotoXY(2,24);
		cout<<"                                                           ";
		gotoXY(2,37);
		cout<<"                                                           ";
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
		
		gotoXY(60,1+i);
		cout<<"  ";
		gotoXY(60,12+i);
		cout<<"  ";
		gotoXY(60,22+i);
		cout<<"  ";
		gotoXY(60,32+i);
		cout<<"  ";
	}
	//THANH 3
	for(int i=0; i<=8; i++)
	{
		
		gotoXY(78,9+i);
		cout<<"  ";
		gotoXY(78,18+i);
		cout<<"  ";
		gotoXY(78,27+i);
		cout<<"  ";
		gotoXY(78,35+i);
		cout<<"  ";
	}
	//THANH 4
	for(int i=0; i<=8; i++)
	{
		
		gotoXY(123,9+i);
		cout<<"  ";
		gotoXY(123,18+i);
		cout<<"  ";
		gotoXY(123,27+i);
		cout<<"  ";
		gotoXY(123,35+i);
		cout<<"  ";
	}
	//THANH 5
	for(int i=0; i<=8; i++)
	{
		
		gotoXY(148,9+i);
		cout<<"  ";
		gotoXY(148,18+i);
		cout<<"  ";
		gotoXY(148,27+i);
		cout<<"  ";
		gotoXY(148,35+i);
		cout<<"  ";
	}
	//THANH 6
	for(int i=0; i<=8; i++)
	{
		
		gotoXY(172,9+i);
		cout<<"  ";
		gotoXY(172,18+i);
		cout<<"  ";
		gotoXY(172,27+i);
		cout<<"  ";
		gotoXY(172,35+i);
		cout<<"  ";
	}
	//THANH 7
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(200,i+1);
		cout<<"  ";
		gotoXY(200,12+i);
		cout<<"  ";
		gotoXY(200,22+i);
		cout<<"  ";
		gotoXY(200,32+i);
		cout<<"  ";
	}
	
	
	
}


void MenuNhapNhanVien(int &Vitri)
{
	char key_press;
//	Vitri = 1;
	
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
			gotoXY(6,i);
			cout<<"                       ";
		}
		gotoXY(10,8);
		cout<<"THEM NHAN VIEN";
		color = TrangBac;
		
		
		if(Vitri == 2)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=6; i<=10; i++)
		{
			gotoXY(32,i);
			cout<<"                       ";
		}
		gotoXY(37,8);
		cout<<"XOA NHAN VIEN";
		color = TrangBac;
		
		
		if(Vitri == 3)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=12; i<=16; i++)
		{
			gotoXY(6,i);
			cout<<"                       ";
		}
		gotoXY(7,14);
		cout<<"HIEU CHINH NHAN VIEN";
		color = TrangBac;
		
		if(Vitri == 4)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=12; i<=16; i++)
		{
			gotoXY(32,i);
			cout<<"                       ";
		}
		gotoXY(40,14);
		cout<<"BO CHON";
		color = TrangBac;
		
		if(Vitri == 5)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=18; i<=22; i++)
		{
			gotoXY(19,i);
			cout<<"                       ";
		}
		gotoXY(21,20);
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
				        		Vitri = 2;
							}
							else if(Vitri == 2)
				        	{
				        		Vitri = 1;
							}
							else if(Vitri == 3)
				        	{
				        		Vitri = 4;
							}
							else if(Vitri == 4)
				        	{
				        		Vitri = 3;
							}
							else if(Vitri == 5)
							{
								Vitri = 3;
							}
						}
						//NHAN QUA PHAI
						else if(key_press == 77)
				        {
				        	if(Vitri == 1)
							{
								Vitri = 2;
							}
				        	else if(Vitri == 2)
				        	{
				        		Vitri = 1;
							}
							else if(Vitri == 3)
				        	{
				        		Vitri = 4;
							}
							else if(Vitri == 4)
				        	{
				        		Vitri = 3;
							}
							else if(Vitri == 5)
							{
								Vitri = 4;
							}
						}
						//NHAN XUONG
						else if(key_press == 80)
				        {
				        	if(Vitri == 1 || Vitri == 3)
				        	{
				        		Vitri+=2;
							}
							else if(Vitri == 2)
				        	{
				        		Vitri=4;
							}
							else if(Vitri == 4)
							{
								Vitri = 5;
							}
							else if(Vitri == 5)
				        	{
				        		Vitri=1;
							}
						}
						//NHAN LEN
						else if(key_press == 72)
						{
							if(Vitri == 1 || Vitri == 2)
				        	{
				        		Vitri = 5;
							}
							else if(Vitri == 3 || Vitri == 4)
				        	{
				        		Vitri-=2;
							}
							else if(Vitri == 5)
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



void ChucNangNhanVien(DS_NHAN_VIEN &dsnv)
{
	//=== CHUC NANG NHAN VIEN
	string MANVT,HONVT,TENNVT,PHAIT,CMNDT;
	int lengthmanv=0,lengthhonv=0,lengthtennv=0,lenghthphai=0,lengthcmnd=0;
	int vthighlight = 0,vtbatdau = 0, vtketthuc,vtdsnv=0,oldplace=13,Vitrikhoitao = 0,SoLuongSoSanh,dorongsearch=10;
	string ChuoiSearch;
	int x = 75,y=6;
	int t;
	char keykitu;
	int sokytudanhapsearch =0;
	int doronghuongdan = 39;
	//TAO KHUNG NHAP NHAN VIEN
	TaoKhungNhapNhanVien();
	//KHOI TAO MENU THEM NHAN VIEN
	MenuNhapNhanVien(Vitrikhoitao);
	if(dsnv.slnv <= 30)
	{
		vtketthuc = dsnv.slnv;
	}
	else if(dsnv.slnv > 30)
	{
		vtketthuc = 30;
	}
	bool khoitao = true;
	char keydsnv;
		
		//KHOI TAO DANH SACH NHAN VIEN
		TextColor(DenTrang);
		for(int i=vtbatdau; i<vtketthuc; i++)
		{
			if(vtdsnv == i)
			{
				TextColor(TrangDoNhat);
			}
				gotoXY(65,13+i);
				cout<<dsnv.nv[i]->MANV;
				gotoXY(90,13+i);
				cout<<dsnv.nv[i]->HO;
				gotoXY(133,13+i);	
				cout<<dsnv.nv[i]->TEN;
				gotoXY(159,13+i);
				cout<<dsnv.nv[i]->PHAI;
				gotoXY(182,13+i);
				cout<<dsnv.nv[i]->CMND;
			if(vtdsnv == i)
			{
				TextColor(DenTrang);
			}
		}
	SoLuongSoSanh = dsnv.slnv;
	bool indlmoi = false;
	duyetdanhsachnhanvien:
	while(1)
	{
			
			HuongDanSuDungNhanVien1(doronghuongdan);
			ShowConsoleCursor(true);
			gotoXY(75+sokytudanhapsearch,6);
			keydsnv = getch();
			if(keydsnv == 8)//Neu la phim nhan la backspace thi se lui nguoc con tro lai va bien ki tu vua nhap vao la khoang trang
			{
				if(sokytudanhapsearch != 0)
						{
							TextColor(DenTrang);
							gotoXY(75+sokytudanhapsearch,6);
							keydsnv = 32;//gan ki tu vua nhap vao thanh khoang trang
							cout<<"\b";//Lenh lui nguoc con tro chi vi
							cout<<keydsnv;//cout ra ki tu khoang trang
							cout<<"\b";
							sokytudanhapsearch--;//lui lai 1 don vi
							ChuoiSearch.erase(sokytudanhapsearch,1);
																
							//XOA DU LIEU CU
							TextColor(TrangXoa);
							for(int i=vtbatdau; i<vtketthuc;i++)						
							{
								gotoXY(65,oldplace+i);
								cout<<"          ";
								gotoXY(90,oldplace+i);
								cout<<"                              ";
								gotoXY(133,oldplace+i);
								cout<<"          ";
								gotoXY(159,oldplace+i);
								cout<<"   ";
								gotoXY(182,oldplace+i);
								cout<<"          ";
							}
							TextColor(DenTrang);
							vthighlight = 0;
							vtbatdau = 0;
							oldplace = 13;
							if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
							{
									if(dsnv.slnv <= 30)
									{
										vtketthuc = dsnv.slnv;
									}
									else if(dsnv.slnv > 30)
									{
										vtketthuc = 30;
									}
							for(int i=vtbatdau; i<vtketthuc; i++)
								{
									if(i == vthighlight)
									{
										TextColor(TrangDoNhat);
										vtdsnv = i;
									}
									gotoXY(65,oldplace+i);
									cout<<dsnv.nv[i]->MANV;
									gotoXY(90,oldplace+i);
									cout<<dsnv.nv[i]->HO;
									gotoXY(133,oldplace+i);	
									cout<<dsnv.nv[i]->TEN;
									gotoXY(159,oldplace+i);
									cout<<dsnv.nv[i]->PHAI;
									gotoXY(182,oldplace+i);
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
											if(i < 30)
												{
													if(i == vthighlight)
														{
															TextColor(TrangDoNhat);
															vtdsnv= j;
														}
														gotoXY(65,oldplace+i);
														cout<<dsnv.nv[j]->MANV;
														gotoXY(90,oldplace+i);
														cout<<dsnv.nv[j]->HO;
														gotoXY(133,oldplace+i);	
														cout<<dsnv.nv[j]->TEN;
														gotoXY(159,oldplace+i);
														cout<<dsnv.nv[j]->PHAI;
														gotoXY(182,oldplace+i);
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
			
			else if((keydsnv>=48 && keydsnv<=57) && sokytudanhapsearch<dorongsearch)
											{
												//XOA DU LIEU CU
												TextColor(TrangXoa);
												for(int i=vtbatdau; i<vtketthuc;i++)						
												{
													gotoXY(65,oldplace+i);
													cout<<"          ";
													gotoXY(90,oldplace+i);
													cout<<"                              ";
													gotoXY(133,oldplace+i);
													cout<<"          ";
													gotoXY(159,oldplace+i);
													cout<<"   ";
													gotoXY(182,oldplace+i);
													cout<<"          ";
												}
												if(keydsnv>=97 && keydsnv<=122)
												{
													keydsnv-=32;
												}
												gotoXY(75+sokytudanhapsearch,6);
												TextColor(DenTrang);
												cout<<keydsnv;
												ChuoiSearch+=keydsnv;
												sokytudanhapsearch++;//tang len 1 don vi
												vthighlight = 0;
												vtbatdau=0;
												vtketthuc = 0;
												oldplace = 13;
												SoLuongSoSanh = 0;
												vtketthuc=0;
												for(int i=vtbatdau,j=0;j < dsnv.slnv;)
													{
														if(ChuyenSoThanhChuoi(dsnv.nv[j]->MANV).find(ChuoiSearch) != -1)
														{
															if(i < 30)
															{
																if(i == vthighlight)
																	{
																		TextColor(TrangDoNhat);
																		vtdsnv = j;
																	}
																	gotoXY(65,oldplace+i);
																	cout<<dsnv.nv[j]->MANV;
																	gotoXY(90,oldplace+i);
																	cout<<dsnv.nv[j]->HO;
																	gotoXY(133,oldplace+i);	
																	cout<<dsnv.nv[j]->TEN;
																	gotoXY(159,oldplace+i);
																	cout<<dsnv.nv[j]->PHAI;
																	gotoXY(182,oldplace+i);
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
			
		else if(keydsnv == -32)
		{
			keydsnv = getch();
				if(keydsnv == 72)//NHAN LEN
					{
						if(vthighlight > vtbatdau)
							{
								vthighlight--;
							}
						else if(vthighlight == vtbatdau && vtbatdau > 0)
							{
								//XOA DU LIEU CU
								TextColor(TrangXoa);
								for(int i=vtbatdau; i<vtketthuc;i++)						
									{
										gotoXY(65,oldplace+i);
										cout<<"          ";
										gotoXY(90,oldplace+i);
										cout<<"                              ";
										gotoXY(133,oldplace+i);
										cout<<"          ";
										gotoXY(159,oldplace+i);
										cout<<"   ";
										gotoXY(182,oldplace+i);
										cout<<"          ";
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
											vtdsnv = i;
										}
										gotoXY(65,oldplace+i);
										cout<<dsnv.nv[i]->MANV;
										gotoXY(90,oldplace+i);
										cout<<dsnv.nv[i]->HO;
										gotoXY(133,oldplace+i);	
										cout<<dsnv.nv[i]->TEN;
										gotoXY(159,oldplace+i);
										cout<<dsnv.nv[i]->PHAI;
										gotoXY(182,oldplace+i);
										cout<<dsnv.nv[i]->CMND;															
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
								while(j < dsnv.slnv)
								{
									if(ChuyenSoThanhChuoi(dsnv.nv[j]->MANV).find(ChuoiSearch) != -1)
									{
										if(i>=vtbatdau && i<vtketthuc)
										{
											if(i == vthighlight)
											{
												TextColor(TrangDoNhat);
												vtdsnv = j;
											}
												gotoXY(65,oldplace+i);
												cout<<dsnv.nv[j]->MANV;
												gotoXY(90,oldplace+i);
												cout<<dsnv.nv[j]->HO;
												gotoXY(133,oldplace+i);	
												cout<<dsnv.nv[j]->TEN;
												gotoXY(159,oldplace+i);
												cout<<dsnv.nv[j]->PHAI;
												gotoXY(182,oldplace+i);
												cout<<dsnv.nv[j]->CMND;
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
					
				else if(keydsnv == 80)//NHAN XUONG
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
									gotoXY(65,oldplace+i);
									cout<<"          ";
									gotoXY(90,oldplace+i);
									cout<<"                              ";
									gotoXY(133,oldplace+i);
									cout<<"          ";
									gotoXY(159,oldplace+i);
									cout<<"   ";
									gotoXY(182,oldplace+i);
									cout<<"          ";
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
									vtdsnv = i;
								}
										gotoXY(65,oldplace+i);
										cout<<dsnv.nv[i]->MANV;
										gotoXY(90,oldplace+i);
										cout<<dsnv.nv[i]->HO;
										gotoXY(133,oldplace+i);	
										cout<<dsnv.nv[i]->TEN;
										gotoXY(159,oldplace+i);
										cout<<dsnv.nv[i]->PHAI;
										gotoXY(182,oldplace+i);
										cout<<dsnv.nv[i]->CMND;			
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
							while(j < dsnv.slnv)
							{
								if(ChuyenSoThanhChuoi(dsnv.nv[j]->MANV).find(ChuoiSearch) != -1)
								{
									if(i>=vtbatdau && i<vtketthuc)
									{
										if(i == vthighlight)
										{
											TextColor(TrangDoNhat);
											vtdsnv = j;
										}
												gotoXY(65,oldplace+i);
												cout<<dsnv.nv[j]->MANV;
												gotoXY(90,oldplace+i);
												cout<<dsnv.nv[j]->HO;
												gotoXY(133,oldplace+i);	
												cout<<dsnv.nv[j]->TEN;
												gotoXY(159,oldplace+i);
												cout<<dsnv.nv[j]->PHAI;
												gotoXY(182,oldplace+i);
												cout<<dsnv.nv[j]->CMND;
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
				
				//NHAN QUA TRAI
				else if(keydsnv == 75)
				{
						Vitrikhoitao = 1;
						batphimchucnangthemnhanvien:
						ShowConsoleCursor(false);
						XoaHuongDanSuDungNhanVien1(doronghuongdan);
						HuongDanSuDungNhanVien2(doronghuongdan);
						MenuNhapNhanVien(Vitrikhoitao);
						string chuoi;
						MANVT = "",HONVT ="",TENNVT="",PHAIT="",CMNDT="";
						lengthmanv=0,lengthhonv=0,lengthtennv=0,lenghthphai=0,lengthcmnd=0;
						char keythem,keygt;
						int Vitrithem=1;
						int Vitrigt = 1;
						int x,y,sokytudanhap=0,dorong=0;
						TextColor(TrangDen);
						gotoXY(16,26);
				//================== 1.THEM NHAN VIEN ================
					if(Vitrikhoitao == 1)
					{ 	
						XoaHuongDanSuDungNhanVien2(doronghuongdan);
						TextColor(TrangDo);
						gotoXY(14,26);
						cout<<"NHAP THONG TIN NHAN VIEN";
						TextColor(DoTrang);
						gotoXY(7,28);
						cout<<"MA NV :";//===> TU SINH SO
						gotoXY(7,30);
						cout<<"HO :";
						gotoXY(7,32);
						cout<<"TEN :";
						gotoXY(7,34);
						cout<<"PHAI :";
						gotoXY(7,36);
						cout<<"CMND :";
						TextColor(TrangDoNhat);
						gotoXY(16,34);
						cout<<"       ";
						gotoXY(18,34);
						cout<<"NAM";
						TextColor(DenTrang);
						gotoXY(28,34);
						cout<<"       ";
						gotoXY(31,34);
						cout<<"NU";
						
						while(1)
						{
									themthongtinnhanvien:
									ShowConsoleCursor(true);
									TextColor(DenTrang);
										//MA NHAN VIEN
										if(Vitrithem == 1)
										{
											chuoi = MANVT;
											sokytudanhap = lengthmanv;
											x = 14 + sokytudanhap;
											y = 28;
											dorong = 9;
											keythem = So(chuoi,dorong,x,y,sokytudanhap);
										}
										//HO NHAN VIEN
										else if(Vitrithem == 2)
										{
											chuoi = HONVT;
											sokytudanhap = lengthhonv;
											x = 11 + sokytudanhap;
											y = 30;
											dorong = 25;
											keythem = ChuVaDauCach(chuoi,dorong,x,y,sokytudanhap);
										}
										//TEN NHAN VIEN
										else if(Vitrithem == 3)
										{
											chuoi = TENNVT;
											sokytudanhap = lengthtennv;
											x = 12 + sokytudanhap;
											y = 32;
											dorong = 10;
											keythem = Chu(chuoi,dorong,x,y,sokytudanhap);
										}
										//PHAI
										else if(Vitrithem == 4)
										{
											ShowConsoleCursor(false);
											while(1)
											{
												if(Vitrigt == 1)
												{
													TextColor(TrangDoNhat);
													gotoXY(16,34);
													cout<<"       ";
													gotoXY(18,34);
													cout<<"NAM";
													TextColor(DenTrang);
													gotoXY(28,34);
													cout<<"       ";
													gotoXY(31,34);
													cout<<"NU";
												}
												else if(Vitrigt == 2)
												{
													TextColor(DenTrang);
													gotoXY(16,34);
													cout<<"       ";
													gotoXY(18,34);
													cout<<"NAM";
													TextColor(TrangDoNhat);
													gotoXY(28,34);
													cout<<"       ";
													gotoXY(31,34);
													cout<<"NU";
												}
												keygt = getch();
												if(keygt == -32)
												{
													keygt = getch();
													if(keygt == 75)//QUA TRAI
													{
														if(Vitrigt == 1)
														{
															Vitrigt = 2;
														}
														else if(Vitrigt == 2)
														{
															Vitrigt = 1;
														}
													}
													else if(keygt == 77)//QUA PHAI
													{
														if(Vitrigt == 1)
														{
															Vitrigt = 2;
														}
														else if(Vitrigt == 2)
														{
															Vitrigt = 1;
														}
													}
													else if(keygt == 72 )//NHAN LEN
													{
														keythem = 72;
														if(Vitrigt == 1)//NAM
														{
															PHAIT = "NAM";
														}
														else if(Vitrigt == 2)//NU
														{
															PHAIT = "NU";
														}
														Vitrithem = 3;
														TextColor(DenTrang);
														goto themthongtinnhanvien;
														break;
													}
													else if(keygt == 80)//NHAN XUONG
													{
														keythem = 80;
														if(Vitrigt == 1)//NAM
														{
															PHAIT = "NAM";
														}
														else if(Vitrigt == 2)//NU
														{
															PHAIT = "NU";
														}
														Vitrithem = 5;
														TextColor(DenTrang);
														goto themthongtinnhanvien;
														break;
													}
												}
												else if(keygt == 13)
												{
														keythem = keygt;
														if(Vitrigt == 1)//NAM
														{
															PHAIT = "NAM";
														}
														else if(Vitrigt == 2)//NU
														{
															PHAIT = "NU";
														}
														TextColor(DenTrang);
														break;
												}
											}
											ShowConsoleCursor(true);
										}
										//CMND
										else if(Vitrithem == 5)
										{
											chuoi = CMNDT;
											sokytudanhap = lengthcmnd;
											x = 13 + sokytudanhap;
											y = 36;
											dorong = 9;
											keythem = So(chuoi,dorong,x,y,sokytudanhap);
										}
										//BAT PHIM KI TU NHAP VAO
										
										//CAP NHAT LAI CHUOI SAU KHI NHAP
										if(Vitrithem == 1)
										{
											MANVT = chuoi;
											lengthmanv = sokytudanhap;
										}
										else if(Vitrithem == 2)
										{
											HONVT = chuoi;
											lengthhonv = sokytudanhap;
										}
										else if(Vitrithem == 3)
										{
											TENNVT = chuoi;
											lengthtennv = sokytudanhap;
										}
										else if(Vitrithem == 5)
										{
											CMNDT = chuoi;
											lengthcmnd = sokytudanhap;
										}
										
										if(keythem == -32)//NHAN PHIM DIEU KHIEN
										{
											keythem = getch();
											if(keythem == 72)//NHAN LEN
											{
												if(Vitrithem == 1)
												{
													Vitrithem = 5;
												}
												else if(Vitrithem != 1)
												{
													Vitrithem--;
												}
											}
											else if(keythem == 80)//NHAN XUONG
											{
												if(Vitrithem == 5)
												{
													Vitrithem = 1;
												}
												else if(Vitrithem !=5)
												{
													Vitrithem++;
												}
											}
										}
									///////////BAT DAU
							else if(keythem == 13)//NHAN ENTER
							{
								ShowConsoleCursor(false);
								//NEU DU LIEU DANG TRONG
								if(MANVT.length() == 0 || HONVT.length() == 0 || TENNVT.length() == 0 || PHAIT.length() == 0 || CMNDT.length() == 0)
								{
									TextColor(TrangDoNhat);
									for(int dhdl=0;dhdl<3; dhdl++)
									{
										gotoXY(8,39+dhdl);
										cout<<"                            ";
									}
										gotoXY(10,40);
										cout<<"DU LIEU KHONG DUOC TRONG";
										getch();
										TextColor(TrangXoa);
									for(int dhdl=0;dhdl<3; dhdl++)
									{
										gotoXY(8,39+dhdl);
										cout<<"                            ";
									}
								TextColor(TrangDen);
								goto themthongtinnhanvien;//DI CHUYEN DEN VI TRI THOAT DE TIEP TUC NHAP THONG TIN VAT TU
								}
								
							 	if(KTMANV(dsnv,MANVT) == true )//NEU MA NHAN VIEN TRUNG THI NHAP LAI
							 	{
							 		TextColor(TrangDoNhat);
									for(int dhdl=0;dhdl<3; dhdl++)
									{
										gotoXY(8,39+dhdl);
										cout<<"                            ";
									}
									gotoXY(10,40);
									cout<<"MA NHAN VIEN BI TRUNG";
									getch();
									TextColor(TrangXoa);
									for(int dhdl=0;dhdl<3; dhdl++)
									{
										gotoXY(8,39+dhdl);
										cout<<"                            ";
									}
									TextColor(DenTrang);
									goto themthongtinnhanvien;//DI CHUYEN DEN VI TRI THOAT DE TIEP TUC NHAP THONG TIN VAT TU
								}
								if(lengthcmnd < 9)
										{
											TextColor(TrangDoNhat);
												for(int i=0; i<3; i++)
												{
													gotoXY(5,39+i);
													cout<<"                      ";
												}
												gotoXY(8,40);
												cout<<"CMND PHAI DU 9 SO";
												getch();
												TextColor(TrangXoa);
												for(int i=0; i<3; i++)
												{
													gotoXY(5,39+i);
													cout<<"                      ";
												}
												goto themthongtinnhanvien;
										}
								else if(KTCMND(dsnv,CMNDT) == true )//NEU MA NHAN VIEN TRUNG THI NHAP LAI
							 	{
							 		TextColor(TrangDoNhat);
									for(int dhdl=0;dhdl<3; dhdl++)
									{
										gotoXY(8,39+dhdl);
										cout<<"                            ";
									}
									gotoXY(10,40);
									cout<<"CMND BI TRUNG";
									getch();
									TextColor(TrangXoa);
									for(int dhdl=0;dhdl<3; dhdl++)
									{
										gotoXY(8,39+dhdl);
										cout<<"                            ";
									}
									TextColor(DenTrang);
									goto themthongtinnhanvien;//DI CHUYEN DEN VI TRI THOAT DE TIEP TUC NHAP THONG TIN VAT TU
								}
								else
								{
									TextColor(TrangDoNhat);
									for(int dhdl=0;dhdl<3; dhdl++)
									{
										gotoXY(7,39+dhdl);
										cout<<"                      ";
									}
										gotoXY(10,39);
										cout<<"BAN CO MUON LUU";
										gotoXY(20,41);
										cout<<"NO";
										TextColor(DoTrang);
										gotoXY(12,41);
										cout<<"YES";
										
										char keylnv;
										int Vitrilnv = 1;
										while(1)
										{
											keylnv = getch();
											if(keylnv == -32)
											{
												keylnv = getch();
												if(keylnv == 75)//QUA TRAI
												{
													if(Vitrilnv == 1)
													{
														Vitrilnv = 2;
														TextColor(TrangDoNhat);
														gotoXY(12,41);
														cout<<"YES";
														TextColor(DoTrang);
														gotoXY(20,41);
														cout<<"NO";
													}
													else if(Vitrilnv == 2)
													{
															Vitrilnv = 1;
															TextColor(DoTrang);
															gotoXY(12,41);
															cout<<"YES";
															TextColor(TrangDoNhat);
															gotoXY(20,41);
															cout<<"NO";
													}
												}
												else if(keylnv == 77)//QUA PHAI
												{
													if(Vitrilnv == 1)
													{
														Vitrilnv = 2;
														TextColor(TrangDoNhat);
														gotoXY(12,41);
														cout<<"YES";
														TextColor(DoTrang);
														gotoXY(20,41);
														cout<<"NO";
													}
													else if(Vitrilnv == 2)
													{
															Vitrilnv = 1;
															TextColor(DoTrang);
															gotoXY(12,41);
															cout<<"YES";
															TextColor(TrangDoNhat);
															gotoXY(20,41);
															cout<<"NO";
													}
												}
											}
											else if(keylnv == 13)//NEU LA PHIM ENTER
											{
												//=== XOA BANG CHON YES NO
													TextColor(TrangXoa);
													for(int dhdl=0;dhdl<3; dhdl++)
													{
														gotoXY(7,39+dhdl);
														cout<<"                      ";
													}
													TextColor(DenTrang);
												//==========
												if(Vitrilnv == 1)//NEU LA YES THI LUU NHAN VIEN
													{
														if(dsnv.slnv <= 30)
														{
															vtketthuc = dsnv.slnv;
														}
														else if(dsnv.slnv > 30)
														{
															vtketthuc = 30;
														}
														//XOA DU LIEU NHAP VAO
														TextColor(TrangXoa);
														gotoXY(75,6);
														cout<<ChuoiSearch;
														for(int xdlnv=0; xdlnv<=10; xdlnv+=2)
														{
															gotoXY(7,26+xdlnv);
															cout<<"                                        ";
														}
														//THEM THONG TIN NHAN VIEN
														ThemDanhSachNhanVien(dsnv,atoi(MANVT.c_str()),HONVT,TENNVT,PHAIT,CMNDT,vtdsnv);
														
														ChuoiSearch = "";
														sokytudanhapsearch =0;
														vthighlight=vtdsnv;
													if(vtdsnv <= vtbatdau)//XAC DINH VI TRI NHAN VIEN VUA THEM
													{
														vtketthuc-=vtbatdau-vtdsnv;
														oldplace+=vtbatdau-vtdsnv;
														vtbatdau =vtdsnv;
													}
													else if(vtdsnv >= vtketthuc)
													{
														
														vtbatdau+= (vtdsnv-vtketthuc)+1;
														oldplace-=(vtdsnv-vtketthuc)+1;
														vtketthuc=vtdsnv+1;
													}
													//====== XOA DU LIEU TRONG BANG =======
													TextColor(TrangXoa);
													for(int j=vtbatdau; j<vtketthuc;j++)
													{
														gotoXY(65,oldplace+j);
														cout<<"          ";
														gotoXY(90,oldplace+j);
														cout<<"                              ";
														gotoXY(133,oldplace+j);
														cout<<"          ";
														gotoXY(159,oldplace+j);
														cout<<"   ";
														gotoXY(182,oldplace+j);
														cout<<"          ";
													}
												//IN LAI DU LIEU MOI
												TextColor(DenTrang);
												for(int i=vtbatdau; i<vtketthuc; i++)
												{
													if(vthighlight == i)
													{
														TextColor(TrangDoNhat);
													}
														gotoXY(65,oldplace+i);
														cout<<dsnv.nv[i]->MANV;
														gotoXY(90,oldplace+i);
														cout<<dsnv.nv[i]->HO;
														gotoXY(133,oldplace+i);	
														cout<<dsnv.nv[i]->TEN;
														gotoXY(159,oldplace+i);
														cout<<dsnv.nv[i]->PHAI;
														gotoXY(182,oldplace+i);
														cout<<dsnv.nv[i]->CMND;
													if(vthighlight == i)
													{
														TextColor(DenTrang);
													}
												}
												SoLuongSoSanh = dsnv.slnv;
												goto batphimchucnangthemnhanvien;
													}
													else if(Vitrilnv == 2)//NEU LA NO THI KHONG LUU
													{
														goto themthongtinnhanvien;
													}	
											}
										}
								}
					}
				}
			}
									
									////////// KET THUC	
//					goto themthongtinnhanvien;
					
					//================ 2. XOA NHAN VIEN ============
					if(Vitrikhoitao == 2)
					{
						///////TEST XOA
							char key;
						int Vitrixoa = 1;
					
						if(dsnv.slnv == 0)
							{
								TextColor(TrangDoNhat);
								for(int k = 0; k<=6; k++)
								{
									gotoXY(14,27+k);
									cout<<"                                ";
								}
									gotoXY(20,30);
									cout<<"DANH SACH DANG RONG";
								getch();
								TextColor(TrangXoa);
								for(int k = 0; k<=6; k++)
								{
									gotoXY(14,27+k);
									cout<<"                                ";
								}
								goto batphimchucnangthemnhanvien;
									
							}
						else if(dsnv.slnv > 0)
						{
							TextColor(TrangBac);
							//TO LAI MAU O XOA NHAN VIEN CHO DE PHAN BIET
							for(int i=6; i<=10; i++)
							{
								gotoXY(32,i);
								cout<<"                       ";
							}
							gotoXY(37,8);
							cout<<"XOA NHAN VIEN";
							
							TextColor(TrangDoNhat);
							
							if(dsnv.nv[vtdsnv]->SLHD != 0)
							{
								for(int k = 0; k<=6; k++)
								{
									gotoXY(7,27+k);
									cout<<"                                                ";
								}
								gotoXY(11,30);
								cout<<"NHAN VIEN DA LAP HOA DON, KHONG THE XOA";
								getch();
								TextColor(TrangXoa);
								for(int k = 0; k<=6; k++)
								{
									gotoXY(7,27+k);
									cout<<"                                                ";
								}
								goto batphimchucnangthemnhanvien;
							}
							
							for(int k = 0; k<=6; k++)
								{
									gotoXY(14,27+k);
									cout<<"                                ";
								}
							gotoXY(33,32);
							cout<<"KHONG";
							gotoXY(20,29);
							cout<<"BAN CO CHAC XOA KHONG";
							TextColor(DoTrang);
							gotoXY(23,32);
							cout<<"CO";
							
					//BAT PHIM LUA CHON XOA HOAC KHONG
							while(1)
							{
						//====== THUC THI =======
						key = getch();
						if(key == -32)
						{
							key = getch();
							if(key == 77)
							{
								
								//=== THUC THI
								if(Vitrixoa == 1)
								{
									TextColor(TrangDoNhat);
									gotoXY(23,32);
									cout<<"CO";
									TextColor(DoTrang);
									gotoXY(33,32);
									cout<<"KHONG";
									Vitrixoa = 2;
								}
								else if(Vitrixoa == 2)
								{
									TextColor(DoTrang);
									gotoXY(23,32);
									cout<<"CO";
									TextColor(TrangDoNhat);
									gotoXY(33,32);
									cout<<"KHONG";
									Vitrixoa = 1;
								}
								
							}	
						
							else if(key == 75)
							{
								//=== THUC THI
								if(Vitrixoa == 1)
								{
									
									TextColor(TrangDoNhat);
									gotoXY(23,32);
									cout<<"CO";
									TextColor(DoTrang);
									gotoXY(33,32);
									cout<<"KHONG";
									Vitrixoa = 2;
								}
								else if(Vitrixoa == 2)
								{
									TextColor(DoTrang);
									gotoXY(23,32);
									cout<<"CO";
									TextColor(TrangDoNhat);
									gotoXY(33,32);
									cout<<"KHONG";
									Vitrixoa = 1;
								}
							}
						}
					
						else if(key == 13)
							{
								if(Vitrixoa == 1)//CHON YES
								{
										XoaDanhSachNhanVien(dsnv,vtdsnv);
									
											//====== XOA DU LIEU TRONG BANG =======
												TextColor(TrangXoa);
												for(int j=vtbatdau; j<vtketthuc;j++)
												{
													gotoXY(65,oldplace+j);
													cout<<"          ";
													gotoXY(90,oldplace+j);
													cout<<"                              ";
													gotoXY(133,oldplace+j);
													cout<<"          ";
													gotoXY(159,oldplace+j);
													cout<<"   ";
													gotoXY(182,oldplace+j);
													cout<<"          ";
												}
												
												
												if(SoLuongSoSanh == vtketthuc)
													{
														if(vtbatdau > 0)
														{
															vtbatdau--;	
															oldplace++;
														}
														
														if(vthighlight == vtketthuc-1)
														{
															vthighlight--;
														}
														vtketthuc--;
													}
												SoLuongSoSanh--;
											//IN LAI DU LIEU MOI
											//IN LAI DU LIEU
												int j=0;
												int i = 0;
												TextColor(DenTrang);
												while(j < dsnv.slnv)
												{
													if(ChuyenSoThanhChuoi(dsnv.nv[j]->MANV).find(ChuoiSearch) != -1)
													{
														if(i>=vtbatdau && i<vtketthuc)
														{
															if(i == vthighlight)
															{
																TextColor(TrangDoNhat);
																vtdsnv = j;
															}
																gotoXY(65,oldplace+i);
																cout<<dsnv.nv[j]->MANV;
																gotoXY(90,oldplace+i);
																cout<<dsnv.nv[j]->HO;
																gotoXY(133,oldplace+i);	
																cout<<dsnv.nv[j]->TEN;
																gotoXY(159,oldplace+i);
																cout<<dsnv.nv[j]->PHAI;
																gotoXY(182,oldplace+i);
																cout<<dsnv.nv[j]->CMND;
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
											//XOA BANG LUA CHON THEM XOA
											TextColor(TrangXoa);
											for(int k = 0; k<=6; k++)
											{
												gotoXY(14,27+k);
												cout<<"                                ";
											}
											goto batphimchucnangthemnhanvien;	
							}
					}
						}	
					}
			
//			HONVT,TENNVT,PHAIT,CMNDT;
					//=============== 3.HIEU CHINH THONG TIN NHAN VIEN ===========
					if(Vitrikhoitao == 3)
					{
						char key_hieuchinh;
						int Vitrihieuchinh = 1;
					chucnanghieuchinhnhanvien:
					while(1)
					{
						TextColor(TrangXanhLa);
						if(Vitrihieuchinh == 1)
						{
							TextColor(TrangDoNhat);
						}
						
						for(int i=26; i<=28; i++)
						{
							gotoXY(6,i);
							cout<<"              ";
						}
						gotoXY(12,27);
						cout<<"HO";
						TextColor(TrangXanhLa);
						
						if(Vitrihieuchinh == 2)
						{
							TextColor(TrangDoNhat);
						}
						for(int i=26; i<=28; i++)
						{
							gotoXY(24,i);
							cout<<"              ";
						}
						gotoXY(28,27);
						cout<<"TEN";
						TextColor(TrangXanhLa);
						
						if(Vitrihieuchinh == 3)
						{
							TextColor(TrangDoNhat);
						}
						for(int i=26; i<=28; i++)
						{
							gotoXY(42,i);
							cout<<"              ";
						}
						gotoXY(45,27);
						cout<<"PHAI";
						TextColor(TrangXanhLa);
						
						if(Vitrihieuchinh == 4)
						{
							TextColor(TrangDoNhat);
						}
						for(int i=30; i<=32; i++)
						{
							gotoXY(15,i);
							cout<<"              ";
						}
						gotoXY(18,31);
						cout<<"CMND";
						TextColor(TrangXanhLa);
						
						
						if(Vitrihieuchinh == 5)
						{
							TextColor(TrangDoNhat);
						}
						for(int i=30; i<=32; i++)
						{
							gotoXY(33,i);
							cout<<"              ";
						}
						gotoXY(36,31);
						cout<<"BO CHON";
						TextColor(TrangXanhLa);
						
						//==== BAT PHIM PHAN HIEU CHINH VAT TU ===========
						key_hieuchinh = getch();
						if(key_hieuchinh == -32)
						{
							key_hieuchinh = getch();
							//QUA TRAI
							if(key_hieuchinh == 75)
								{
									if(Vitrihieuchinh == 1)
									{
										Vitrihieuchinh=3;
									}
									else if(Vitrihieuchinh == 4)
									{
										Vitrihieuchinh=5;
									}
									else
									{
										Vitrihieuchinh--;
									}
								}
							//QUA PHAI
							else if(key_hieuchinh == 77)
							{
								if(Vitrihieuchinh == 3)
								{
									Vitrihieuchinh=1;
								}
								else if(Vitrihieuchinh == 5)
								{
									Vitrihieuchinh=4;
								}
								else
									{
										Vitrihieuchinh++;
									}
							}
							//LEN
							else if(key_hieuchinh == 72)
							{
								if(Vitrihieuchinh == 1 )
								{
									Vitrihieuchinh=4;
								}
								else if(Vitrihieuchinh == 2 || Vitrihieuchinh == 3)
								{
									Vitrihieuchinh=5;
								}
								else if(Vitrihieuchinh == 4)
								{
									Vitrihieuchinh=1;
								}
								else if(Vitrihieuchinh == 5)
								{
									Vitrihieuchinh=3;
								}
							}
							//XUONG
							else if(key_hieuchinh == 80)
							{
								if(Vitrihieuchinh == 1 || Vitrihieuchinh == 2)
								{
									Vitrihieuchinh=4;
								}
								else if(Vitrihieuchinh == 3)
								{
									Vitrihieuchinh=5;
								}
								else if(Vitrihieuchinh == 4)
								{
									Vitrihieuchinh=1;
								}
								else if(Vitrihieuchinh == 5)
								{
									Vitrihieuchinh=3;
								}
							}
						}
						else if(key_hieuchinh == 13)
							{
								XoaHuongDanSuDungNhanVien2(doronghuongdan);
								MANVT="",HONVT="",TENNVT="",PHAIT="",CMNDT="";
								lengthmanv=0,lengthhonv=0,lengthtennv=0,lenghthphai=0,lengthcmnd=0;
								sokytudanhap=0,dorong=0;
								int Vitrihcnv=1;
								char keyhcnv;
								TextColor(DoTrang);
								if(Vitrihieuchinh == 1)//HIEU CHINH HO NHAN VIEN
								{
									gotoXY(6,35);
									cout<<"NHAP HO : ";
									chuoi = HONVT;
									sokytudanhap = lengthhonv;
									HuongDanHieuChinhNhanVien1();
									while(1)
									{
										nhaphonvhc:
										ShowConsoleCursor(true);
										x = 16 + sokytudanhap;
										y = 35;
										dorong = 25;
										TextColor(DenTrang);
										keythem = ChuVaDauCach(chuoi,dorong,x,y,sokytudanhap);
										HONVT = chuoi;
										lengthhonv = sokytudanhap;
										ShowConsoleCursor(false);
											if(keythem == 13)
											{
												if(HONVT == "")
													{
														TextColor(TrangDoNhat);
														for(int dhdl=0;dhdl<3; dhdl++)
														{
															gotoXY(3,39+dhdl);
															cout<<"                            ";
														}
														gotoXY(5,40);
														cout<<"DU LIEU KHONG DUOC TRONG";
														getch();
														TextColor(DenTrang);
														for(int dhdl=0;dhdl<3; dhdl++)
														{
															gotoXY(3,39+dhdl);
															cout<<"                            ";
														}
		//												XoaHuongDanHieuChinhVatTu1();
														ShowConsoleCursor(true);
														goto nhaphonvhc;
													}
													else
													{
														break;
													}
											}
											else if(keythem == 0)
											{
												keythem = getch();
												if(keythem == 59)//NEU LA F1
												{
													lengthhonv = 0;
													HONVT = "";
													sokytudanhap = 0;
													chuoi = "";
													TextColor(TrangXoa);
													gotoXY(6,35);
													cout<<"                                        ";
													XoaHuongDanHieuChinhNhanVien1();
													goto chucnanghieuchinhnhanvien;
												}
											}
											else if(keythem == -32)
											{
												keythem = getch();	
											}	
									}
								}
//========================================
								else if(Vitrihieuchinh == 2)//HIEU CHINH TEN NHAN VIEN
								{
									ShowConsoleCursor(true);
									gotoXY(16,35);
									cout<<"NHAP TEN: ";
									chuoi = TENNVT;
									sokytudanhap = lengthtennv;
									HuongDanHieuChinhNhanVien1();
									while(1)
									{
										nhaptennvhc:
										ShowConsoleCursor(true);
										x = 25 + sokytudanhap;
										y = 35;
										dorong = 10;
										TextColor(DenTrang);
										keythem = Chu(chuoi,dorong,x,y,sokytudanhap);
										TENNVT = chuoi;
										lengthtennv = sokytudanhap;
										ShowConsoleCursor(false);
											if(keythem == 13)
											{
												if(TENNVT == "")
												{
													TextColor(TrangDoNhat);
													for(int dhdl=0;dhdl<3; dhdl++)
													{
														gotoXY(3,39+dhdl);
														cout<<"                            ";
													}
													gotoXY(5,40);
													cout<<"DU LIEU KHONG DUOC TRONG";
													getch();
													TextColor(DenTrang);
													for(int dhdl=0;dhdl<3; dhdl++)
													{
														gotoXY(3,39+dhdl);
														cout<<"                            ";
													}
													ShowConsoleCursor(true);
													goto nhaptennvhc;
												}
												else
													{
														break;
													}
											}
											else if(keythem == 0)
											{
												keythem = getch();
												if(keythem == 59)//NEU LA F1
												{
													lengthhonv = 0;
													TENNVT = "";
													sokytudanhap = 0;
													chuoi = "";
													TextColor(TrangXoa);
													gotoXY(6,35);
													cout<<"                                        ";
													XoaHuongDanHieuChinhNhanVien1();
													goto chucnanghieuchinhnhanvien;
												}
											}	
									}
								}
								else if(Vitrihieuchinh == 3)//HIEU CHINH PHAI NHAN VIEN
								{
									gotoXY(16,35);
									cout<<"PHAI: ";
									
									char keygthc;
									int Vitrigthc=1;
									//=================
									ShowConsoleCursor(false);
									HuongDanHieuChinhNhanVien1();
											while(1)
											{
												if(Vitrigthc == 1)
												{
													TextColor(TrangDoNhat);
													gotoXY(25,35);
													cout<<"       ";
													gotoXY(27,35);
													cout<<"NAM";
													TextColor(DenTrang);
													gotoXY(37,35);
													cout<<"       ";
													gotoXY(40,35);
													cout<<"NU";
												}
												else if(Vitrigthc == 2)
												{
													TextColor(DenTrang);
													gotoXY(25,35);
													cout<<"       ";
													gotoXY(27,35);
													cout<<"NAM";
													TextColor(TrangDoNhat);
													gotoXY(37,35);
													cout<<"       ";
													gotoXY(40,35);
													cout<<"NU";
												}
												keygthc = getch();
												if(keygthc == -32)
												{
													keygthc = getch();
													if(keygthc == 75)//QUA TRAI
													{
														if(Vitrigthc == 1)
														{
															Vitrigthc = 2;
														}
														else if(Vitrigthc == 2)
														{
															Vitrigthc = 1;
														}
													}
													else if(keygthc == 77)//QUA PHAI
													{
														if(Vitrigthc == 1)
														{
															Vitrigthc = 2;
														}
														else if(Vitrigthc == 2)
														{
															Vitrigthc = 1;
														}
													}
												}
												else if(keygthc == 13)
												{
													
														if(Vitrigthc == 1)//NAM
														{
															PHAIT = "NAM";
														}
														else if(Vitrigthc == 2)//NU
														{
															PHAIT = "NU";
														}
														TextColor(DenTrang);
														break;
												}
												else if(keygthc == 0)
												{
													keythem = getch();
													if(keythem == 59)//NEU LA F1
													{
														TextColor(TrangXoa);//XOA DU LIEU
														gotoXY(6,35);
														cout<<"                                        ";
														XoaHuongDanHieuChinhNhanVien1();
														goto chucnanghieuchinhnhanvien;
													}
												}
											}
									//=================
								}
								else if(Vitrihieuchinh == 4)//HIEU CHINH CMND
								{
										ShowConsoleCursor(true);
										gotoXY(16,35);
										cout<<"NHAP CMND: ";
										chuoi = CMNDT;
										sokytudanhap = lengthcmnd;
										HuongDanHieuChinhNhanVien1();
											while(1)
											{
												nhapcmndhc:
												x = 27 + sokytudanhap;
												y = 35;
												dorong = 9;
												TextColor(DenTrang);
												keythem = So(chuoi,dorong,x,y,sokytudanhap);
												CMNDT = chuoi;
												lengthcmnd = sokytudanhap;
												ShowConsoleCursor(false);
												if(keythem == 13)
												{
													if(CMNDT == "")
													{
														TextColor(TrangDoNhat);
														for(int dhdl=0;dhdl<3; dhdl++)
														{
															gotoXY(3,39+dhdl);
															cout<<"                            ";
														}
														gotoXY(5,40);
														cout<<"DU LIEU KHONG DUOC TRONG";
														getch();
														TextColor(DenTrang);
														for(int dhdl=0;dhdl<3; dhdl++)
														{
															gotoXY(3,39+dhdl);
															cout<<"                            ";
														}
														ShowConsoleCursor(true);
														goto nhapcmndhc;
													}
													if(lengthcmnd < 9)
													{
														TextColor(TrangDoNhat);
															for(int i=0; i<3; i++)
															{
																gotoXY(6,39+i);
																cout<<"                       ";
															}
															gotoXY(9,40);
															cout<<"CMND PHAI DU 9 SO";
															getch();
															TextColor(TrangXoa);
															for(int i=0; i<3; i++)
															{
																gotoXY(6,39+i);
																cout<<"                       ";
															}
														ShowConsoleCursor(true);
														goto nhapcmndhc;
													}
													if(KTCMND(dsnv,CMNDT) == true )//NEU MA NHAN VIEN TRUNG THI NHAP LAI
												 	{
												 		TextColor(TrangDoNhat);
														for(int dhdl=0;dhdl<3; dhdl++)
														{
															gotoXY(5,39+dhdl);
															cout<<"                        ";
														}
														gotoXY(10,40);
														cout<<"CMND BI TRUNG";
														getch();
														TextColor(TrangXoa);
														for(int dhdl=0;dhdl<3; dhdl++)
														{
															gotoXY(5,39+dhdl);
															cout<<"                        ";
														}
														ShowConsoleCursor(true);
														goto nhapcmndhc;
													}
													else
													{
														break;
													}
												}
												else if(keythem == 0)
												{
													keythem = getch();
													if(keythem == 59)//NEU LA F1
													{
														lengthhonv = 0;
														TENNVT = "";
														sokytudanhap = 0;
														chuoi = "";
														TextColor(TrangXoa);
														gotoXY(6,35);
														cout<<"                                        ";
														XoaHuongDanHieuChinhNhanVien1();
														goto chucnanghieuchinhnhanvien;
													}
												}
												else if(keythem == -32)
												{
													keythem = getch();	
												}	
											}
									}
								else if(Vitrihieuchinh == 5)//BO CHON
								{
									//XOA LUA CHON HIEU CHINH
									TextColor(TrangXoa);
									for(int i=26; i<=28; i++)//HO
									{
										gotoXY(6,i);
										cout<<"              ";
									}
								
									
									for(int i=26; i<=28; i++)//TEN
									{
										gotoXY(24,i);
										cout<<"              ";
									}
								
									for(int i=26; i<=28; i++)//PHAI
									{
										gotoXY(42,i);
										cout<<"              ";
									}
								
								
									for(int i=30; i<=32; i++)//CMND
									{
										gotoXY(15,i);
										cout<<"              ";
									}
								
									for(int i=30; i<=32; i++)//BO CHON
									{
										gotoXY(33,i);
										cout<<"              ";
									}
									goto batphimchucnangthemnhanvien;
								}

													if(Vitrihieuchinh == 1)//HIEU CHINH HO
													{
															dsnv.nv[vtdsnv]->HO = HONVT;//TIEN HANH THAY THE
													}
													else if(Vitrihieuchinh == 2)//HIEU CHINH TEN
													{
															dsnv.nv[vtdsnv]->TEN = TENNVT;//TIEN HANH THAY THE
													}
													else if(Vitrihieuchinh == 3)//HIEU CHINH PHAI
													{
															dsnv.nv[vtdsnv]->PHAI = PHAIT;
															//XOA NHAP PHAI HIEU CHINH
															TextColor(TrangXoa);
															gotoXY(159,oldplace+vtdsnv);
															cout<<"          ";
															TextColor(TrangDoNhat);
															//IN LAI DU LIEU
															gotoXY(159,oldplace+vtdsnv);
															cout<<dsnv.nv[vtdsnv]->PHAI;
													}
													else if(Vitrihieuchinh == 4)//HIEU CHINH CMND
													{
															dsnv.nv[vtdsnv]->CMND = CMNDT;
//															XOA HO TRONG KHUNG
															TextColor(TrangXoa);
															gotoXY(182,oldplace+vtdsnv);
															cout<<"          ";
															TextColor(TrangDoNhat);
															//IN LAI DU LIEU
															gotoXY(182,oldplace+vtdsnv);
															cout<<dsnv.nv[vtdsnv]->CMND;
													}
													
													//SAP XEP LAI DANH SACH NHAN VIEN SAU KHI HIEU CHINH
											if(Vitrihieuchinh == 1 || Vitrihieuchinh == 2)
											{
												int vtdsnvhc = vtdsnv;
													NHAN_VIEN *nvtam;
													nvtam = new NHAN_VIEN;
													if((vtdsnvhc >= 0 && vtdsnvhc < dsnv.slnv-1) && (dsnv.nv[vtdsnvhc]->TEN >= dsnv.nv[vtdsnvhc+1]->TEN) )
													{
															for(int i=vtdsnvhc+1;i<dsnv.slnv && ((dsnv.nv[i]->TEN < dsnv.nv[i-1]->TEN) || (dsnv.nv[i]->HO < dsnv.nv[i-1]->HO && dsnv.nv[i]->TEN == dsnv.nv[i-1]->TEN)); i++)
															{
																nvtam = dsnv.nv[i-1];
																dsnv.nv[i-1] = dsnv.nv[i];
																dsnv.nv[i] = nvtam;
																vtdsnvhc++;
															}
													}
													else if((vtdsnvhc > 0 && vtdsnvhc <= dsnv.slnv-1) && (dsnv.nv[vtdsnvhc]->TEN <= dsnv.nv[vtdsnvhc-1]->TEN)) 
													{
															for(int i=vtdsnvhc-1; i>=0 && ((dsnv.nv[i]->TEN > dsnv.nv[i+1]->TEN) || (dsnv.nv[i]->HO > dsnv.nv[i+1]->HO && dsnv.nv[i]->TEN == dsnv.nv[i+1]->TEN)); i--)
															{
																nvtam = dsnv.nv[i];
																dsnv.nv[i] = dsnv.nv[i+1];
																dsnv.nv[i+1] = nvtam;
																vtdsnvhc--;
															}
													}
													nvtam = NULL;
													delete nvtam;
													
													//====== XOA DU LIEU TRONG BANG =======
													TextColor(TrangXoa);
													for(int i=vtbatdau; i<vtketthuc;i++)
														{
															gotoXY(65,oldplace+i);
															cout<<"          ";
															gotoXY(90,oldplace+i);
															cout<<"                              ";
															gotoXY(133,oldplace+i);
															cout<<"          ";
															gotoXY(159,oldplace+i);
															cout<<"   ";
															gotoXY(182,oldplace+i);
															cout<<"          ";
														}
													if(ChuoiSearch == "")
													{
														vthighlight=vtdsnvhc;
														vtdsnv = vtdsnvhc;
														if(vtdsnvhc <= vtbatdau)//XAC DINH VI TRI NHAN VIEN VUA THEM
														{
															vtketthuc-=vtbatdau-vtdsnvhc;
															oldplace+=vtbatdau-vtdsnvhc;
															vtbatdau =vtdsnvhc;
														}
														else if(vtdsnvhc >= vtketthuc)
														{
															vtbatdau+= (vtdsnvhc-vtketthuc)+1;
															oldplace-=(vtdsnvhc-vtketthuc)+1;
															vtketthuc=vtdsnvhc+1;
														}
													}
													else if(ChuoiSearch != "")
													{
														gotoXY(75,6);
														cout<<ChuoiSearch;
														ChuoiSearch = "";
														sokytudanhapsearch =0;
														vtbatdau = 0,oldplace = 13;
														vthighlight = vtdsnvhc;
														vtdsnv = vtdsnvhc;
														
														if(dsnv.slnv <= 30)
														{
															vtketthuc = dsnv.slnv;
														}
														else if(dsnv.slnv > 30)
														{
															vtketthuc = 30;
														}
														
														if(vtdsnvhc > vtketthuc)
														{
															vtbatdau+= (vtdsnvhc-vtketthuc)+1;
															oldplace-=(vtdsnvhc-vtketthuc)+1;
															vtketthuc=vtdsnvhc+1;
														}
													}
												
												//IN LAI DU LIEU MOI
												TextColor(DenTrang);
												for(int i=vtbatdau; i<vtketthuc; i++)
												{
													if(vthighlight == i)
													{
														TextColor(TrangDoNhat);
													}
														gotoXY(65,oldplace+i);
														cout<<dsnv.nv[i]->MANV;
														gotoXY(90,oldplace+i);
														cout<<dsnv.nv[i]->HO;
														gotoXY(133,oldplace+i);	
														cout<<dsnv.nv[i]->TEN;
														gotoXY(159,oldplace+i);
														cout<<dsnv.nv[i]->PHAI;
														gotoXY(182,oldplace+i);
														cout<<dsnv.nv[i]->CMND;
													if(vthighlight == i)
													{
														TextColor(DenTrang);
													}
												}	
											}
												TextColor(TrangXoa);
												SoLuongSoSanh = dsnv.slnv;
												//XOA VI TRI NHAP THONG TIN HIEU CHIN
												gotoXY(6,35);
												cout<<"                                        ";
												HuongDanSuDungNhanVien2(doronghuongdan);
								
								///KET THUC BAN CO CHAC LUU KHONG
							}
				}
				}
					
					//============= 4.BO CHON ===========
					if(Vitrikhoitao == 4)
					{
						if(dsnv.slnv > 0)//DI CHUYEN QUA DANH SACH NHAN VIEN
						{
							XoaHuongDanSuDungNhanVien2(doronghuongdan);
							Vitrikhoitao = 0;
							MenuNhapNhanVien(Vitrikhoitao);
							goto duyetdanhsachnhanvien;
						}
					}
					if(Vitrikhoitao == 5)
					{
						system("cls");
						system("color f0");
						return;
					}
					
			}
			}
			
			
		else if(keydsnv == 13)//ENTER
			{
				Vitrikhoitao = 1;
				goto batphimchucnangthemnhanvien;
			}	
	}
}



//============ TAO KHUNG IN NHAN VIEN  ============
void TaoKhungInNhanVien(DS_NHAN_VIEN dsnv)
{
	system("cls");
	system("color f0");
	TextColor(TrangXanhLa);
		gotoXY(0,0);
		cout<<"                                                                                                     ";
		gotoXY(101,0);
		cout<<"                                                                                                     ";	
		//==THANH NGANG TREN ITEM
		gotoXY(0,4);
		cout<<"                                                                                               ";
		gotoXY(95,4);
		cout<<"                                                               ";
		
		//==THANH NGANG DUOI ITEM
		gotoXY(0,8);
		cout<<"                                                                                               ";
		gotoXY(95,8);
		cout<<"                                                               ";
		
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
	for(int i=0; i<=12; i++)
	{
		
		gotoXY(27,5+i);
		cout<<"  ";
		gotoXY(27,18+i);
		cout<<"  ";
		gotoXY(27,30+i);
		cout<<"  ";
	}
	
	//THANH 3
	for(int i=0; i<=12; i++)
	{
		
		gotoXY(70,5+i);
		cout<<"  ";
		gotoXY(70,18+i);
		cout<<"  ";
		gotoXY(70,30+i);
		cout<<"  ";
	}
	
	//THANH 4
	for(int i=0; i<=12; i++)
	{
		
		gotoXY(98,5+i);
		cout<<"  ";
		gotoXY(98,18+i);
		cout<<"  ";
		gotoXY(98,30+i);
		cout<<"  ";
	}
	
	
	//THANH 5
		for(int i=0; i<=12; i++)
	{
		
		gotoXY(120,5+i);
		cout<<"  ";
		gotoXY(120,18+i);
		cout<<"  ";
		gotoXY(120,30+i);
		cout<<"  ";
	}
	
	
		//THANH 6
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(157,i+1);
		cout<<"  ";
		gotoXY(157,12+i);
		cout<<"  ";
		gotoXY(157,22+i);
		cout<<"  ";
		gotoXY(157,32+i);
		cout<<"  ";
	}
	
	
	//THANH 7
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(200,i+1);
		cout<<"  ";
		gotoXY(200,12+i);
		cout<<"  ";
		gotoXY(200,22+i);
		cout<<"  ";
		gotoXY(200,32+i);
		cout<<"  ";
	}
	
	
	
	
	//===============
	TextColor(TrangDo);
	
	gotoXY(70,2);
	cout<<"DANH SACH NHAN VIEN";
	gotoXY(8,6);
	cout<<"MA NHAN VIEN";
	gotoXY(47,6);
	cout<<"HO";
	gotoXY(82,6);
	cout<<"TEN";
	gotoXY(108,6);
	cout<<"PHAI";
	gotoXY(136,6);
	cout<<"CMND";
	
	TextColor(TrangDoNhat);
	gotoXY(167,5);
	cout<<"                          ";
	gotoXY(167,6);
	cout<<"                          ";
	gotoXY(167,7);
	cout<<"                          ";
	gotoXY(167,8);
	cout<<"                          ";
	gotoXY(167,9);
	cout<<"                          ";
	gotoXY(172,7);
	cout<<"HUONG DAN SU DUNG";
	//HUONG DAN SU DUNG
	TextColor(TrangXanhLa);
	int ve = 14;
	for(int i=0; i<=4; i++)
	{
		gotoXY(165,ve+i);
		cout<<"                              ";
		
		gotoXY(165,9+ve+i);
		cout<<"                              ";
	
		gotoXY(165,18+ve+i);
		cout<<"                              ";
	}
	
	
	
	

	gotoXY(169,16);
	cout<<"ARROW LEFT : SANG TRAI";
	gotoXY(168,25);	
	cout<<"ARROW RIGHT : SANG PHAI";
	gotoXY(167,34);
	cout<<"ESC : RA GIAO DIEN CHINH";
	
	TextColor(color);
	
//	getch();
	
	
	
	char keyinnv=77;
	int vitriinnv = 1;
	int sotrang,sonvsein;
	
	//IN BANG KHOI TAO
	
	
	
	if(dsnv.slnv%32==0)
	{
		sotrang = dsnv.slnv/32;
	}
	else if(dsnv.slnv%32 != 0)
	{
		sotrang = dsnv.slnv/32 + 1;
	}
	while(1)
	{
				//XOA DU LIEU TRONG KHUNG
				if(keyinnv == 77 || keyinnv == 75)
				{
						TextColor(TrangXoa);
					for(int i=0; i<32; i++)
					{
						gotoXY(12,9+i);
						cout<<"          ";
						gotoXY(40,9+i);
						cout<<"                         ";
						gotoXY(81,9+i);
						cout<<"          ";
						gotoXY(108,9+i);
						cout<<"   ";
						gotoXY(133,9+i);
						cout<<"          ";
					}
				
					//=================
					//IN DANH SACH VAT TU
					if(vitriinnv == sotrang)
					{
						sonvsein = dsnv.slnv;
					
					}
					else if(vitriinnv != sotrang)
					{
						sonvsein = 32;
					}
					TextColor(DenTrang);
					for(int i=(vitriinnv-1)*32; i<sonvsein; i++)
					{
						gotoXY(12,9+i-(vitriinnv-1)*32);
						cout<<dsnv.nv[i]->MANV;
						gotoXY(40,9+i-(vitriinnv-1)*32);
						cout<<dsnv.nv[i]->HO;
						gotoXY(81,9+i-(vitriinnv-1)*32);
						cout<<dsnv.nv[i]->TEN;
						gotoXY(108,9+i-(vitriinnv-1)*32);	
						cout<<dsnv.nv[i]->PHAI;
						gotoXY(133,9+i-(vitriinnv-1)*32);
						cout<<dsnv.nv[i]->CMND;
					}
					gotoXY(143,41);
					cout<<"Trang : "<<vitriinnv;
				}
				
				keyinnv = getch();
				if(keyinnv == -32)
				{
					keyinnv = getch();
					if(keyinnv == 77)//SANG PHAI
					{
						if(vitriinnv < sotrang)
						{
							vitriinnv++;
						}
						else if(vitriinnv == sotrang)
						{
							vitriinnv = 1;
						}
					}
					else if(keyinnv == 75)//SANG TRAI
					{
						if(vitriinnv > 1)
						{
							vitriinnv--;
						}
						else if(vitriinnv == 1)
						{
							vitriinnv = sotrang;
						}
					}
				}
				else if(keyinnv == 27)
				{
					system("cls");
					break;
				}
	}
//	

	
	//===============================================	
}


//==================== 4. LAP HOA DON ====================
void TaoKhungLapHoaDon()
{
	system("cls");
	system("color f0");
	TextColor(TrangDo);
	gotoXY(16,2);
	cout<<"CHUC NANG CHUONG TRINH";
	gotoXY(116,2);
	cout<<"DANH SACH NHAN VIEN";
	gotoXY(68,10);
	cout<<"MA NHAN VIEN";
	gotoXY(103,10);
	cout<<"HO";
	gotoXY(137,10);
	cout<<"TEN";
	gotoXY(158,10);
	cout<<"GIOI TINH";
	gotoXY(185,10);
	cout<<"CMND";
	gotoXY(65,6);
	TextColor(DoTrang);
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
		gotoXY(60,8);
		cout<<"                                                                   ";
		gotoXY(125,8);
		cout<<"                                                                           ";
		gotoXY(60,12);
		cout<<"                                                                   ";
		gotoXY(125,12);
		cout<<"                                                                           ";
		
		//THANH NGANG CHUC NANG
		gotoXY(2,18);
		cout<<"                                                           ";
		gotoXY(2,32);
		cout<<"                                                           ";
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
		
		gotoXY(60,1+i);
		cout<<"  ";
		gotoXY(60,12+i);
		cout<<"  ";
		gotoXY(60,22+i);
		cout<<"  ";
		gotoXY(60,32+i);
		cout<<"  ";
	}
	//THANH 3
	for(int i=0; i<=8; i++)
	{
		
		gotoXY(86,9+i);
		cout<<"  ";
		gotoXY(86,18+i);
		cout<<"  ";
		gotoXY(86,27+i);
		cout<<"  ";
		gotoXY(86,35+i);
		cout<<"  ";
	}
	//THANH 4
	for(int i=0; i<=8; i++)
	{
		
		gotoXY(125,9+i);
		cout<<"  ";
		gotoXY(125,18+i);
		cout<<"  ";
		gotoXY(125,27+i);
		cout<<"  ";
		gotoXY(125,35+i);
		cout<<"  ";
	}
	//THANH 5
	for(int i=0; i<=8; i++)
	{
		
		gotoXY(150,9+i);
		cout<<"  ";
		gotoXY(150,18+i);
		cout<<"  ";
		gotoXY(150,27+i);
		cout<<"  ";
		gotoXY(150,35+i);
		cout<<"  ";
	}
	//THANH 6
	for(int i=0; i<=8; i++)
	{
		
		gotoXY(174,9+i);
		cout<<"  ";
		gotoXY(174,18+i);
		cout<<"  ";
		gotoXY(174,27+i);
		cout<<"  ";
		gotoXY(174,35+i);
		cout<<"  ";
	}
	//THANH 7
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(200,i+1);
		cout<<"  ";
		gotoXY(200,12+i);
		cout<<"  ";
		gotoXY(200,22+i);
		cout<<"  ";
		gotoXY(200,32+i);
		cout<<"  ";
	}
	
	
	
}


void MenuLapHoaDon(int &Vitri)
{
	char key_press;
//	Vitri = 1;
	
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
			gotoXY(6,i);
			cout<<"                       ";
		}
		gotoXY(10,8);
		cout<<"LAP HOA DON NHAP";
		color = TrangBac;
		
		
		if(Vitri == 2)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=6; i<=10; i++)
		{
			gotoXY(32,i);
			cout<<"                       ";
		}
		gotoXY(35,8);
		cout<<"LAP HOA DON XUAT";
		color = TrangBac;
		
		
		if(Vitri == 3)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=12; i<=16; i++)
		{
			gotoXY(6,i);
			cout<<"                       ";
		}
		gotoXY(14,14);
		cout<<"BO CHON";
		color = TrangBac;
		
		if(Vitri == 4)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=12; i<=16; i++)
		{
			gotoXY(32,i);
			cout<<"                       ";
		}
		gotoXY(35,14);
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
				        	if(Vitri == 1 || Vitri == 3)
				        	{
				        		Vitri++;
							}
							else if(Vitri == 2 || Vitri == 4)
				        	{
				        		Vitri--;
							}
						}
						//NHAN QUA PHAI
						else if(key_press == 77)
				        {
				        	if(Vitri == 1 || Vitri == 3)
				        	{
				        		Vitri++;
							}
							else if(Vitri == 2 || Vitri == 4)
				        	{
				        		Vitri--;
							}
						}
						//NHAN XUONG
						else if(key_press == 80)
				        {
				        	if(Vitri == 1 || Vitri == 2)
				        	{
				        		Vitri+=2;
							}
							else if(Vitri == 3 || Vitri == 4)
				        	{
				        		Vitri-=2;
							}
						}
						//NHAN LEN
						else if(key_press == 72)
						{
							if(Vitri == 1 || Vitri == 2)
				        	{
				        		Vitri+=2;
							}
							else if(Vitri == 3 || Vitri == 4)
				        	{
				        		Vitri-=2;
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




void MenuThemVatTuHoaDon(int &Vitri)
{
	char key_press;
	
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
			gotoXY(12,i);
			cout<<"                       ";
		}
		gotoXY(18,8);
		cout<<"THEM VAT TU";
		color = TrangBac;
		
		
		if(Vitri == 2)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=12; i<=16; i++)
		{
			gotoXY(12,i);
			cout<<"                       ";
		}
		gotoXY(19,14);
		cout<<"XOA VAT TU";
		color = TrangBac;
		
		
		if(Vitri == 3)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=18; i<=22; i++)
		{
			gotoXY(12,i);
			cout<<"                       ";
		}
		gotoXY(15,20);
		cout<<"HIEU CHINH VAT TU";
		color = TrangBac;
		
		
		if(Vitri == 4)
		{
			color = TrangXanhLa;
		}
		TextColor(color);
		for(int i=24; i<=28; i++)
		{
			gotoXY(12,i);
			cout<<"                       ";
		}

		gotoXY(18,26);
		cout<<"LUU HOA DON";
		color = TrangBac;
		
	
			key_press=getch();
			if(key_press == -32)
			{
						key_press = getch();
				
						if(key_press == 72)//LEN
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
						else if(key_press == 80)//XUONG
						{
							if(Vitri != 4)
				        	{
				        		Vitri++;
							}
							else if(Vitri ==4)
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
}

void TaoKhungChiTietHoaDon()
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
		cout<<"                                          ";
		gotoXY(2,37);
		cout<<"                                          ";
		//THANH NGANG DOWN	 
		gotoXY(0,43);
		cout<<"                                                                                                     ";
		gotoXY(101,43);
		cout<<"                                                                                                     ";
	
			
	//THANH DOC
	//THANH 1
	for(int i=0; i<=10; i++)
	{
		gotoXY(0,1+i);
		cout<<"  ";
		gotoXY(0,12+i);
		cout<<"  ";
		gotoXY(0,22+i);
		cout<<"  ";
		gotoXY(0,32+i);
		cout<<"  ";
		
		//THANH CUOI
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


void TaoKhungCTHD(NODE_HOA_DON *&p,DS_NHAN_VIEN dsnv,int vtdsnv)
{
	TextColor(TrangDo);
	gotoXY(10,2);
	cout<<"CHUC NANG CHUONG TRINH ";
	TextColor(DoTrang);
	gotoXY(60,2);
	cout<<"SO HOA DON : ";
	cout<<p->Data.SOHD;
	gotoXY(97,2);
	cout<<"NGAY LAP : ";
	cout<<p->Data.NgayLap.day<<"/"<<p->Data.NgayLap.month<<"/"<<p->Data.NgayLap.year;
	gotoXY(121,2);
	cout<<"LOAI : "<<p->Data.LOAI;
	gotoXY(133,2);
	cout<<"MA NV : "<<dsnv.nv[vtdsnv]->MANV;
	gotoXY(153,2);
	cout<<"HO TEN : "<<dsnv.nv[vtdsnv]->HO<<" "<<dsnv.nv[vtdsnv]->TEN;
	TextColor(TrangDo);
	gotoXY(49,6);
	cout<<"STT";
	gotoXY(60,6);
	cout<<"MA VAT TU";
	//=== ke thanh doc gotoXY(88,4);
	gotoXY(93,6);
	cout<<"TEN VAT TU";
	//=== ke thanh doc gotoXY(146,4);
	gotoXY(127,6);
	cout<<"SO LUONG";
	//=== ke thanh doc gotoXY(164,4);
	gotoXY(140,6);
	cout<<"DON GIA (VND)";
	//=== ke thanh doc gotoXY(176,4);
	gotoXY(160,6);
	cout<<"VAT (%)";
	
	gotoXY(178,6);
	cout<<"TRI GIA (VND)";
	
	gotoXY(165,33);
	cout<<"TONG TRI GIA :            (VND)";
	
	TextColor(TrangXanhLa);
	gotoXY(46,8);
	cout<<"                                                                              ";
	gotoXY(124,8);
	cout<<"                                                                            ";
	
	TextColor(TrangXanhLa);
	//THANH 2
	for(int i=0; i<=10; i++)
	{
		
		gotoXY(44,1+i);
		cout<<"  ";
		gotoXY(44,12+i);
		cout<<"  ";
		gotoXY(44,22+i);
		cout<<"  ";
		gotoXY(44,32+i);
		cout<<"  ";
	}
	

	for(int i=0; i<=7; i++)
	{
		//THANH 3
		gotoXY(55,5+i);
		cout<<"  ";
		gotoXY(55,13+i);
		cout<<"  ";
		gotoXY(55,21+i);
		cout<<"  ";
		
		//THANH 4
		gotoXY(72,5+i);
		cout<<"  ";
		gotoXY(72,13+i);
		cout<<"  ";
		gotoXY(72,21+i);
		cout<<"  ";
		
		//THANH 5
		gotoXY(123,5+i);
		cout<<"  ";
		gotoXY(123,13+i);
		cout<<"  ";
		gotoXY(123,21+i);
		cout<<"  ";
		
		//THANH 6
		gotoXY(136,5+i);
		cout<<"  ";
		gotoXY(136,13+i);
		cout<<"  ";
		gotoXY(136,21+i);
		cout<<"  ";
		
		//THANH 7
		gotoXY(155,5+i);
		cout<<"  ";
		gotoXY(155,13+i);
		cout<<"  ";
		gotoXY(155,21+i);
		cout<<"  ";
		
		//THANH 8
		gotoXY(169,5+i);
		cout<<"  ";
		gotoXY(169,13+i);
		cout<<"  ";
		gotoXY(169,21+i);
		cout<<"  ";
	}
	
	gotoXY(46,29);
	cout<<"                                                                              ";
	gotoXY(124,29);
	cout<<"                                                                            ";
	
}

void XoaKhungCTHD(int slvthdht)
{
	TextColor(TrangXoa);
	gotoXY(60,2);
	cout<<"SO HOA DON :                     ";
	gotoXY(97,2);
	cout<<"NGAY LAP :           ";
	gotoXY(121,2);
	cout<<"LOAI :  ";
	gotoXY(133,2);
	cout<<"MA NV :           ";
	gotoXY(153,2);
	cout<<"HO TEN :                                    ";
	
	gotoXY(49,6);
	cout<<"STT";
	gotoXY(60,6);
	cout<<"MA VAT TU";
	//=== ke thanh doc gotoXY(88,4);
	gotoXY(93,6);
	cout<<"TEN VAT TU";
	//=== ke thanh doc gotoXY(146,4);
	gotoXY(127,6);
	cout<<"SO LUONG";
	//=== ke thanh doc gotoXY(164,4);
	gotoXY(140,6);
	cout<<"DON GIA (VND)";
	//=== ke thanh doc gotoXY(176,4);
	gotoXY(160,6);
	cout<<"VAT (%)";
	
	gotoXY(178,6);
	cout<<"TRI GIA (VND)";
	
	gotoXY(165,33);
	cout<<"TONG TRI GIA :            (VND)";
	

	gotoXY(46,29);
	cout<<"                                                                              ";
	gotoXY(124,29);
	cout<<"                                                                            ";
	
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
		//THANH 3
		gotoXY(72,5+i);
		cout<<"  ";
		gotoXY(72,12+i);
		cout<<"  ";
		gotoXY(72,22+i);
		cout<<"  ";
		gotoXY(72,32+i);
		cout<<"  ";
		
		//THANH 4
		gotoXY(123,5+i);
		cout<<"  ";
		gotoXY(123,12+i);
		cout<<"  ";
		gotoXY(123,22+i);
		cout<<"  ";
		gotoXY(123,32+i);
		cout<<"  ";
		
		//THANH 5
		gotoXY(136,5+i);
		cout<<"  ";
		gotoXY(136,12+i);
		cout<<"  ";
		gotoXY(136,22+i);
		cout<<"  ";
		gotoXY(136,32+i);
		cout<<"  ";
		
		//THANH 6
		gotoXY(155,5+i);
		cout<<"  ";
		gotoXY(155,12+i);
		cout<<"  ";
		gotoXY(155,22+i);
		cout<<"  ";
		gotoXY(155,32+i);
		cout<<"  ";
		
		//THANH 7
		gotoXY(169,5+i);
		cout<<"  ";
		gotoXY(169,12+i);
		cout<<"  ";
		gotoXY(169,22+i);
		cout<<"  ";
		gotoXY(169,32+i);
		cout<<"  ";
		
	}

	//XOA DU LIEU VAT TU TRONG KHUNG
	for(int i=0; i<slvthdht; i++)
	{
			gotoXY(49,9+i);//SOTT
			cout<<"  ";
			gotoXY(59,9+i);//MA VT
			cout<<"          ";
			gotoXY(77,9+i);//TEN VT
			cout<<"                                                  ";
			gotoXY(126,9+i);//SO LUONG
			cout<<"      ";
			gotoXY(141,9+i);//DON GIA
			cout<<"            ";
			gotoXY(160,9+i);//VAT
			cout<<"    ";
			gotoXY(173,9+i);
			cout<<"                           ";
	}
	
	TextColor(TrangXanh);
	//KE THANH DOC STT
	
	
	TextColor(DenTrang);
}





int KhungThemVTHD(NODE_HOA_DON *&p,int slvthdht,TREE_VAT_TU tam[], int &slvt)
{
	TextColor(DoTrang);
	gotoXY(57,6);
	cout<<"TIM KIEM :";
	TextColor(TrangDo);
	gotoXY(112,2);
	cout<<"DANH SACH VAT TU TRONG KHO";
	gotoXY(56,10);
	cout<<"MA VAT TU";
	gotoXY(99,10);
	cout<<"TEN VAT TU";
	gotoXY(145,10);
	cout<<"DON VI TINH";
	gotoXY(179,10);
	cout<<"SO LUONG TON";


	TextColor(TrangXanhLa);
		//THANH NGANG BETWEEN DUOI
		gotoXY(46,8);
		cout<<"                                                                            ";
		gotoXY(122,8);
		cout<<"                                                                              ";
		
		//THANH NGANG BETWEEN DUOI
		gotoXY(46,12);
		cout<<"                                                                            ";
		gotoXY(122,12);
		cout<<"                                                                              ";
			

	//THANH 3 MA VT
	for(int i=0; i<=8; i++)
	{
		
		gotoXY(74,8+i);
		cout<<"  ";
		gotoXY(74,17+i);
		cout<<"  ";
		gotoXY(74,26+i);
		cout<<"  ";
		gotoXY(74,34+i);
		cout<<"  ";
	}
	
	//THANH 4 TEN VT
	for(int i=0; i<=8; i++)
	{
		gotoXY(132,8+i);
		cout<<"  ";
		gotoXY(132,17+i);
		cout<<"  ";
		gotoXY(132,26+i);
		cout<<"  ";
		gotoXY(132,34+i);
		cout<<"  ";
	}
	
	//THANH 5 DON VI TINH
	for(int i=0; i<=8; i++)
	{
		gotoXY(167,8+i);
		cout<<"  ";
		gotoXY(167,17+i);
		cout<<"  ";
		gotoXY(167,26+i);
		cout<<"  ";
		gotoXY(167,34+i);
		cout<<"  ";
	}
	
	
	int vtbatdau,vtketthuc,SoLuongSoSanh,vthighlight,vtvtht,oldplace,dorong = 50,doronghuongdan = 40;
	string ChuoiSearch;
	int x=67,y=6;
	int sokytudanhapsearch =0;
	char key_press;
//	int Vitricnvt = 1;

//	int batdau=0,ketthuc=30;
	
	vtbatdau=0,vthighlight=0,vtvtht,oldplace=13;
	if(slvt <= 30)
	{
		vtketthuc = slvt;
	}
	else if(slvt > 30)
	{
		vtketthuc = 30;
	}
	
	
	
		//KHOI TAO BAN DAU
		TextColor(DenTrang);
		for(int j=vtbatdau; j<vtketthuc; j++)
		{
			if(j == vthighlight)
			{
				TextColor(TrangDoNhat);
				vtvtht = j;
			}
				gotoXY(54,oldplace+j);
				cout<<tam[j]->MAVT;
				gotoXY(82,oldplace+j);
				cout<<tam[j]->TENVT;		
				gotoXY(150,oldplace+j);
				cout<<tam[j]->DVT;
				gotoXY(182,oldplace+j);
				cout<<tam[j]->SOLT;	
			if(j == vthighlight)
			{
				TextColor(DenTrang);
			}
		}
				
	SoLuongSoSanh = slvt;		
	while(1)//DANH SACH VAT TU
	{
		ShowConsoleCursor(true);
		//BAT PHIM
		themvattuhoadon:
		gotoXY(x,y);
		key_press=getch();
	
		if(key_press == 8)//Kiem neu la phim nhan la backspace thi se lui nguoc con tro lai va bien ki tu vua nhap vao la khoang trang
				{
					if(sokytudanhapsearch != 0)
						{
							TextColor(DenTrang);
							gotoXY(x,y);
							key_press = 32;//gan ki tu vua nhap vao thanh khoang trang
							cout<<"\b";//Lenh lui nguoc con tro chi vi
							cout<<key_press;//cout ra ki tu khoang trang
							cout<<"\b";
							sokytudanhapsearch--;//lui lai 1 don vi
							ChuoiSearch.erase(sokytudanhapsearch,1);
							x--;
																
							//XOA DU LIEU CU
							TextColor(TrangXoa);
							for(int i=vtbatdau; i<vtketthuc;i++)						
							{
							
								//XOA DU LIEU TRONG KHUNG
								TextColor(DenTrang);
								gotoXY(54,oldplace+i);
								cout<<"             ";
								gotoXY(82,oldplace+i);
								cout<<"                                                  ";	
								gotoXY(150,oldplace+i);
								cout<<"        ";
								gotoXY(182,oldplace+i);
								cout<<"           ";
							}
							TextColor(DenTrang);
							vthighlight = 0;
							vtbatdau = 0;
							oldplace = 13;
							if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
							{
								if(slvt <= 30)
								{
									vtketthuc = slvt;
								}
							else if(slvt > 30)
								{
									vtketthuc = 30;
								}
							for(int i=vtbatdau; i<vtketthuc; i++)
								{
									if(i == vthighlight)
									{
										TextColor(TrangDoNhat);
										vtvtht = i;
									}
									gotoXY(54,oldplace+i);
									cout<<tam[i]->MAVT;
									gotoXY(82,oldplace+i);
									cout<<tam[i]->TENVT;		
									gotoXY(150,oldplace+i);
									cout<<tam[i]->DVT;
									gotoXY(182,oldplace+i);
									cout<<tam[i]->SOLT;	
									if(i == vthighlight)
										{
											TextColor(DenTrang);
										}
								}
								SoLuongSoSanh = slvt;
							}
							else if(ChuoiSearch != "")
								{
									vtketthuc=0;
									SoLuongSoSanh = 0;
								for(int i=vtbatdau,j=0;j < slvt;)
									{
										if(tam[j]->MAVT.find(ChuoiSearch) != -1)
										{
											if(i < 30)
												{
													if(i == vthighlight)
														{
															TextColor(TrangDoNhat);
															vtvtht= j;
														}
															gotoXY(54,oldplace+i);
															cout<<tam[j]->MAVT;
															gotoXY(82,oldplace+i);
															cout<<tam[j]->TENVT;		
															gotoXY(150,oldplace+i);
															cout<<tam[j]->DVT;
															gotoXY(182,oldplace+i);
															cout<<tam[j]->SOLT;
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
				
		else if((key_press >=97 && key_press<=122 || key_press>=65 && key_press<=90  || key_press>=48 && key_press<=57 || key_press == 95 ) && sokytudanhapsearch<dorong)
											{
												//XOA DU LIEU CU
												TextColor(TrangXoa);
												for(int i=vtbatdau; i<vtketthuc;i++)						
												{
														gotoXY(54,oldplace+i);
														cout<<"             ";
														gotoXY(82,oldplace+i);
														cout<<"                                                  ";	
														gotoXY(150,oldplace+i);
														cout<<"        ";
														gotoXY(182,oldplace+i);
														cout<<"           ";
												}
												if(key_press>=97 && key_press<=122)
												{
													key_press-=32;
												}
												gotoXY(x,y);
												TextColor(DenTrang);
												cout<<key_press;
												ChuoiSearch+=key_press;
												sokytudanhapsearch++;//tang len 1 don vi
												x++;
												vthighlight = 0;
												vtbatdau=0;
												vtketthuc = 0;
												oldplace = 13;
												SoLuongSoSanh = 0;
												vtketthuc=0;
												for(int i=vtbatdau,j=0;j < slvt;)
													{
														if(tam[j]->MAVT.find(ChuoiSearch) != -1)
														{
															if(i < 30)
															{
																if(i == vthighlight)
																	{
																		TextColor(TrangDoNhat);
																		vtvtht = j;
																	}
																	gotoXY(54,oldplace+i);
																	cout<<tam[j]->MAVT;
																	gotoXY(82,oldplace+i);
																	cout<<tam[j]->TENVT;		
																	gotoXY(150,oldplace+i);
																	cout<<tam[j]->DVT;
																	gotoXY(182,oldplace+i);
																	cout<<tam[j]->SOLT;
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
		else if(key_press == -32)
		{
			key_press = getch();
				if(key_press == 72)//NHAN LEN
					{
						if(vthighlight > vtbatdau)
							{
								vthighlight--;
							}
						else if(vthighlight == vtbatdau && vtbatdau > 0)
							{
								for(int i=vtbatdau; i<vtketthuc;i++)						
								{
									gotoXY(54,oldplace+i);
									cout<<"             ";
									gotoXY(82,oldplace+i);
									cout<<"                                                  ";	
									gotoXY(150,oldplace+i);
									cout<<"        ";
									gotoXY(182,oldplace+i);
									cout<<"           ";
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
											vtvtht = i;
										}
										gotoXY(54,oldplace+i);
										cout<<tam[i]->MAVT;
										gotoXY(82,oldplace+i);
										cout<<tam[i]->TENVT;		
										gotoXY(150,oldplace+i);
										cout<<tam[i]->DVT;
										gotoXY(182,oldplace+i);
										cout<<tam[i]->SOLT;
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
								while(j < slvt)
								{
									if(tam[j]->MAVT.find(ChuoiSearch) != -1)
									{
										if(i>=vtbatdau && i<vtketthuc)
										{
											if(i == vthighlight)
											{
												TextColor(TrangDoNhat);
												vtvtht = j;
											}
											gotoXY(54,oldplace+i);
											cout<<tam[j]->MAVT;
											gotoXY(82,oldplace+i);
											cout<<tam[j]->TENVT;		
											gotoXY(150,oldplace+i);
											cout<<tam[j]->DVT;
											gotoXY(182,oldplace+i);
											cout<<tam[j]->SOLT;										
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
				else if(key_press == 80)//NHAN XUONG
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
								gotoXY(54,oldplace+i);
								cout<<"             ";
								gotoXY(82,oldplace+i);
								cout<<"                                                  ";	
								gotoXY(150,oldplace+i);
								cout<<"        ";
								gotoXY(182,oldplace+i);
								cout<<"           ";
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
									vtvtht = i;
								}
										gotoXY(54,oldplace+i);
										cout<<tam[i]->MAVT;
										gotoXY(82,oldplace+i);
										cout<<tam[i]->TENVT;		
										gotoXY(150,oldplace+i);
										cout<<tam[i]->DVT;
										gotoXY(182,oldplace+i);
										cout<<tam[i]->SOLT;				
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
							while(j < slvt)
							{
								if(tam[j]->MAVT.find(ChuoiSearch) != -1)
								{
									if(i>=vtbatdau && i<vtketthuc)
									{
										if(i == vthighlight)
										{
											TextColor(TrangDoNhat);
											vtvtht = j;
										}
											gotoXY(54,oldplace+i);
											cout<<tam[j]->MAVT;
											gotoXY(82,oldplace+i);
											cout<<tam[j]->TENVT;		
											gotoXY(150,oldplace+i);
											cout<<tam[j]->DVT;
											gotoXY(182,oldplace+i);
											cout<<tam[j]->SOLT;;
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
		}
		
		
		else if(key_press == 13)
		{
			for(int i=0; i<slvthdht; i++)
			{
				if(p->Data.ds_chi_tiet_hd.ds[i].MAVT == tam[vtvtht]->MAVT)
				{
					TextColor(TrangDoNhat);
					for(int j=0; j<3;j++)
					{
						gotoXY(7,32+j);
						cout<<"                              ";
					}
					gotoXY(9,33);
					cout<<"VAT TU DA CO TRONG HOA DON";
					getch();
					TextColor(TrangXoa);
					for(int j=0; j<3;j++)
					{
						gotoXY(7,32+j);
						cout<<"                              ";
					}
					goto themvattuhoadon;
				}
			}
			TextColor(TrangXoa);
			gotoXY(67,6);
			cout<<ChuoiSearch;
			break;
		}
	}
	
			//XOA DU LIEU TRONG KHUNG
				TextColor(TrangXoa);
				gotoXY(57,6);
				cout<<"TIM KIEM : ";
				gotoXY(112,2);
				cout<<"DANH SACH VAT TU TRONG KHO";
				gotoXY(56,10);
				cout<<"MA VAT TU";
				gotoXY(99,10);
				cout<<"TEN VAT TU";
				gotoXY(145,10);
				cout<<"DON VI TINH";
				gotoXY(179,10);
				cout<<"SO LUONG TON";
			
			
		
				//THANH NGANG BETWEEN DUOI
				gotoXY(46,12);
				cout<<"                                                                            ";
				gotoXY(122,12);
				cout<<"                                                                              ";
					
		
			
			for(int i=0; i<=8; i++)
			{
				//THANH 3 MA VT
				gotoXY(74,9+i);
				cout<<"  ";
				gotoXY(74,17+i);
				cout<<"  ";
				gotoXY(74,26+i);
				cout<<"  ";
				gotoXY(74,34+i);
				cout<<"  ";
				
				//THANH 4 TEN VT
				gotoXY(132,9+i);
				cout<<"  ";
				gotoXY(132,17+i);
				cout<<"  ";
				gotoXY(132,26+i);
				cout<<"  ";
				gotoXY(132,34+i);
				cout<<"  ";
				
				//THANH 5 DON VI TINH
				gotoXY(167,9+i);
				cout<<"  ";
				gotoXY(167,17+i);
				cout<<"  ";
				gotoXY(167,26+i);
				cout<<"  ";
				gotoXY(167,34+i);
				cout<<"  ";
			}
			
				//XOA DU LIEU TRONG KHUNG
				for(int j=0; j<30;j++)
				{
					//XOA DU LIEU TRONG KHUNG
						TextColor(TrangXoa);
						gotoXY(54,13+j);
						cout<<"             ";
						gotoXY(82,13+j);
						cout<<"                                                  ";	
						gotoXY(150,13+j);
						cout<<"        ";
						gotoXY(182,13+j);
						cout<<"           "; 
				}
			
			//========================
			return  vtvtht;
}




void TaoKhungThemVatTuHoaDon(TREE_VAT_TU t,TREE_VAT_TU tam[], int &slvt,NODE_HOA_DON *&p,DS_NHAN_VIEN dsnv,int vtdsnv)
{
	int doronghuongdan = 39;
	int vitrivtdsvt,slvthdht=0,Vitrikhoitao =1;
	slvthdht = p->Data.ds_chi_tiet_hd.slvthd;//CHO DE TRUY XUAT
	TaoKhungChiTietHoaDon();
	TaoKhungCTHD(p,dsnv,vtdsnv);
	TextColor(TrangDo);//IN LAI TONG TRI GIA
	gotoXY(180,33);
	cout<<(size_t)p->Data.TONGTRIGIA;
	while(1)
	{
		nhapvattuhoadon:
		HuongDanSuDungChiTietHoaDon1(doronghuongdan);
		MenuThemVatTuHoaDon(Vitrikhoitao);
		//======== 1. THEM VAT TU TRONG HOA DON =======
		if(Vitrikhoitao == 1)
		{
			//TO MAU XANH CHO O THEM VAT TU, CHO DE PHAN BIET
				TextColor(TrangBac);
				for(int i=6; i<=10; i++)
				{
					gotoXY(12,i);

					cout<<"                       ";
				}
				gotoXY(18,8);
				cout<<"THEM VAT TU";
			//=================================	
			//THUC HIEN XOA KHUNG CTHD;
			XoaKhungCTHD(slvthdht);
			vitrivtdsvt = KhungThemVTHD(p,slvthdht,tam,slvt);//IN RA DANH SACH VAT TU CHO NGUOI LAP HOA DON CHON
//			TextColor(DenTrang);
//			cout<<tam[vitrivtdsvt]->MAVT;
			TaoKhungCTHD(p,dsnv,vtdsnv);
			p->Data.ds_chi_tiet_hd.ds[slvthdht].MAVT = tam[vitrivtdsvt]->MAVT;
			
			//IN NHUNG DANH SACH VAT TU CO TRONG DANH SACH
			TextColor(DenTrang);
			for(int i=0; i<slvthdht; i++)
			{
				gotoXY(49,9+i);
				cout<<i+1;
				gotoXY(59,9+i);
				cout<<p->Data.ds_chi_tiet_hd.ds[i].MAVT;
				gotoXY(77,9+i);
				TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[i].MAVT);
				gotoXY(126,9+i);
				cout<<p->Data.ds_chi_tiet_hd.ds[i].SLVT;
				gotoXY(141,9+i);
				cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[i].DONGIA;
				gotoXY(160,9+i);
				cout<<p->Data.ds_chi_tiet_hd.ds[i].VAT;
				gotoXY(173,9+i);
				cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[i].TRIGIA;
			}
			
			gotoXY(49,9+slvthdht);
			cout<<slvthdht+1;
			gotoXY(59,9+slvthdht);
			cout<<p->Data.ds_chi_tiet_hd.ds[slvthdht].MAVT;
			gotoXY(77,9+slvthdht);
			TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[slvthdht].MAVT);
			TextColor(TrangDo);//IN LAI TONG TRI GIA
			gotoXY(180,33);
			cout<<(size_t)p->Data.TONGTRIGIA;
			
			string SL,VATHD,DONGIAHD,chuoi;
			int lengthslvthd=0,lengthvathd=0,lengthdghd=0;
			char keythem;
			int Vitrithem=1;
			int x,y,sokytudanhap=0,dorong=0;
				while(1)
						{
							nhaptongtinvattuhoadon:
							TextColor(DenTrang);	
							ShowConsoleCursor(true);
										//SO LUONG
										if(Vitrithem == 1)
										{
											chuoi = SL;
											sokytudanhap = lengthslvthd;
											x = 126 + sokytudanhap;
											y = 9+slvthdht;
											dorong = 6;
											keythem = SoVaDauCham(chuoi,dorong,x,y,sokytudanhap);
										}
										//DON GIA VAT TU HOA DON
										if(Vitrithem == 2)
										{
											chuoi = DONGIAHD;
											sokytudanhap = lengthvathd;
											x = 141 + sokytudanhap;
											y =9+slvthdht;
											dorong = 10;
											keythem = SoVaDauCham(chuoi,dorong,x,y,sokytudanhap);
										}
										//VAT VT HOA DON
										if(Vitrithem == 3)
										{
											chuoi = VATHD;
											sokytudanhap = lengthdghd;
											x = 160 + sokytudanhap;
											y = 9+slvthdht;
											dorong = 4;
											keythem = SoVaDauCham(chuoi,dorong,x,y,sokytudanhap);
										}
							ShowConsoleCursor(false);		
								
										//CAP NHAT LAI CHUOI SAU KHI NHAP
										if(Vitrithem == 1)//SO LUONG VAT TU HOA DON
										{
											SL = chuoi;
											lengthslvthd = sokytudanhap;
											
											if(p->Data.LOAI == "X")//NEU LA HOA DON XUAT
											{
												if(atof(SL.c_str()) > tam[vitrivtdsvt]->SOLT)
													{
													
														TextColor(TrangDoNhat);
														for(int dhdl=0;dhdl<3; dhdl++)
															{
																gotoXY(9,32+dhdl);
																cout<<"                            ";
															}
															gotoXY(12,33);
															cout<<"SO LUONG TON KHONG DU";
															if(keythem == -32)
															{
																keythem = getch();
															}
																getch();
														TextColor(TrangXoa);
														for(int dhdl=0;dhdl<3; dhdl++)
															{
																gotoXY(9,32+dhdl);
																cout<<"                            ";
															}	
													
													TextColor(DenTrang);
													goto nhaptongtinvattuhoadon;
													}
											}
										}
										//DON GIA VAT TU HOA DON
										else if(Vitrithem == 2)
										{
											DONGIAHD = chuoi;
											lengthvathd = sokytudanhap;
										}
										//VAT HOA DON
										else if(Vitrithem == 3)
										{
											VATHD = chuoi;
											lengthdghd = sokytudanhap;
											if(atof(VATHD.c_str()) > 100)
											{
												TextColor(TrangDoNhat);
														for(int dhdl=0;dhdl<3; dhdl++)
															{
																gotoXY(9,32+dhdl);
																cout<<"                            ";
															}
															gotoXY(15,33);
															cout<<"VAT KHONG HOP LE";
															if(keythem == -32)
															{
																keythem = getch();
															}
																getch();
														TextColor(TrangXoa);
														for(int dhdl=0;dhdl<3; dhdl++)
															{
																gotoXY(9,32+dhdl);
																cout<<"                            ";
															}
														TextColor(DenTrang);
													goto nhaptongtinvattuhoadon;	
											}
										}
										
										if(keythem == -32)//NHAN PHIM DIEU KHIEN
										{
											keythem = getch();
											if(keythem == 75)//QUA TRAI
											{
												if(Vitrithem == 1)
												{
													Vitrithem = 3;
												}
												else if(Vitrithem != 1)
												{
													Vitrithem--;
												}
											}
											else if(keythem == 77)//QUA PHAI
											{
												if(Vitrithem == 3)
												{
													Vitrithem = 1;
												}
												else if(Vitrithem !=3)
												{
													Vitrithem++;
												}
											}
										}
									else if(keythem == 13)//NHAN ENTER
									{
										//NEU DU LIEU DANG TRONG
										if(SL.length() == 0 || VATHD.length() == 0 || DONGIAHD.length() == 0)
										{
											TextColor(TrangDoNhat);
														for(int dhdl=0;dhdl<3; dhdl++)
															{
																gotoXY(9,32+dhdl);
																cout<<"                            ";
															}
															gotoXY(11,33);
															cout<<"DU LIEU KHONG DUOC TRONG";
																getch();
														TextColor(TrangXoa);
														for(int dhdl=0;dhdl<3; dhdl++)
															{
																gotoXY(9,32+dhdl);
																cout<<"                            ";
															}	
										TextColor(DenTrang);
										goto nhaptongtinvattuhoadon;//DI CHUYEN DEN VI TRI THOAT DE TIEP TUC NHAP THONG TIN VAT TU
										}
										
										p->Data.ds_chi_tiet_hd.ds[slvthdht].SLVT = atof(SL.c_str());	
										p->Data.ds_chi_tiet_hd.ds[slvthdht].DONGIA = atof(DONGIAHD.c_str());
										p->Data.ds_chi_tiet_hd.ds[slvthdht].VAT = atof(VATHD.c_str());
										gotoXY(173,9+slvthdht);
										p->Data.ds_chi_tiet_hd.ds[slvthdht].TRIGIA = p->Data.ds_chi_tiet_hd.ds[slvthdht].SLVT*p->Data.ds_chi_tiet_hd.ds[slvthdht].DONGIA*p->Data.ds_chi_tiet_hd.ds[slvthdht].VAT*0.01 + p->Data.ds_chi_tiet_hd.ds[slvthdht].SLVT*p->Data.ds_chi_tiet_hd.ds[slvthdht].DONGIA;
										cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[slvthdht].TRIGIA;
										
										TextColor(DoDo);
										gotoXY(180,33);
										cout<<(size_t)p->Data.TONGTRIGIA;
										
										p->Data.TONGTRIGIA+=p->Data.ds_chi_tiet_hd.ds[slvthdht].TRIGIA;
										
										TextColor(TrangDo);
										gotoXY(180,33);
										cout<<(size_t)p->Data.TONGTRIGIA;
										slvthdht++;
									
										goto nhapvattuhoadon;
									}
						}
									
		}
		
		//======= 2.XOA VAT TU TRONG HOA DON =======
		else if(Vitrikhoitao == 2)
		{
			if(slvthdht == 0)
			{
				TextColor(TrangDoNhat);
					for(int dhdl=0;dhdl<3; dhdl++)
						{
							gotoXY(9,32+dhdl);
							cout<<"                            ";
						}
						gotoXY(14,33);
						cout<<"DANH SACH DANG RONG";
							getch();
				TextColor(TrangXoa);
					for(int dhdl=0;dhdl<3; dhdl++)
						{
							gotoXY(9,32+dhdl);
							cout<<"                            ";
						}			
			}
			else 
			{
				XoaHuongDanSuDungChiTietHoaDon1(doronghuongdan);
				HuongDanSuDungChiTietHoaDon3(doronghuongdan);
				//TO MAU LAI CHO CHUC NANG XOA, CHO DE PHAN BIET
				TextColor(TrangBac);
				for(int i=12; i<=16; i++)
				{
					gotoXY(12,i);
					cout<<"                       ";
				}
				gotoXY(19,14);
				cout<<"XOA VAT TU";
				//=============================
				char keyxoavthd;
				int vitrixoavthd=1;
				int oldplace=9;
				bool indlmoi =false;
			
				//HIGHLIGHT VAT TU DAU TIEN TRONG HOA DON
				TextColor(TrangDoNhat);
				gotoXY(49,oldplace);
				cout<<vitrixoavthd;
				gotoXY(59,oldplace);
				cout<<p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].MAVT;
				gotoXY(77,oldplace);
				TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].MAVT);
				gotoXY(126,oldplace);
				cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].SLVT;
				gotoXY(141,oldplace);
				cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].DONGIA;
				gotoXY(160,oldplace);
				cout<<p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].VAT;
				gotoXY(173,oldplace);
				cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].TRIGIA;
						while(1)//DANH SACH VAT TU
						{
							//BAT PHIM
							keyxoavthd=getch();
	
							if(keyxoavthd == -32)
							{
								keyxoavthd = getch();
								//NHAN XUONG
								if(keyxoavthd == 80)
								{
								 //NHAN XUONG
							 	//XU LI GIA TRI VI TRI
									if(vitrixoavthd < slvthdht)
							    	{
							    		vitrixoavthd++;
							    		//IN DU LIEU
											TextColor(DenTrang);
											gotoXY(49,oldplace+vitrixoavthd-2);
											cout<<vitrixoavthd-1;
											gotoXY(59,oldplace+vitrixoavthd-2);
											cout<<p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-2].MAVT;
											gotoXY(77,oldplace+vitrixoavthd-2);
											TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-2].MAVT);
											gotoXY(126,oldplace+vitrixoavthd-2);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-2].SLVT;
											gotoXY(141,oldplace+vitrixoavthd-2);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-2].DONGIA;
											gotoXY(160,oldplace+vitrixoavthd-2);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-2].VAT;
											gotoXY(173,oldplace+vitrixoavthd-2);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-2].TRIGIA;
											
											
											
											TextColor(TrangDoNhat);
											gotoXY(49,oldplace+vitrixoavthd-1);
											cout<<vitrixoavthd;
											gotoXY(59,oldplace+vitrixoavthd-1);
											cout<<p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].MAVT;
											gotoXY(77,oldplace+vitrixoavthd-1);
											TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].MAVT);
											gotoXY(126,oldplace+vitrixoavthd-1);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].SLVT;
											gotoXY(141,oldplace+vitrixoavthd-1);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].DONGIA;
											gotoXY(160,oldplace+vitrixoavthd-1);
											cout<<p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].VAT;
											gotoXY(173,oldplace+vitrixoavthd-1);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].TRIGIA;
									}
								}
								//NHAN LEN
								else if(keyxoavthd == 72)
										{
											//=========XY LI GIA TRI VI TRI
											if(vitrixoavthd > 1)
									    	{
									    		vitrixoavthd--;
									    		//IN DU LIEU
												TextColor(DenTrang);
												gotoXY(49,oldplace+vitrixoavthd);
												cout<<vitrixoavthd+1;
												gotoXY(59,oldplace+vitrixoavthd);
												cout<<p->Data.ds_chi_tiet_hd.ds[vitrixoavthd].MAVT;
												gotoXY(77,oldplace+vitrixoavthd);
												TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[vitrixoavthd].MAVT);
												gotoXY(126,oldplace+vitrixoavthd);
												cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd].SLVT;
												gotoXY(141,oldplace+vitrixoavthd);
												cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd].DONGIA;
												gotoXY(160,oldplace+vitrixoavthd);
												cout<<p->Data.ds_chi_tiet_hd.ds[vitrixoavthd].VAT;
												gotoXY(173,oldplace+vitrixoavthd);
												cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd].TRIGIA;
												
												TextColor(TrangDoNhat);
												gotoXY(49,oldplace+vitrixoavthd-1);
												cout<<vitrixoavthd;
												gotoXY(59,oldplace+vitrixoavthd-1);
												cout<<p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].MAVT;
												gotoXY(77,oldplace+vitrixoavthd-1);
												TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].MAVT);
												gotoXY(126,oldplace+vitrixoavthd-1);
												cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].SLVT;
												gotoXY(141,oldplace+vitrixoavthd-1);
												cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].DONGIA;
												gotoXY(160,oldplace+vitrixoavthd-1);
												cout<<p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].VAT;
												gotoXY(173,oldplace+vitrixoavthd-1);
												cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].TRIGIA;
											}
										}
									else if(keyxoavthd == 75)//NHAN QUA TRAI
									{
										//XOA DU LIEU TRONG KHUNG
										TextColor(DenTrang);
											gotoXY(49,oldplace+vitrixoavthd-1);
											cout<<vitrixoavthd;
											gotoXY(59,oldplace+vitrixoavthd-1);
											cout<<p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].MAVT;
											gotoXY(77,oldplace+vitrixoavthd-1);
											TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].MAVT);
											gotoXY(126,oldplace+vitrixoavthd-1);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].SLVT;
											gotoXY(141,oldplace+vitrixoavthd-1);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].DONGIA;
											gotoXY(160,oldplace+vitrixoavthd-1);
											cout<<p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].VAT;
											gotoXY(173,oldplace+vitrixoavthd-1);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].TRIGIA;
										goto nhapvattuhoadon;
									}	
							}
							else if(keyxoavthd == 13)
							{
								if(slvthdht == 0)
									{
										TextColor(TrangDoNhat);
											for(int dhdl=0;dhdl<3; dhdl++)
												{
													gotoXY(13,32+dhdl);
													cout<<"                            ";
												}
												gotoXY(18,33);
												cout<<"DANH SACH DANG RONG";
													getch();
										TextColor(TrangXoa);
											for(int dhdl=0;dhdl<3; dhdl++)
												{
													gotoXY(13,32+dhdl);
													cout<<"                            ";
												}			
									}
								else
									{
										TextColor(DoDo);
										gotoXY(180,33);
										cout<<p->Data.TONGTRIGIA;
										p->Data.TONGTRIGIA-=p->Data.ds_chi_tiet_hd.ds[vitrixoavthd-1].TRIGIA;
										
										for(int i=vitrixoavthd-1; i<slvthdht-1; i++)
										{
											p->Data.ds_chi_tiet_hd.ds[i] = p->Data.ds_chi_tiet_hd.ds[i+1];
										}
										
										//XOA DU LIEU TRONG KHUNG
										TextColor(TrangXoa);
										for(int i=0; i<slvthdht; i++)
										{
											gotoXY(49,9+i);
											cout<<"  ";
											gotoXY(59,9+i);
											cout<<"          ";
											gotoXY(77,9+i);
											cout<<"                                              ";
											gotoXY(126,9+i);
											cout<<"      ";
											gotoXY(141,9+i);
											cout<<"          ";
											gotoXY(160,9+i);
											cout<<"    ";	
											gotoXY(173,9+i);//XOA TRI GIA
											cout<<"              ";
										}
									
										slvthdht--;
										if(vitrixoavthd > slvthdht)
										{
											vitrixoavthd = slvthdht;
										}
										//IN LAI DU LIEU MOI
									
										TextColor(DenTrang);
											for(int i=0; i<slvthdht; i++)
											{
												gotoXY(49,9+i);
												cout<<i+1;
												gotoXY(59,9+i);
												cout<<p->Data.ds_chi_tiet_hd.ds[i].MAVT;
												gotoXY(77,9+i);
												TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[i].MAVT);
												gotoXY(126,9+i);
												cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[i].SLVT;
												gotoXY(141,9+i);
												cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[i].DONGIA;
												gotoXY(160,9+i);
												cout<<p->Data.ds_chi_tiet_hd.ds[i].VAT;
												gotoXY(173,9+i);
												cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[i].TRIGIA;
											}
											
										TextColor(TrangDo);
										gotoXY(180,33);
										cout<<(size_t)p->Data.TONGTRIGIA;	
										
									}
									goto nhapvattuhoadon;	
							} 
						}
			}
		}
		//3.HIEU CHINH THONG TIN VAT TU TRONG HOA DON
		else if(Vitrikhoitao == 3)
		{
				if(slvthdht == 0)
					{		
						TextColor(TrangDoNhat);
						for(int dhdl=0;dhdl<3; dhdl++)
							{
								gotoXY(9,32+dhdl);
								cout<<"                            ";
							}
						gotoXY(14,33);
						cout<<"DANH SACH DANG RONG";
							getch();
						TextColor(TrangXoa);
							for(int dhdl=0;dhdl<3; dhdl++)
								{
									gotoXY(9,32+dhdl);
									cout<<"                            ";
								}				
					}
				else
				{
					XoaHuongDanSuDungChiTietHoaDon1(doronghuongdan);
					HuongDanSuDungChiTietHoaDon2(doronghuongdan);
					TextColor(TrangBac);
					for(int i=18; i<=22; i++)
					{
						gotoXY(12,i);
						cout<<"                       ";
					}
					gotoXY(15,20);
					cout<<"HIEU CHINH VAT TU";
					
							char keyhcvthd;
							int vitrihcvthd=1;
							int oldplace=9;
							
							chonvattuhieuchinh:
					
							TextColor(TrangDoNhat);
							gotoXY(49,oldplace+vitrihcvthd-1);
							cout<<vitrihcvthd;
							gotoXY(59,oldplace+vitrihcvthd-1);
							cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].MAVT;
							gotoXY(77,oldplace+vitrihcvthd-1);
							TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].MAVT);
							gotoXY(126,oldplace+vitrihcvthd-1);
							cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].SLVT;
							gotoXY(141,oldplace+vitrihcvthd-1);
							cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA;
							gotoXY(160,oldplace+vitrihcvthd-1);
							cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].VAT;
							gotoXY(173,oldplace+vitrihcvthd-1);
							p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].TRIGIA = p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].SLVT*p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA*p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].VAT*0.01 + p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].SLVT*p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA;
							cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].TRIGIA;
						while(1)//DANH SACH VAT TU
						{
							//BAT PHIM
							keyhcvthd=getch();
							
							if(keyhcvthd == -32)
							{
								keyhcvthd = getch();
								
								//Co chon vat tu hieu chinh
								//NHAN XUONG
								if(keyhcvthd == 80)
								{
							 	//XU LI GIA TRI VI TRI
									if(vitrihcvthd < slvthdht)
							    	{
							    		vitrihcvthd++;
							    		//IN DU LIEU
											TextColor(DenTrang);
											gotoXY(49,oldplace+vitrihcvthd-2);
											cout<<vitrihcvthd-1;
											gotoXY(59,oldplace+vitrihcvthd-2);
											cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-2].MAVT;
											gotoXY(77,oldplace+vitrihcvthd-2);
											TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-2].MAVT);
											gotoXY(126,oldplace+vitrihcvthd-2);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-2].SLVT;
											gotoXY(141,oldplace+vitrihcvthd-2);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-2].DONGIA;
											gotoXY(160,oldplace+vitrihcvthd-2);
											cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-2].VAT;
											gotoXY(173,oldplace+vitrihcvthd-2);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-2].TRIGIA;
											
											TextColor(TrangDoNhat);
											gotoXY(49,oldplace+vitrihcvthd-1);
											cout<<vitrihcvthd;
											gotoXY(59,oldplace+vitrihcvthd-1);
											cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].MAVT;
											gotoXY(77,oldplace+vitrihcvthd-1);
											TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].MAVT);
											gotoXY(126,oldplace+vitrihcvthd-1);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].SLVT;
											gotoXY(141,oldplace+vitrihcvthd-1);
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA;
											gotoXY(160,oldplace+vitrihcvthd-1);
											cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].VAT;
											gotoXY(173,oldplace+vitrihcvthd-1);
											p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].TRIGIA = p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].SLVT*p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA*p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].VAT*0.01 + p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].SLVT*p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA;
											cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].TRIGIA;
									}
								}
								//NHAN LEN
								else if(keyhcvthd == 72)
										{
											//=========XY LI GIA TRI VI TRI
											if(vitrihcvthd > 1)
									    	{
									    		vitrihcvthd--;
									    		//IN DU LIEU
								    				
													TextColor(DenTrang);
													gotoXY(49,oldplace+vitrihcvthd);
													cout<<vitrihcvthd+1;
													gotoXY(59,oldplace+vitrihcvthd);
													cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd].MAVT;
													gotoXY(77,oldplace+vitrihcvthd);
													TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[vitrihcvthd].MAVT);
													gotoXY(126,oldplace+vitrihcvthd);
													cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd].SLVT;
													gotoXY(141,oldplace+vitrihcvthd);
													cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd].DONGIA;
													gotoXY(160,oldplace+vitrihcvthd);
													cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd].VAT;
													gotoXY(173,oldplace+vitrihcvthd);
													cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd].TRIGIA;
													//TRI GIA
													
													TextColor(TrangDoNhat);
													gotoXY(49,oldplace+vitrihcvthd-1);
													cout<<vitrihcvthd;
													gotoXY(59,oldplace+vitrihcvthd-1);
													cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].MAVT;
													gotoXY(77,oldplace+vitrihcvthd-1);
													TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].MAVT);
													gotoXY(126,oldplace+vitrihcvthd-1);
													cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].SLVT;
													gotoXY(141,oldplace+vitrihcvthd-1);
													cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA;
													gotoXY(160,oldplace+vitrihcvthd-1);
													cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].VAT;
													gotoXY(173,oldplace+vitrihcvthd-1);
													cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].TRIGIA;		
											}
										}
									else if(keyhcvthd == 75)//NHAN QUA TRAI
									{
												
												TextColor(DenTrang);
												gotoXY(49,oldplace+vitrihcvthd-1);
												cout<<vitrihcvthd;
												gotoXY(59,oldplace+vitrihcvthd-1);
												cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].MAVT;
												gotoXY(77,oldplace+vitrihcvthd-1);
												TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].MAVT);
												gotoXY(126,oldplace+vitrihcvthd-1);
												cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].SLVT;
												gotoXY(141,oldplace+vitrihcvthd-1);
												cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA;
												gotoXY(160,oldplace+vitrihcvthd-1);
												cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].VAT;
												gotoXY(173,oldplace+vitrihcvthd-1);
												cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].TRIGIA;
												
												goto nhapvattuhoadon;
									}	
							}	
							//=============
					else if(keyhcvthd == 13)//KHI DA NHAN ENTER CHON VAT TU CAN HIEU CHINH
						{
							TextColor(DenTrang);
							gotoXY(49,oldplace+vitrihcvthd-1);
							cout<<vitrihcvthd;
							gotoXY(59,oldplace+vitrihcvthd-1);
							cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].MAVT;
							gotoXY(77,oldplace+vitrihcvthd-1);
							TimKiemVaInTenVatTu(t,p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].MAVT);
							gotoXY(126,oldplace+vitrihcvthd-1);
							cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA;
							gotoXY(173,oldplace+vitrihcvthd-1);
							cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].TRIGIA;
					int	Vitrihc1vthd = 1;	
					char keyhc1vthd;
					while(1)//BAT DAU CHON VI TRI CAN HIEU CHINH
					{
					
						if(Vitrihc1vthd == 1)//HIEU CHINH SLVT
						{
							TextColor(TrangDoNhat);
							gotoXY(126,oldplace+vitrihcvthd-1);
							cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].SLVT;
							TextColor(DenTrang);
							gotoXY(141,oldplace+vitrihcvthd-1);
							cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA;
							gotoXY(160,oldplace+vitrihcvthd-1);
							cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].VAT;
						}
						else if(Vitrihc1vthd == 2)//HIEU CHINH DON GIA
						{
							TextColor(TrangDoNhat);
							gotoXY(141,oldplace+vitrihcvthd-1);
							cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA;
							TextColor(DenTrang);
							gotoXY(126,oldplace+vitrihcvthd-1);
							cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].SLVT;
							gotoXY(160,oldplace+vitrihcvthd-1);
							cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].VAT;
						}
						else if(Vitrihc1vthd == 3)//HIEU CHINH VAT
						{
							TextColor(TrangDoNhat);
							gotoXY(160,oldplace+vitrihcvthd-1);
							cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].VAT;
							TextColor(DenTrang);
							gotoXY(141,oldplace+vitrihcvthd-1);
							cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA;
							gotoXY(126,oldplace+vitrihcvthd-1);
							cout<<p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].SLVT;
						}
						
						keyhc1vthd = getch();
						if(keyhc1vthd == -32)//NEU LA PHIM DIEU HUONG
						{
							keyhc1vthd = getch();
							if(keyhc1vthd == 75)//QUA TRAI
							{
								if(Vitrihc1vthd != 1)
								{
									Vitrihc1vthd--;
								}
								else if(Vitrihc1vthd == 1)//QUAY VE CHON VAT TU CAN HIEU CHINH
								{
									goto chonvattuhieuchinh;
								}
							}
							else if(keyhc1vthd == 77)//QUA PHAI
							{
								if(Vitrihc1vthd != 3)
								{
									Vitrihc1vthd++;
								}
							}
							else if(keyhc1vthd == 72 )//NHAN LEN
							{
								goto chonvattuhieuchinh;
							}
							else if(keyhc1vthd == 80)//NHAN XUONG
							{
								goto chonvattuhieuchinh;
							}
						}
						else if(keyhc1vthd == 13)//NHAN ENTER CHON VI TRI HIEU CHINH
						{
							string SL,VATHD,DONGIAHD,chuoi;
							int lengthslvthd=0,lengthvathd=0,lengthdghd=0,sokytudanhap=0;
							int x,y,dorong;
							char keythem;
							ShowConsoleCursor(true);
							if(Vitrihc1vthd == 1)//SO LUONG VAT TU
							{
								
								//XOA DU LIEU TRONG O CAN HIEU CHINH
											//SO LUONG
											
											TextColor(TrangXoa);
											gotoXY(126,9+vitrihcvthd-1);
											cout<<"      ";
											TextColor(DenTrang);
									nhapsoluongvattuhieuchinhhoadon:
								//NHAP DU LIEU CAN HIEU CHINH
									do
									{
										chuoi = SL;
										sokytudanhap = lengthslvthd;
										x = 126 + sokytudanhap;
										y = 9+vitrihcvthd-1;
										dorong = 6;
										keythem = SoVaDauCham(chuoi,dorong,x,y,sokytudanhap);
										SL = chuoi;
										lengthslvthd = sokytudanhap;
									}
									while(keythem != 13);	
									
									if(p->Data.LOAI == "X")//NEU LA HOA DON XUAT
											{
												if(atof(SL.c_str()) > tam[vitrivtdsvt]->SOLT)
													{
														ShowConsoleCursor(false);
														TextColor(TrangDoNhat);
														for(int dhdl=0;dhdl<3; dhdl++)
															{
																gotoXY(9,32+dhdl);
																cout<<"                            ";
															}
															gotoXY(12,33);
															cout<<"SO LUONG TON KHONG DU";
															if(keythem == -32)
															{
																keythem = getch();
															}
																getch();
														TextColor(TrangXoa);
														for(int dhdl=0;dhdl<3; dhdl++)
															{
																gotoXY(9,32+dhdl);
																cout<<"                            ";
															}	
													ShowConsoleCursor(true);
													TextColor(DenTrang);
													goto nhapsoluongvattuhieuchinhhoadon;
												}
											}
									
										p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].SLVT = atof(SL.c_str());
							}
							else if(Vitrihc1vthd == 2)//DON GIA
							{
								//XOA DU LIEU TRONG O CAN HIEU CHINH
									TextColor(TrangXoa);
									gotoXY(141,9+vitrihcvthd-1);
									cout<<"          ";
									TextColor(DenTrang);
									//DON GIA 
									do
									{
											chuoi = DONGIAHD;
											sokytudanhap = lengthvathd;
											x = 141 + sokytudanhap;
											y =9+vitrihcvthd-1;
											dorong = 10;
											keythem = SoVaDauCham(chuoi,dorong,x,y,sokytudanhap);
											DONGIAHD = chuoi;
											lengthvathd = sokytudanhap;
									}
									while(keythem != 13);	
									
										p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA = atof(DONGIAHD.c_str());
									
							}
							else if(Vitrihc1vthd == 3)//VAT
							{
								//XOA DU LIEU TRONG O CAN HIEU CHINH
										TextColor(TrangXoa);
										gotoXY(160,9+vitrihcvthd-1);
										cout<<"    ";
										TextColor(DenTrang);
										nhapvatvattuhieuchinhhoadon:
										//VAT
										do
										{
											chuoi = VATHD;
											sokytudanhap = lengthdghd;
											x = 160 + sokytudanhap;
											y = 9+vitrihcvthd-1;
											dorong = 4;
											keythem = SoVaDauCham(chuoi,dorong,x,y,sokytudanhap);
											VATHD = chuoi;
											lengthdghd = sokytudanhap;
										}
										while(keythem != 13);		
										
										if(atoi(VATHD.c_str()) > 100)
													{
														ShowConsoleCursor(false);
														TextColor(TrangDoNhat);
														for(int dhdl=0;dhdl<3; dhdl++)
															{
																gotoXY(9,32+dhdl);
																cout<<"                            ";
															}
															gotoXY(15,33);
															cout<<"VAT KHONG HOP LE";
															if(keythem == -32)
															{
																keythem = getch();
															}
																getch();
														TextColor(TrangXoa);
														for(int dhdl=0;dhdl<3; dhdl++)
															{
																gotoXY(9,32+dhdl);
																cout<<"                            ";
															}	
													TextColor(DenTrang);
													ShowConsoleCursor(true);
													goto nhapvatvattuhieuchinhhoadon;
												}
										p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].VAT = atof(VATHD.c_str());
							}
							ShowConsoleCursor(false);
							
								//XOA TONG TRI GIA
								TextColor(DoDo);
								gotoXY(180,33);
								cout<<p->Data.TONGTRIGIA;	
								
								//LAY TONG TRI GIA TRU DI TRI GIA CU TRUOC KHI HIEU CHINH
								p->Data.TONGTRIGIA-=p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].TRIGIA;
								TextColor(TrangXoa);
								//XOA TRI GIA
								gotoXY(173,oldplace+vitrihcvthd-1);
								cout<<"                           ";
								TextColor(TrangDoNhat);
								p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].TRIGIA =  p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].SLVT*p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA*p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].VAT*0.01 + p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].SLVT*p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].DONGIA;
								gotoXY(173,oldplace+vitrihcvthd-1);
								cout<<(size_t)p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].TRIGIA;
								
								//CAP NHAT LAI TONG TRI GIA VA IN RA
								
								//LAY TONG TRI GIA TRU DI TRI GIA CU TRUOC KHI HIEU CHINH
								p->Data.TONGTRIGIA+=p->Data.ds_chi_tiet_hd.ds[vitrihcvthd-1].TRIGIA;
								TextColor(TrangDo);
								gotoXY(180,33);
								cout<<(size_t)p->Data.TONGTRIGIA;	
								
						}
					}
						
				} 
			}
		}	
	}	
	
	//=========== 4.LUU HOA DON ========== 	
		else if(Vitrikhoitao == 4)
		{
				if(slvthdht == 0)
					{
						TextColor(TrangDoNhat);
						for(int dhdl=0;dhdl<3; dhdl++)
							{
								gotoXY(9,32+dhdl);
								cout<<"                            ";
							}
						gotoXY(14,33);
						cout<<"DANH SACH DANG RONG";
							getch();
						TextColor(TrangXoa);
							for(int dhdl=0;dhdl<3; dhdl++)
								{
									gotoXY(9,32+dhdl);
									cout<<"                            ";
								}				
					}
				else
				{
					int Vitrilhd=1;
					char keylhd;
						///=========== BAT DAU BAN CO  CHAC LUU =============
							TextColor(TrangDoNhat);
												for(int i=0; i<4; i++)
												{
													gotoXY(8,32+i);
													cout<<"                              ";
												}
												gotoXY(13,33);
												cout<<"BAN CO CHAC LUU KHONG";
												TextColor(DoTrang);
												gotoXY(17,35);
												cout<<"CO";
												TextColor(TrangDoNhat);
												gotoXY(24,35);
												cout<<"KHONG";
								
											while(1)
												{
												//====== THUC THI =======
													keylhd = getch();
													if(keylhd == -32)
													{
														keylhd = getch();
														if(keylhd == 77)
														{
															
															//=== THUC THI
															if(Vitrilhd == 1)
															{
																TextColor(TrangDoNhat);
																gotoXY(17,35);
																cout<<"CO";
																TextColor(DoTrang);
																gotoXY(24,35);
																cout<<"KHONG";
																Vitrilhd = 2;
															}
															else if(Vitrilhd == 2)
															{
																TextColor(DoTrang);
																gotoXY(17,35);
																cout<<"CO";
																TextColor(TrangDoNhat);
																gotoXY(24,35);
																cout<<"KHONG";
																Vitrilhd = 1;
															}
														}	
													
														else if(keylhd == 75)
														{
															//=== THUC THI
															if(Vitrilhd == 1)
															{
																
																TextColor(TrangDoNhat);
																gotoXY(17,35);
																cout<<"CO";
																TextColor(DoTrang);
																gotoXY(24,35);
																cout<<"KHONG";
																Vitrilhd = 2;
															}
															else if(Vitrilhd == 2)
															{
																TextColor(DoTrang);
																gotoXY(17,35);
																cout<<"CO";
																TextColor(TrangDoNhat);
																gotoXY(24,35);
																cout<<"KHONG";
																Vitrilhd = 1;
															}
														}
												}
												else if(keylhd == 13)
												{
													//XOA BANG YES NO
													TextColor(TrangXoa);
													for(int i=0; i<4; i++)
													{
														gotoXY(8,32+i);
														cout<<"                              ";
													}
													
													if(Vitrilhd == 1)//NEU LA YES
													{
 														//LUU THONG TIN HOA DON VAO DANH SACH TUYEN TINH
 														p->Data.ds_chi_tiet_hd.slvthd = slvthdht;//HOA DON CO BAO NHIEU VAT TU
 														if(p->Data.LOAI == "N")//NEU LA HOA DON NHAP
 														{
 															for(int i=0;i<p->Data.ds_chi_tiet_hd.slvthd; i++)
 																{
 															for(int j=0; j<slvt;j++)
 																{
 																	if(tam[j]->MAVT ==  p->Data.ds_chi_tiet_hd.ds[i].MAVT)
																 	{
																 		tam[j]->TrangThaiLapHoaDon = true;
																 		tam[j]->SOLT+= p->Data.ds_chi_tiet_hd.ds[i].SLVT;
																 	}	
																}
																}
														}
 														else if(p->Data.LOAI == "X")//NEU LA HOA DON XUAT
 														{
 															for(int i=0;i<p->Data.ds_chi_tiet_hd.slvthd; i++)
 																{
 																	p->Data.ds_chi_tiet_hd.ds[i].TRANGTHAI = 1;
 															for(int j=0; j<slvt;j++)
 																{
 																	if(tam[j]->MAVT ==  p->Data.ds_chi_tiet_hd.ds[i].MAVT)
																 	{
																 		tam[j]->TrangThaiLapHoaDon = true;
																 		tam[j]->SOLT-= p->Data.ds_chi_tiet_hd.ds[i].SLVT;
																 	}	
																}
																}
														 }
//														system("cls");
//														system("color 07");
														return;
													}
													else if(Vitrilhd == 2)//NEU LA NO
													{
														//TRO VE VI TRI CHON CHUC NANG
														goto nhapvattuhoadon;
													}
												}
											}
				}	
		}
}
}



void ChucNangLapHoaDon(TREE_VAT_TU t,TREE_VAT_TU tam[],int slvt ,DS_NHAN_VIEN dsnv,int &TONGSOHOADON)
{

	time_t now = time('\0');
	tm	*time_ht = localtime(&now);	

	//==================  BAT DAU TEST ==================================						
					//=== CHUC NANG NHAN VIEN	
	int vthighlight = 0,vtbatdau = 0, vtketthuc,vtdsnv=0,oldplace=13,Vitrikhoitao = 0,SoLuongSoSanh,dorongsearch=10;
	string ChuoiSearch;
	int x = 75,y=6;
	char keykitu;
	int sokytudanhapsearch =0;			
	int doronghuongdan = 37;			
//	int vtbatdau = 0, vtketthuc,vtdsnv=1,oldplace=9,Vitrikhoitao = 0;
	if(dsnv.slnv <= 30)
	{
		vtketthuc = dsnv.slnv;
	}
	else if(dsnv.slnv > 30)
	{
		vtketthuc = 30;
	}
	bool khoitao = true;
	bool indlmoi;
	char keydsnv;
	
		//KHOI TAO MENU THEM NHAN VIEN
		laphoadonnhapxuat:
		//KHOI TAO DANH SACH NHAN VIEN
		TaoKhungLapHoaDon();
		TextColor(DenTrang);
		for(int i=vtbatdau; i<vtketthuc; i++)
		{
			if(vthighlight == i)
			{
				TextColor(TrangDoNhat);
			}
					gotoXY(72,oldplace+i);
					cout<<dsnv.nv[i]->MANV;
					gotoXY(95,oldplace+i);
					cout<<dsnv.nv[i]->HO;
					gotoXY(135,oldplace+i);	
					cout<<dsnv.nv[i]->TEN;
					gotoXY(160,oldplace+i);
					cout<<dsnv.nv[i]->PHAI;
					gotoXY(183,oldplace+i);
					cout<<dsnv.nv[i]->CMND;
			if(vthighlight == i)
			{
				TextColor(DenTrang);
			}
		}
		MenuLapHoaDon(Vitrikhoitao);
			
	SoLuongSoSanh = dsnv.slnv;	
	indlmoi = false;
	
	//GAN NHAN LAP HOA DON
	laphoadon:
		
	while(1)
	{
		HuongDanSuDungNhanVien1(doronghuongdan);
		ShowConsoleCursor(true);
		gotoXY(75+sokytudanhapsearch,6);
			keydsnv = getch();
			if(keydsnv == 8)//Neu la phim nhan la backspace thi se lui nguoc con tro lai va bien ki tu vua nhap vao la khoang trang
			{
				if(sokytudanhapsearch != 0)
						{
							TextColor(DenTrang);
							gotoXY(x,y);
							keydsnv = 32;//gan ki tu vua nhap vao thanh khoang trang
							cout<<"\b";//Lenh lui nguoc con tro chi vi
							cout<<keydsnv;//cout ra ki tu khoang trang
							cout<<"\b";
							sokytudanhapsearch--;//lui lai 1 don vi
							ChuoiSearch.erase(sokytudanhapsearch,1);
							x--;
																
							//XOA DU LIEU CU
							TextColor(TrangXoa);
							for(int i=vtbatdau; i<vtketthuc;i++)						
							{
								gotoXY(72,oldplace+i);
								cout<<"          ";
								gotoXY(95,oldplace+i);
								cout<<"                              ";
								gotoXY(135,oldplace+i);
								cout<<"          ";
								gotoXY(160,oldplace+i);
								cout<<"   ";
								gotoXY(183,oldplace+i);
								cout<<"          ";
							}
							TextColor(DenTrang);
							vthighlight = 0;
							vtbatdau = 0;
							oldplace = 13;
							if(ChuoiSearch == "")//NEU MA CHUOISEARCH == ""	=> IN GIA TRI KHOI TAO HOA DON XUAT
							{
									if(dsnv.slnv <= 30)
									{
										vtketthuc = dsnv.slnv;
									}
									else if(dsnv.slnv > 30)
									{
										vtketthuc = 30;
									}
							for(int i=vtbatdau; i<vtketthuc; i++)
								{
									if(i == vthighlight)
									{
										TextColor(TrangDoNhat);
										vtdsnv = i;
									}
									gotoXY(72,oldplace+i);
									cout<<dsnv.nv[i]->MANV;
									gotoXY(95,oldplace+i);
									cout<<dsnv.nv[i]->HO;
									gotoXY(135,oldplace+i);
									cout<<dsnv.nv[i]->TEN;
									gotoXY(160,oldplace+i);
									cout<<dsnv.nv[i]->PHAI;
									gotoXY(183,oldplace+i);
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
											if(i < 30)
												{
													if(i == vthighlight)
														{
															TextColor(TrangDoNhat);
															vtdsnv= j;
														}
														gotoXY(72,oldplace+i);
														cout<<dsnv.nv[j]->MANV;
														gotoXY(95,oldplace+i);
														cout<<dsnv.nv[j]->HO;
														gotoXY(135,oldplace+i);
														cout<<dsnv.nv[j]->TEN;
														gotoXY(160,oldplace+i);
														cout<<dsnv.nv[j]->PHAI;
														gotoXY(183,oldplace+i);
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
			//PHIM DIEU HUONG
			else if((keydsnv>=48 && keydsnv<=57) && sokytudanhapsearch<dorongsearch)
											{
												//XOA DU LIEU CU
												TextColor(TrangXoa);
												for(int i=vtbatdau; i<vtketthuc;i++)						
												{
														gotoXY(72,oldplace+i);
														cout<<"          ";
														gotoXY(95,oldplace+i);
														cout<<"                              ";
														gotoXY(135,oldplace+i);
														cout<<"          ";
														gotoXY(160,oldplace+i);
														cout<<"   ";
														gotoXY(183,oldplace+i);
														cout<<"          ";
												}
												if(keydsnv>=97 && keydsnv<=122)
												{
													keydsnv-=32;
												}
												gotoXY(x,y);
												TextColor(DenTrang);
												cout<<keydsnv;
												ChuoiSearch+=keydsnv;
												sokytudanhapsearch++;//tang len 1 don vi
												x++;
												vthighlight = 0;
												vtbatdau=0;
												vtketthuc = 0;
												oldplace = 13;
												SoLuongSoSanh = 0;
												vtketthuc=0;
												for(int i=vtbatdau,j=0;j < dsnv.slnv;)
													{
														if(ChuyenSoThanhChuoi(dsnv.nv[j]->MANV).find(ChuoiSearch) != -1)
														{
															if(i < 30)
															{
																if(i == vthighlight)
																	{
																		TextColor(TrangDoNhat);
																		vtdsnv = j;
																	}
																gotoXY(72,oldplace+i);
																cout<<dsnv.nv[j]->MANV;
																gotoXY(95,oldplace+i);
																cout<<dsnv.nv[j]->HO;
																gotoXY(135,oldplace+i);
																cout<<dsnv.nv[j]->TEN;
																gotoXY(160,oldplace+i);
																cout<<dsnv.nv[j]->PHAI;
																gotoXY(183,oldplace+i);
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
			
			
			else if(keydsnv == -32)
			{
				keydsnv = getch();
				if(keydsnv == 72)//NHAN LEN
					{
						if(vthighlight > vtbatdau)
							{
								vthighlight--;
							}
						else if(vthighlight == vtbatdau && vtbatdau > 0)
							{
								//XOA DU LIEU CU
								TextColor(TrangXoa);
								for(int i=vtbatdau; i<vtketthuc;i++)						
									{
										gotoXY(72,oldplace+i);
										cout<<"          ";
										gotoXY(95,oldplace+i);
										cout<<"                              ";
										gotoXY(135,oldplace+i);
										cout<<"          ";
										gotoXY(160,oldplace+i);
										cout<<"   ";
										gotoXY(183,oldplace+i);
										cout<<"          ";
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
											vtdsnv = i;
										}
									gotoXY(72,oldplace+i);
									cout<<dsnv.nv[i]->MANV;
									gotoXY(95,oldplace+i);
									cout<<dsnv.nv[i]->HO;
									gotoXY(135,oldplace+i);
									cout<<dsnv.nv[i]->TEN;
									gotoXY(160,oldplace+i);
									cout<<dsnv.nv[i]->PHAI;
									gotoXY(183,oldplace+i);
									cout<<dsnv.nv[i]->CMND;													
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
								while(j < dsnv.slnv)
								{
									if(ChuyenSoThanhChuoi(dsnv.nv[j]->MANV).find(ChuoiSearch) != -1)
									{
										if(i>=vtbatdau && i<vtketthuc)
										{
											if(i == vthighlight)
											{
												TextColor(TrangDoNhat);
												vtdsnv = j;
											}
											gotoXY(72,oldplace+i);
											cout<<dsnv.nv[j]->MANV;
											gotoXY(95,oldplace+i);
											cout<<dsnv.nv[j]->HO;
											gotoXY(135,oldplace+i);
											cout<<dsnv.nv[j]->TEN;
											gotoXY(160,oldplace+i);
											cout<<dsnv.nv[j]->PHAI;
											gotoXY(183,oldplace+i);
											cout<<dsnv.nv[j]->CMND;
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
					
				else if(keydsnv == 80)//NHAN XUONG
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
								gotoXY(72,oldplace+i);
								cout<<"          ";
								gotoXY(95,oldplace+i);
								cout<<"                              ";
								gotoXY(135,oldplace+i);
								cout<<"          ";
								gotoXY(160,oldplace+i);
								cout<<"   ";
								gotoXY(183,oldplace+i);
								cout<<"          ";
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
									vtdsnv = i;
								}
									gotoXY(72,oldplace+i);
									cout<<dsnv.nv[i]->MANV;
									gotoXY(95,oldplace+i);
									cout<<dsnv.nv[i]->HO;
									gotoXY(135,oldplace+i);
									cout<<dsnv.nv[i]->TEN;
									gotoXY(160,oldplace+i);
									cout<<dsnv.nv[i]->PHAI;
									gotoXY(183,oldplace+i);
									cout<<dsnv.nv[i]->CMND;		
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
							while(j < dsnv.slnv)
							{
								if(ChuyenSoThanhChuoi(dsnv.nv[j]->MANV).find(ChuoiSearch) != -1)
								{
									if(i>=vtbatdau && i<vtketthuc)
									{
										if(i == vthighlight)
										{
											TextColor(TrangDoNhat);
											vtdsnv = j;
										}
											gotoXY(72,oldplace+i);
											cout<<dsnv.nv[j]->MANV;
											gotoXY(95,oldplace+i);
											cout<<dsnv.nv[j]->HO;
											gotoXY(135,oldplace+i);
											cout<<dsnv.nv[j]->TEN;
											gotoXY(160,oldplace+i);
											cout<<dsnv.nv[j]->PHAI;
											gotoXY(183,oldplace+i);
											cout<<dsnv.nv[j]->CMND;
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
				//NHAN QUA TRAI
				else if(keydsnv == 75)
				{
						batphimchucnanglaphoadon:
						Vitrikhoitao = 1;
						XoaHuongDanSuDungNhanVien1(doronghuongdan);
						HuongDanSuDungNhanVien2(doronghuongdan);
						MenuLapHoaDon(Vitrikhoitao);
						
						string SOHDT,DAYT,MONTHT,YEART,chuoi;
						int lengthsohd=0,lengthngay=0,lengththang=0,lengthnam=0;
						char keythem;
						int Vitrithem=1;
						int x,y,sokytudanhap=0,dorong=0;
					
					//=========== 1.LAP HOA DON NHAP =========
					if(Vitrikhoitao == 1)
					{
						XoaHuongDanSuDungNhanVien2(doronghuongdan);
						TextColor(TrangDo);
						gotoXY(14,20);
						cout<<"NHAP THONG TIN HOA DON NHAP";
						gotoXY(7,22);
						TextColor(DoTrang);
						cout<<"SO HOA DON :";
						gotoXY(7,24);
						cout<<"NGAY :"<<time_ht->tm_mday;
						gotoXY(7,26);
						cout<<"THANG :"<<1+time_ht->tm_mon;
						gotoXY(7,28);
						cout<<"NAM :"<<1900+time_ht->tm_year;
						gotoXY(7,30);
						cout<<"LOAI : N";
						
						DAYT = ChuyenSoThanhChuoi(time_ht->tm_mday);
						MONTHT = ChuyenSoThanhChuoi(1+time_ht->tm_mon);
						YEART = ChuyenSoThanhChuoi(1900+time_ht->tm_year);
						
						lengthngay = DAYT.length();
						lengththang = MONTHT.length();
						lengthnam = YEART.length();
						
						while(1)
						{
									nhapthongtinhoadonnhap:
									ShowConsoleCursor(true);
										//SO HD
										TextColor(DenTrang);
										if(Vitrithem == 1)
										{
											chuoi = SOHDT;
											sokytudanhap = lengthsohd;
											x = 19 + sokytudanhap;
											y = 22;
											dorong = 20;
											keythem = ChuSoVa_(chuoi,dorong,x,y,sokytudanhap);
										}
//										NGAY
										else if(Vitrithem == 2)
										{
											chuoi = DAYT;
											sokytudanhap = lengthngay;
											x = 13 + sokytudanhap;
											y =24;
											dorong = 2;
											keythem = So(chuoi,dorong,x,y,sokytudanhap);
										}
//										THANG
										else if(Vitrithem == 3)
										{
											chuoi = MONTHT;
											sokytudanhap = lengththang;
											x = 14 + sokytudanhap;
											y = 26;
											dorong = 2;
											keythem = So(chuoi,dorong,x,y,sokytudanhap);
										}
//										NAM
										else if(Vitrithem == 4)
										{
											chuoi = YEART;
											sokytudanhap = lengthnam;
											x = 12 + sokytudanhap;
											y = 28;
											dorong = 4;
											keythem = So(chuoi,dorong,x,y,sokytudanhap);
										}
							ShowConsoleCursor(false);		
										//BAT PHIM KI TU NHAP VAO
										//CAP NHAT LAI CHUOI SAU KHI NHAP
										//SO HD
										if(Vitrithem == 1)
										{
											SOHDT = chuoi;
											lengthsohd = sokytudanhap;
										}
										//NGAY
										else if(Vitrithem == 2)
										{
											DAYT = chuoi;
											lengthngay = sokytudanhap;
										}
//										//THANG
										else if(Vitrithem == 3)
										{
											MONTHT = chuoi;
											lengththang = sokytudanhap;
										}
										//NAM
										else if(Vitrithem == 4)
										{
											YEART = chuoi;
											lengthnam = sokytudanhap;
										}
									
										
										if(keythem == -32)//NHAN PHIM DIEU KHIEN
										{
											keythem = getch();
											if(keythem == 72)//NHAN LEN
											{
												if(Vitrithem == 1)
												{
													Vitrithem = 4;
												}
												else if(Vitrithem != 1)
												{
													Vitrithem--;
												}
											}
											else if(keythem == 80)//NHAN XUONG
											{
												if(Vitrithem == 4)
												{
													Vitrithem = 1;
												}
												else if(Vitrithem !=4)
												{
													Vitrithem++;
												}
											}
										}
							if(keythem == 13)//NHAN ENTER
							{
								//NEU DU LIEU DANG TRONG
								if(KTThoiGianLapHoaDonHopLe(atoi(DAYT.c_str()),atoi(MONTHT.c_str()),atoi(YEART.c_str()))  == false )
								{
									TextColor(TrangDoNhat);
									for(int dhdl=0;dhdl<5; dhdl++)
									{
										gotoXY(16,35+dhdl);
										cout<<"                            ";
									}
										gotoXY(18,37);
										cout<<"THOI GIAN KHONG HOP LE";
										getch();
										TextColor(TrangXoa);
									for(int dhdl=0;dhdl<5; dhdl++)
									{
										gotoXY(16,35+dhdl);
										cout<<"                            ";
									}
									TextColor(DenTrang);
									goto nhapthongtinhoadonnhap;//DI CHUYEN DEN VI TRI THOAT DE TIEP TUC NHAP THONG TIN VAT TU
								}
								if(SOHDT.length() == 0)
								{
									TextColor(TrangDoNhat);
									for(int dhdl=0;dhdl<5; dhdl++)
									{
										gotoXY(16,35+dhdl);
										cout<<"                            ";
									}
										gotoXY(18,37);
										cout<<"DU LIEU KHONG DUOC TRONG";
										getch();
										TextColor(TrangXoa);
									for(int dhdl=0;dhdl<5; dhdl++)
									{
										gotoXY(16,35+dhdl);
										cout<<"                            ";
									}
								TextColor(DenTrang);
								goto nhapthongtinhoadonnhap;//DI CHUYEN DEN VI TRI THOAT DE TIEP TUC NHAP THONG TIN VAT TU
								}
								
						 	if(KTSOHD(dsnv,SOHDT) == true )//NEU MA TRUNG SO HOA DON THI NHAP LAI
						 	{
						 		TextColor(TrangDoNhat);
								for(int dhdl=0;dhdl<3; dhdl++)
								{
									gotoXY(8,39+dhdl);
									cout<<"                            ";
								}
								gotoXY(10,40);
								cout<<"SO HOA DON BI TRUNG";
								getch();
								TextColor(TrangXoa);
								for(int dhdl=0;dhdl<3; dhdl++)
								{
									gotoXY(8,39+dhdl);
									cout<<"                            ";
								}
								TextColor(DenTrang);
								goto nhapthongtinhoadonnhap;//DI CHUYEN DEN VI TRI THOAT DE TIEP TUC NHAP THONG TIN VAT TU
							}
							else//NEU SO HOA DON KHONG TRUNG
							{
								TextColor(TrangDoNhat);
								for(int dhdl=0;dhdl<5; dhdl++)
								{
									gotoXY(14,35+dhdl);
									cout<<"                            ";
								}
									gotoXY(20,36);
									cout<<"BAN CO MUON LUU";
									gotoXY(32,38);
									cout<<"NO";
									TextColor(DoTrang);
									gotoXY(21,38);
									cout<<"YES";
									
									char keylhd;
									int Vitrilhd = 1;
									while(1)
									{
										keylhd = getch();
										if(keylhd == -32)
										{
											keylhd = getch();
											if(keylhd == 75)//QUA TRAI
											{
												if(Vitrilhd == 1)
												{
													Vitrilhd = 2;
													TextColor(TrangDoNhat);
													gotoXY(21,38);
													cout<<"YES";
													TextColor(DoTrang);
													gotoXY(32,38);
													cout<<"NO";
												}
												else if(Vitrilhd == 2)
												{
														Vitrilhd = 1;
														TextColor(DoTrang);
														gotoXY(21,38);
														cout<<"YES";
														TextColor(TrangDoNhat);
														gotoXY(32,38);
														cout<<"NO";
												}
											}
											else if(keylhd == 77)//QUA PHAI
											{
												if(Vitrilhd == 1)
												{
													Vitrilhd = 2;
													TextColor(TrangDoNhat);
													gotoXY(21,38);
													cout<<"YES";
													TextColor(DoTrang);
													gotoXY(32,38);
													cout<<"NO";
												}
												else if(Vitrilhd == 2)
												{
														Vitrilhd = 1;
														TextColor(DoTrang);
														gotoXY(21,38);
														cout<<"YES";
														TextColor(TrangDoNhat);
														gotoXY(32,38);
														cout<<"NO";
												}
											}
										}
										else if(keylhd == 13)//NEU LA PHIM ENTER
										{
											//=== XOA BANG CHON YES NO
												TextColor(TrangXoa);
												for(int dhdl=0;dhdl<5; dhdl++)
													{
														gotoXY(14,35+dhdl);
														cout<<"                            ";
													}
													TextColor(DenTrang);
											//==========
											if(Vitrilhd == 1)//NEU LA YES THI LUU HOA DON
												{
													//XOA DU LIEU NHAP VAO
													TextColor(TrangXoa);
													for(int xdlnv=0; xdlnv<=10; xdlnv+=2)
													{
														gotoXY(7,20+xdlnv);
														cout<<"                                 ";
													}
													TextColor(DenTrang);
													//NHAP THONG TIN HOA DON
													dsnv.nv[vtdsnv]->SLHD++;
													TONGSOHOADON++;
													HOA_DON hd;
													hd.SOHD = SOHDT;
													hd.NgayLap.day = atoi(DAYT.c_str());
													hd.NgayLap.month = atoi(MONTHT.c_str());
													hd.NgayLap.year = atoi(YEART.c_str());
													hd.LOAI = "N";
													NODE_HOA_DON *p = KhoiTaoNode(hd);
													//THEM HOA DON VAO DANH SACH LIEN KET DON
													ThemCuoi(dsnv.nv[vtdsnv]->pHead,p);
													//TAO KHUNG THEM VAT TU VAO TRONG HOA DON
													TaoKhungThemVatTuHoaDon(t,tam,slvt,p,dsnv,vtdsnv);
													vthighlight = 0,vtbatdau = 0,vtdsnv=0,oldplace=13,Vitrikhoitao = 0;
													if(dsnv.slnv <= 30)
													{
														vtketthuc = dsnv.slnv;
													}
													else if(dsnv.slnv > 30)
													{
														vtketthuc = 30;
													}
													ChuoiSearch = "";
													sokytudanhapsearch = 0;
													goto laphoadonnhapxuat;
												}
											if(Vitrilhd == 2)//NEU LA NO THI KHONG LUU
												{
													goto nhapthongtinhoadonnhap;
												}	
											}
										}
									}
								}
							}
					}
					
					
					//============ 2.LAP HOA DON XUAT ========
					if(Vitrikhoitao == 2)
					{
						XoaHuongDanSuDungNhanVien2(doronghuongdan);
						TextColor(TrangDo);
						gotoXY(14,20);
						cout<<"NHAP THONG TIN HOA DON XUAT";
						TextColor(DoTrang);
						gotoXY(7,22);
						cout<<"SO HOA DON :";
						gotoXY(7,24);
						cout<<"NGAY :"<<time_ht->tm_mday;
						gotoXY(7,26);
						cout<<"THANG :"<<1+time_ht->tm_mon;
						gotoXY(7,28);
						cout<<"NAM :"<<1900+time_ht->tm_year;
						gotoXY(7,30);
						cout<<"LOAI : X";
					
						DAYT = ChuyenSoThanhChuoi(time_ht->tm_mday);
						MONTHT = ChuyenSoThanhChuoi(1+time_ht->tm_mon);
						YEART = ChuyenSoThanhChuoi(1900+time_ht->tm_year);
						
						lengthngay = DAYT.length();
						lengththang = MONTHT.length();
						lengthnam = YEART.length();
					
					
					
						while(1)
						{
						
									nhapthongtinhoadonxuat:
										//SO HD
										ShowConsoleCursor(true);
										TextColor(DenTrang);
										if(Vitrithem == 1)
										{
											chuoi = SOHDT;
											sokytudanhap = lengthsohd;
											x = 19 + sokytudanhap;
											y = 22;
											dorong = 20;
											keythem = ChuSoVa_(chuoi,dorong,x,y,sokytudanhap);
										}
//										//NGAY
										else if(Vitrithem == 2)
										{
											chuoi = DAYT;
											sokytudanhap = lengthngay;
											x = 13 + sokytudanhap;
											y =24;
											dorong = 2;
											keythem = So(chuoi,dorong,x,y,sokytudanhap);
										}
//										//THANG
										else if(Vitrithem == 3)
										{
											chuoi = MONTHT;
											sokytudanhap = lengththang;
											x = 14 + sokytudanhap;
											y = 26;
											dorong = 2;
											keythem = So(chuoi,dorong,x,y,sokytudanhap);
										}
//										//NAM
										else if(Vitrithem == 4)
										{
											chuoi = YEART;
											sokytudanhap = lengthnam;
											x = 12 + sokytudanhap;
											y = 28;
											dorong = 4;
											keythem = So(chuoi,dorong,x,y,sokytudanhap);
										}
									ShowConsoleCursor(false);
										//BAT PHIM KI TU NHAP VAO
										//CAP NHAT LAI CHUOI SAU KHI NHAP
										//SO HD
										if(Vitrithem == 1)
										{
											SOHDT = chuoi;
											lengthsohd = sokytudanhap;
										}
//										//NGAY
										else if(Vitrithem == 2)
										{
											DAYT = chuoi;
											lengthngay = sokytudanhap;
										}
//										//THANG
										else if(Vitrithem == 3)
										{
											MONTHT = chuoi;
											lengththang = sokytudanhap;
										}
//										//NAM
										else if(Vitrithem == 4)
										{
											YEART = chuoi;
											lengthnam = sokytudanhap;
										}
									
										
										if(keythem == -32)//NHAN PHIM DIEU KHIEN
										{
											keythem = getch();
											if(keythem == 72)//NHAN LEN
											{
												if(Vitrithem == 1)
												{
													Vitrithem = 4;
												}
												else if(Vitrithem != 1)
												{
													Vitrithem--;
												}
											}
											else if(keythem == 80)//NHAN XUONG
											{
												if(Vitrithem == 4)
												{
													Vitrithem = 1;
												}
												else if(Vitrithem !=4)
												{
													Vitrithem++;
												}
											}
										}
							if(keythem == 13)//NHAN ENTER
							{
								//NEU DU LIEU DANG TRONG
								if(KTThoiGianLapHoaDonHopLe(atoi(DAYT.c_str()),atoi(MONTHT.c_str()),atoi(YEART.c_str()) == false))
								{
									TextColor(TrangDoNhat);
									for(int dhdl=0;dhdl<5; dhdl++)
									{
										gotoXY(16,35+dhdl);
										cout<<"                            ";
									}
										gotoXY(18,37);
										cout<<"THOI GIAN KHONG HOP LE";
										getch();
										TextColor(TrangXoa);
									for(int dhdl=0;dhdl<5; dhdl++)
									{
										gotoXY(16,35+dhdl);
										cout<<"                            ";
									}
									TextColor(DenTrang);
									goto nhapthongtinhoadonnhap;//DI CHUYEN DEN VI TRI THOAT DE TIEP TUC NHAP THONG TIN VAT TU
								}
								if(SOHDT.length() == 0)
								{
									TextColor(TrangDoNhat);
									for(int dhdl=0;dhdl<5; dhdl++)
									{
										gotoXY(16,35+dhdl);
										cout<<"                            ";
									}
										gotoXY(18,37);
										cout<<"DU LIEU KHONG DUOC TRONG";
										getch();
										TextColor(TrangXoa);
									for(int dhdl=0;dhdl<5; dhdl++)
									{
										gotoXY(16,35+dhdl);
										cout<<"                            ";
									}
								TextColor(DenTrang);
								goto nhapthongtinhoadonxuat;//DI CHUYEN DEN VI TRI THOAT DE TIEP TUC NHAP THONG TIN VAT TU
								}
								
						 	if(KTSOHD(dsnv,SOHDT) == true )//NEU MA TRUNG SO HOA DON THI NHAP LAI
						 	{
						 		TextColor(TrangDoNhat);
								for(int dhdl=0;dhdl<3; dhdl++)
								{
									gotoXY(8,39+dhdl);
									cout<<"                            ";
								}
								gotoXY(10,40);
								cout<<"SO HOA DON BI TRUNG";
								getch();
								TextColor(TrangXoa);
								for(int dhdl=0;dhdl<3; dhdl++)
								{
									gotoXY(8,39+dhdl);
									cout<<"                            ";
								}
								TextColor(DenTrang);
								goto nhapthongtinhoadonxuat;//DI CHUYEN DEN VI TRI THOAT DE TIEP TUC NHAP THONG TIN VAT TU
							}
						
							else//NEU SO HOA DON KHONG TRUNG
							{
								TextColor(TrangDoNhat);
								for(int dhdl=0;dhdl<5; dhdl++)
								{
									gotoXY(14,35+dhdl);
									cout<<"                            ";
								}
									gotoXY(20,36);
									cout<<"BAN CO MUON LUU";
									gotoXY(32,38);
									cout<<"NO";
									TextColor(DoTrang);
									gotoXY(21,38);
									cout<<"YES";
									char keylhd;
									int Vitrilhd = 1;
									while(1)
									{
										keylhd = getch();
										if(keylhd == -32)
										{
											keylhd = getch();
											if(keylhd == 75)//QUA TRAI
											{
												if(Vitrilhd == 1)
												{
													Vitrilhd = 2;
													TextColor(TrangDoNhat);
													gotoXY(21,38);
													cout<<"YES";
													TextColor(DoTrang);
													gotoXY(32,38);
													cout<<"NO";
												}
												else if(Vitrilhd == 2)
												{
														Vitrilhd = 1;
														TextColor(DoTrang);
														gotoXY(21,38);
														cout<<"YES";
														TextColor(TrangDoNhat);
														gotoXY(32,38);
														cout<<"NO";
												}
											}
											else if(keylhd == 77)//QUA PHAI
											{
												if(Vitrilhd == 1)
												{
													Vitrilhd = 2;
													TextColor(TrangDoNhat);
													gotoXY(21,38);
													cout<<"YES";
													TextColor(DoTrang);
													gotoXY(32,38);
													cout<<"NO";
												}
												else if(Vitrilhd == 2)
												{
														Vitrilhd = 1;
														TextColor(DoTrang);
														gotoXY(21,38);
														cout<<"YES";
														TextColor(TrangDoNhat);
														gotoXY(32,38);
														cout<<"NO";
												}
											}
										}
										else if(keylhd == 13)//NEU LA PHIM ENTER
										{
											//=== XOA BANG CHON YES NO
												TextColor(TrangXoa);
												for(int dhdl=0;dhdl<5; dhdl++)
												{
													gotoXY(14,35+dhdl);
													cout<<"                            ";
												}
													TextColor(DenTrang);
											//==========
											if(Vitrilhd == 1)//NEU LA YES THI LUU HOA DON
												{
													//XOA DU LIEU NHAP VAO
													TextColor(TrangXoa);
													for(int xdlnv=0; xdlnv<=10; xdlnv+=2)
													{
														gotoXY(7,20+xdlnv);
														cout<<"                                 ";
													}
													TextColor(DenTrang);
													//NHAP THONG TIN HOA DON
													dsnv.nv[vtdsnv]->SLHD++;
													TONGSOHOADON++;
													HOA_DON hd;
													hd.SOHD = SOHDT;
													hd.NgayLap.day = atoi(DAYT.c_str());
													hd.NgayLap.month = atoi(MONTHT.c_str());
													hd.NgayLap.year = atoi(YEART.c_str());
													hd.LOAI = "X";
													
													NODE_HOA_DON *p = KhoiTaoNode(hd);
													//THEM HOA DON VAO DANH SACH LIEN KET DON
													ThemCuoi(dsnv.nv[vtdsnv]->pHead,p); 
													//TAO KHUNG THEM VAT TU VAO TRONG HOA DON
													TaoKhungThemVatTuHoaDon(t,tam,slvt,p,dsnv,vtdsnv);
													vthighlight = 0,vtbatdau = 0,vtdsnv=0,oldplace=13,Vitrikhoitao = 0;
													if(dsnv.slnv <= 30)
													{
														vtketthuc = dsnv.slnv;
													}
													else if(dsnv.slnv > 30)
													{
														vtketthuc = 30;
													}
													ChuoiSearch = "";
													sokytudanhapsearch = 0;
													goto laphoadonnhapxuat;
												}
											if(Vitrilhd == 2)//NEU LA NO THI KHONG LUU
												{
													goto nhapthongtinhoadonxuat;
												}	
											}
										}
									}
								}
							}
					}
					//============= 3.BO CHON ===========
					if(Vitrikhoitao == 3)
					{
						if(dsnv.slnv > 0)//DI CHUYEN QUA DANH SACH NHAN VIEN
						{
							Vitrikhoitao = 0;
							MenuLapHoaDon(Vitrikhoitao);
							XoaHuongDanSuDungNhanVien2(doronghuongdan);
							goto laphoadon;
						}
					}
					//============= 4.RA GIAO DIEN CHINH ==========
					if(Vitrikhoitao == 4)
					{
						system("cls");
						system("color f0");
						return;
					}
					
			}
			}
	
			else if(keydsnv == 13)//NHAN ENTER
			{
				goto batphimchucnanglaphoadon;
			}
	}		
						
}

void TaoKhungTraHang()
{
	clrscr();
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
	cout<<"TIM KIEM :";
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
		gotoXY(2,24);
		cout<<"                                                      ";
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



void TaoKhungLietKeHoaDon()
{
		clrscr();
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
			
	
		
		gotoXY(2,27);
		cout<<"                                  ";
		gotoXY(2,37);
		cout<<"                                  ";
		//THANH NGANG DOWN	 
		gotoXY(0,43);
		cout<<"                                                                                                     ";
		gotoXY(101,43);
		cout<<"                                                                                                     ";
		
		
		
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
		gotoXY(35,1+i);
		cout<<"  ";
		gotoXY(35,12+i);
		cout<<"  ";
		gotoXY(35,22+i);
		cout<<"  ";
		gotoXY(35,32+i);
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
	TextColor(TrangDo);
	gotoXY(7,2);
	cout<<"CHUC NANG CHUONG TRINH";
}


void TaoKhungLietKeHoaDon2()
{
	TextColor(DoTrang);
	gotoXY(50,2);
	cout<<"NHAP MA NV : ";
	gotoXY(100,2);
	cout<<"TU NGAY : ";
	gotoXY(145,2);
	cout<<"DEN NGAY : ";
	gotoXY(113,2);
	cout<<"/";		
	gotoXY(117,2);
	cout<<"/";	
	gotoXY(159,2);
	cout<<"/";
	gotoXY(163,2);
	cout<<"/";
	
	TextColor(TrangDo);
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
	TextColor(TrangXanhLa);
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
	
		//THANH NGANG BETWEEN DUOI
		gotoXY(37,8);
		cout<<"                                                                                     ";
		gotoXY(122,8);
		cout<<"                                                                              ";
	
	
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
}


void MenuChucNangThongKe(int &Vitri)
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
		gotoXY(14,9);
		cout<<"THONG KE";
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
		cout<<"NHAP NAM";
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


void TaoKhungThongKe()
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
		cout<<"                                   ";
			
		//ITEM	
		gotoXY(60,7);
		cout<<"                                                           ";
		gotoXY(118,7);
		cout<<"                                                            ";
	
		//THANG 1
		gotoXY(60,11);
		cout<<"                                                           ";
		gotoXY(118,11);
		cout<<"                                                            ";
		
		//THANG 2
		gotoXY(60,15);
		cout<<"                                                           ";
		gotoXY(118,15);
		cout<<"                                                            ";
		
	//THANG 3
		gotoXY(60,19);
		cout<<"                                                            ";
		gotoXY(118,19);
		cout<<"                                                            ";
		

	//THANG 4
		gotoXY(60,23);
		cout<<"                                                           ";
		gotoXY(118,23);
		cout<<"                                                            ";
		
	
		//THANG 5
		gotoXY(60,27);
		cout<<"                                                           ";
		gotoXY(118,27);
		cout<<"                                                            ";
	
		//THANG 6
		gotoXY(60,31);
		cout<<"                                                           ";
		gotoXY(118,31);
		cout<<"                                                            ";
		
		
		//THANG 6
		gotoXY(60,35);
		cout<<"                                                           ";
		gotoXY(118,35);
		cout<<"                                                            ";

		
		
		gotoXY(2,27);
		cout<<"                                  ";
		gotoXY(2,37);
		cout<<"                                  ";
		//THANH NGANG DOWN	 
		gotoXY(0,43);
		cout<<"                                                                                                     ";
		gotoXY(101,43);
		cout<<"                                                                                                     ";
		
		
		
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
		gotoXY(35,1+i);
		cout<<"  ";
		gotoXY(35,12+i);
		cout<<"  ";
		gotoXY(35,22+i);
		cout<<"  ";
		gotoXY(35,32+i);
		cout<<"  ";
	}
	
	
	//THANH 3
	for(int i=0; i<=8; i++)
	{
		gotoXY(60,8+i);
		cout<<"  ";
		gotoXY(60,17+i);
		cout<<"  ";
		gotoXY(60,26+i);
		cout<<"  ";
	}
	
	//THANH 3
	for(int i=0; i<=8; i++)
	{
		gotoXY(78,8+i);
		cout<<"  ";
		gotoXY(78,17+i);
		cout<<"  ";
		gotoXY(78,26+i);
		cout<<"  ";
	}
	
	
	
	//THANH 3
	for(int i=0; i<=8; i++)
	{
	
		gotoXY(118,8+i);
		cout<<"  ";
		gotoXY(118,17+i);
		cout<<"  ";
		gotoXY(118,26+i);
		cout<<"  ";
	}
	
	//THANH 4
	for(int i=0; i<=8; i++)
	{
	
		gotoXY(136,8+i);
		cout<<"  ";
		gotoXY(136,17+i);
		cout<<"  ";
		gotoXY(136,26+i);
		cout<<"  ";
	}
	
		//THANH 5
	for(int i=0; i<=8; i++)
	{
	
		gotoXY(176,8+i);
		cout<<"  ";
		gotoXY(176,17+i);
		cout<<"  ";
		gotoXY(176,26+i);
		cout<<"  ";
	}
	
	
	
	//THANH 4
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
	
	TextColor(TrangDo);
	gotoXY(7,2);
	cout<<"CHUC NANG CHUONG TRINH";
	gotoXY(67,9);
	cout<<"THANG";
	gotoXY(96,9);
	cout<<"DOANH THU";
	gotoXY(125,9);
	cout<<"THANG";
	gotoXY(153,9);
	cout<<"DOANH THU";
	TextColor(DoTrang);
	gotoXY(106,4);
	cout<<"BANG THONG KE DOANH THU NAM";
	gotoXY(69,13);
	cout<<"1";
	gotoXY(69,17);
	cout<<"2";
	gotoXY(69,21);
	cout<<"3";
	gotoXY(69,25);
	cout<<"4";
	gotoXY(69,29);
	cout<<"5";
	gotoXY(69,33);
	cout<<"6";
	gotoXY(127,13);
	cout<<"7";
	gotoXY(127,17);
	cout<<"8";
	gotoXY(127,21);
	cout<<"9";
	gotoXY(126,25);
	cout<<"10";
	gotoXY(126,29);
	cout<<"11";
	gotoXY(126,33);
	cout<<"12";
	
}

