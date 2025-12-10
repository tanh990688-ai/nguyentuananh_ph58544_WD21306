// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <stdlib.h>

void bai1() {
    char ten1[50], ten2[50], ten3[50];bai1
    int sl1, sl2, sl3;

    printf("\n--- BAI 1: THONG TIN SAN PHAM ---\n");

    printf("Nhap ten san pham 1: ");
    fflush(stdin); gets(ten1);
    printf("Nhap so luong: ");
    scanf("%d", &sl1);

    printf("Nhap ten san pham 2: ");
    fflush(stdin); gets(ten2);
    printf("Nhap so luong: ");
    scanf("%d", &sl2);

    printf("Nhap ten san pham 3: ");
    fflush(stdin); gets(ten3);
    printf("Nhap so luong: ");
    scanf("%d", &sl3);

    printf("\n--- Thong tin vua nhap ---\n");
    printf("1. %s - So luong: %d\n", ten1, sl1);
    printf("2. %s - So luong: %d\n", ten2, sl2);
    printf("3. %s - So luong: %d\n", ten3, sl3);
}

void bai2() {
    int n;
    printf("\n--- BAI 2: CAC SO CHIA HET CHO 3 ---\n");
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("\nCac so nho hon %d chia het cho 3: ", n);
    int tong = 0, dem = 0;
    for (int i = 1; i < n; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
            tong += i;
            dem++;
        }
    }

    if (dem > 0) {
        float tb = (float)tong / dem;
        printf("\nTrung binh cong cac so chia het cho 3 = %.2f\n", tb);
    }
    else {
        printf("\nKhong co so nao chia het cho 3!\n");
    }
}

void bai3() {
    char ten[50], chucvu[50];
    int tuoi;
    float luong;

    printf("\n--- BAI 3: THONG TIN NHAN VIEN ---\n");

    printf("Nhap ten nhan vien: ");
    fflush(stdin); gets(ten);
    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);
    printf("Nhap chuc vu: ");
    fflush(stdin); gets(chucvu);
    printf("Nhap luong: ");
    scanf("%f", &luong);

    printf("\n--- Thong tin nhan vien ---\n");
    printf("Ten: %s\n", ten);
    printf("Tuoi: %d\n", tuoi);
    printf("Chuc vu: %s\n", chucvu);
    printf("Luong: %.2f\n", luong);
}

int main() {
    int chon;

    do {
        printf("\n-------------------------Menu-------------------------\n");
        printf("1. Thong tin san pham\n");
        printf("2. Trung binh cong cac so chia het cho 3\n");
        printf("3. Thong tin Nhan vien\n");
        printf("0. Thoat\n");

        printf("Moi chon: ");
        scanf("%d", &chon);

        switch (chon) {
        case 1: bai1(); break;
        case 2: bai2(); break;
        case 3: bai3(); break;
        case 0: printf("Thoat chuong trinh...\n"); break;
        default: printf("Lua chon khong hop le! Moi nhap lai.\n");
        }
    } while (chon != 0);

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