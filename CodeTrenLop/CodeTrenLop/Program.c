// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

void demoMang2chieu()
{
    int array[2][3]; // Added missing semicolon here
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf_s("%d", &array[i][j]);
        }
	}
}
void demoString()
{
	//string
    char name[10] = "Anh"; // { 'A', 'n', 'h', '\0' }
    //get(name); > fgets()
    for (int i = 0; i < 3; i++)
    {
        scanf_s(" %c ", name[i]);
	}

    //xuat du lieu = for + printf
    for (int i = 0; i < 3; i++)
    {
        printf("%c", name[i]);
    }
	printf("\n");
    //puts(name);
}
int main()
{
    printf("Hi there!\n");
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