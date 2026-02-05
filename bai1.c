/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

 //Định nghĩa hàm tìm giá trị lớn nhất trong 3 số
 int temHam(int a, int b, int c) {
     int max = a;   
     if (b > max) {
         max = b;
     }
     if (c > max) {
         max = c;
     }
     printf("Gia tri lon nhat la: %d\n", max);
     return max;
 }

int main() {

    
    int so1, so2, so3;
    printf("Nhap vao 3 so nguyen: ");
    scanf("%d %d %d", &so1, &so2, &so3);
    int max = temHam(so1, so2, so3);
    printf("So lon nhat trong 3 so la: %d\n", max);
    return 0;
}