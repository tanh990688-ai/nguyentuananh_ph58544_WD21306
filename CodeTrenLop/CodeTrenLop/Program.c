// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
//   void demoMang2chieu()
//{
//    int array[2][3]; // Added missing semicolon here
//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            scanf_s("%d", &array[i][j]);
//        }
//	} // <-- Added missing closing brace for demoMang2chieu
	void demoString()
	{
		// string
		//char name[50] = { 'A', 'n', 'h' };
		//char mangKyTu[50];
		//// gets(name); > fgets();      khong dung duoc khoang trang
		////for (int i = 0; i < 10; i++)
		////{
		////	scanf_s(" %c", &name[i]);
		////}
		//while (getchar() != '\n');
		//printf("Nhap ten cua ban: ");
		//fgets(name, sizeof(name), stdin); //nhap duoc khoang trang
		//// xuat du lieu = for + printf
		//printf(" %s", name);
		//printf("\n");
		////puts(name) thay the cho ca mang for bao gom ca dau xuong dong
		//// puts(mangKyTu);
		//printf("String Length: ");
		//printf("%d", strlen(mangKyTu));
		//printf("\n");
		//printf("String Compare Greater than: ");
		//printf("%d", strcmp("C", "A"));
		//printf("\n");
		//printf("String Lower: ");
		//printf("%s", strlwr(mangKyTu));
		//printf("\n");
		//printf("String Upper: ");
		//printf("%s", strupr(mangKyTu));
		//printf("\n");
		//printf("String Reverse (Encryption): ");
		//printf("%s", strrev(mangKyTu));
		//printf("\n");
		//printf("String Reverse (Decryption): ");
		//printf("%s", strrev(mangKyTu));
		//printf("\n");
		//printf("Find String in String: ");
		//if (strstr(mangKyTu, "A") != NULL)
		//{
		//	printf("Found: ");
		//	printf("%s", strstr(mangKyTu, "A"));
		//}
		//else
		//{
		//	printf("NOT FOUND");
		//}


	}
	//bai1
	//void thongTinMH()
	//{
	//	char tenMH[50];
	//	int maMon;
	//	int Tinchi;

	//	while (getchar() != '\n');
	//	fgets(tenMH, sizeof(tenMH), stdin);
	//	scanf("%d", &maMon);
	//	scanf("%d", &Tinchi);

	//	printf("%s\n", tenMH);
	//	puts(tenMH);
	//	printf("%d\n", maMon);
	//	printf("%d\n", Tinchi);
	//}
	//void tinhTongSoLe()
	//	{
	//	int n;
	//	int sum = 0;
	//	printf("Nhap n: ");
	//	scanf("%d", &n);
	//	for (int i = 1; i <= n; i++)
	//	{
	//		if (i % 2 != 0)
	//		{
	//			sum += i;
	//		}
	//	}
	//	printf("Tong so le tu 1 den %d la: %d\n", n, sum);
	//}
	//void thongTinDiemLab()
	//	{
	//	char tenSV[50];
	//	float diemLab;
	//	while (getchar() != '\n');
	//	printf("Nhap ten sinh vien: ");
	//	fgets(tenSV, sizeof(tenSV), stdin);
	//	printf("Nhap diem lab: ");
	//	scanf("%f", &diemLab);
	//	printf("Ten sinh vien: ");
	//	puts(tenSV);
	//	printf("Diem lab: %.2f\n", diemLab);
	//}

#include <stdio.h>

	int main() {
		int choice;

		do {
			printf("\n==============MENU===============\n");
			printf(" Chon chuc nang:\n");
			printf(" 1. Thong tin mon hoc\n");
			printf(" 2. Tinh tong so le\n");
			printf(" 3. Thong tin diem Lab\n");
			printf(" 0. Thoat\n");
			printf(" Moi chon: ");
			scanf("%d", &choice);

			switch (choice) {

			case 1: {
				char tenMH[50], maMH[20];
				int soTin;
				const int giaTinChi = 500000;

				printf("\nNhap ten mon hoc: ");
				getchar();
				fgets(tenMH, sizeof(tenMH), stdin);

				printf("Nhap ma mon hoc: ");
				fgets(maMH, sizeof(maMH), stdin);

				printf("Nhap so tin chi: ");
				scanf("%d", &soTin);

				
				printf("\n--- Thong tin vua nhap ---\n");
				printf("Ten mon: %s", tenMH);
				printf("Ma mon: %s", maMH);
				printf("So tin chi: %d\n", soTin);

			
				int hocPhi = soTin * giaTinChi;
				printf("Hoc phi: %d VND\n", hocPhi);
				break;
			}

		
			case 2: {
				int n, i, tongLe = 0;

				printf("\nNhap 1 so nguyen duong n: ");
				scanf("%d", &n);

				for (i = 1; i <= n; i += 2) {
					tongLe += i;
				}

				printf("Tong cac so le tu 1 den %d = %d\n", n, tongLe);
				if (n % 2 == 0)
					printf("So %d la so CHAN.\n", n);
				else
					printf("So %d la so LE.\n", n);

				break;
			}

			case 3: {
				break;
			}

			case 0:
				printf("\nDa thoat chuong trinh.\n");
				break;

			default:
				printf("Lua chon khong hop le. Moi nhap lai!\n");
			}

		} while (choice != 0);

		return 0;
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