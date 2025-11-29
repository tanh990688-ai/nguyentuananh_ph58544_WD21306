// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.
#include <stdio.h>
#include <math.h>
void kiemTraSoNguyen()
{
	double soCanKiemTra;
	int luaChon;
	do
	{
		printf("Nhap so can kiem tra: ");
		scanf_s("%lf", &soCanKiemTra);
		// Co muon tiep tuc chuong trinh khong
		printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
		scanf_s("%d", &luaChon);
		printf("----------------------------------------------------\n");
	} while (luaChon == 1);
}
void uocChungvaBoiChung()
{
	double soThuNhat, soThuHai, uocSoChung, boiSoChung;
	int luaChon;
	do
	{
		printf("Nhap so thu nhat: ");
		scanf_s("%lf", &soThuNhat);
		printf("Nhap so thu hai: ");
		scanf_s("%lf", &soThuHai);
		// Co muon tiep tuc chuong trinh khong 
		printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
		scanf_s("%d", &luaChon);
		printf("----------------------------------------------------\n");
	} while (luaChon == 1);
}
void tinhTienQuanKaraoke()
{
	double gioBatDau, gioKetThuc, soGioThue, tienThanhToan;
	int luaChon;
	do
	{
		printf("Nhap gio bat dau: ");
		scanf_s("%lf", &gioBatDau);
		printf("Nhap gio ket thuc: ");
		scanf_s("%lf", &gioKetThuc);
		soGioThue = gioKetThuc - gioBatDau;
		// Co muon tiep tuc chuong trinh khong
		printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
		scanf_s("%d", &luaChon);
		printf("----------------------------------------------------\n");
	} while (luaChon == 1);
}
void tinhTienDien()
{
	double soDienTieuThu, tienDien, b1 = 1678, b2 = 1734, b3 = 2014, b4 = 2536, b5 = 2834, b6 = 2927;
	int luaChon;
	do
	{
		printf("Nhap so dien tieu thu(kWh): ");
		scanf_s("%lf", &soDienTieuThu);
		if (soDienTieuThu >= 0)
		{
			if (soDienTieuThu <= 50)
			{
				tienDien = soDienTieuThu * b1;
			}
			else if (soDienTieuThu <= 100)
			{
				tienDien = 50 * b1 + (soDienTieuThu - 50) * b2;
			}
			else if (soDienTieuThu <= 200)
			{
				tienDien = 50 * b1 + 50 * b2 + (soDienTieuThu - 100) * b3;
			}
			else if (soDienTieuThu <= 300)
			{
				tienDien = 50 * b1 + 50 * b2 + 100 * b3 + (soDienTieuThu - 200) * b4;
			}
			else if (soDienTieuThu <= 400)
			{
				tienDien = 50 * b1 + 50 * b2 + 100 * b3 + 100 * b4 + (soDienTieuThu - 300) * b5;
			}
			else
			{
				tienDien = 50 * b1 + 50 * b2 + 100 * b3 + 100 * b4 + 100 * b5 + (soDienTieuThu - 400) * b6;
			}
			printf("So tien dien phai tra: %.2f VND\n", tienDien);
		}
		else
		{
			printf("So dien tieu thu khong hop le!\n");
		}
		// Co muon tiep tuc chuong trinh khong
		printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
		scanf_s("%d", &luaChon);
		printf("----------------------------------------------------\n");
	} while (luaChon == 1);
}
//Done
void doiTien()
{
	double soTienCanDoi;
	int luaChon;
	do
	{

		printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
		scanf_s("%d", &luaChon);
		printf("----------------------------------------------------\n");
	} while (luaChon == 1);
}
void tinhLaiSuatVayNganHang()
{
	int luaChon;
	do
	{

		printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
		scanf_s("%d", &luaChon);
		printf("----------------------------------------------------\n");
	} while (luaChon == 1);
}
void vayTienMuaXeTraGop()
{
	int luaChon;
	do
	{

		printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
		scanf_s("%d", &luaChon);
		printf("----------------------------------------------------\n");
	} while (luaChon == 1);
}
void sapXepThongTinSinhVien()
{
	int luaChon;
	do
	{

		printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
		scanf_s("%d", &luaChon);
		printf("----------------------------------------------------\n");
	} while (luaChon == 1);
}
void gameFpolyLott()
{
	int luaChon;
	do
	{

		printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
		scanf_s("%d", &luaChon);
		printf("----------------------------------------------------\n");
	} while (luaChon == 1);
}
void tinhToanPhanSo()
{
	int luaChon;
	do
	{

		printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
		scanf_s("%d", &luaChon);
		printf("----------------------------------------------------\n");
	} while (luaChon == 1);
}
int main()
{
	int chon;
	do {
		printf("MENU\n");
		printf("CN0: Thoat\n");
		printf("CN1: Kiem tra so nguyen:\n");
		printf("CN2: tim Uoc so chung va boi so chung cua 2 so:\n");
		printf("CN3: Chuong trinh tinh tien cho quan Karaoke:\n");
		printf("CN4: Tinh tien dien:\n");
		printf("CN5: Chuc nang doi tien:\n");
		printf("CN6: Xay dung chuc nang tinh lai suat vay ngan:\n");
		printf("CN7: Xay dung chuong trinh vay tien mua xe:\n");
		printf("CN8: Sap xep thong tin sinh vien:\n");
		printf("CN9: Xay dung game FPOLY-LOTT:\n");
		printf("CN10: Xay dung chuong trinh tinh toan phan so:\n");
		printf("Ban chon chuc nang nao (1-10): ");
		scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			printf("CN1: Kiem tra so nguyen:\n");
			kiemTraSoNguyen();
			break;
		case 2:
			printf("CN2: tim Uoc so chung va boi so chung cua 2 so:\n");
			uocChungvaBoiChung();
			break;
		case 3:
			printf("CN3: Chuong trinh tinh tien cho quan Karaoke:\n");
			tinhTienQuanKaraoke();
			break;
		case 4:
			printf("CN4: Tinh tien dien:\n");
			tinhTienDien();
			break;
		case 5:
			printf("CN5: Chuc nang doi tien:\n");
			doiTien();
			break;
		case 6:
			printf("CN6: Xay dung chuc nang tinh lai suat vay ngan:\n");
			tinhLaiSuatVayNganHang();
			break;
		case 7:
			printf("CN7: Xay dung chuong trinh vay tien mua xe:\n");
			vayTienMuaXeTraGop();
			break;
		case 8:
			printf("CN8: Sap xep thong tin sinh vien:\n");
			sapXepThongTinSinhVien();
			break;
		case 9:
			printf("CN9: Xay dung game FPOLY-LOTT:\n");
			gameFpolyLott();
			break;
		case 10:
			printf("CN10: Xay dung chuong trinh tinh toan phan so:\n");
			tinhToanPhanSo();
			break;
		default:
			printf("loi");
			break;
		}
	} while (chon != 0);
}
// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Mo "View" > "Solution Explorer"
//          de them/quan ly cac files
//   2. Mo "View" > "Output"
//          de kiem tra "build output" va "cac thong bao khac"
//   3. Mo "View" > "Error List"
//          de xem loi
//   4. Chon Project > "Add" > "New Item"
//          de tao moi file code,
//      hoac Project > "Add" > "Existing Item"
//          de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//          chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//          trong cua so "Solution Explorer"
//          bam chuot phai vao "Solution"
//          chon "Open Folder in File Explorer"

// GV: AnhTT184