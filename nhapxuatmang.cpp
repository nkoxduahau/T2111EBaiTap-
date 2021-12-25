#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
int a[100];
int n;

void nhapMang(int x[100], int &n){
	do {
		printf("Nhap vao so luong: ");
		scanf("%d", &n);
	}while(n<1);
	for(int i=0; i<n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);
	}
}

void xuatMang(int x[100], int n){
	printf("Cac So Sau: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}

void themVaoCuoiMang(int x[100], int &n, int m){
	int size = sizeof(x)/sizeof(x[0]);
	if (n==size){
		printf("Khong the them vao!");
	}
	
	x[n] = m;
	n++;
}	

void themVaoDauMang(int x[100], int &n, int m){
	int size = sizeof(x)/sizeof(x[0]);
	if (n==size){
		printf("Khong the them vao!");
	}
	
	n++;
	for(int i=n-1; i>0; i--){
		x[i]=x[i-1];
	}
	x[0]=m;
	

}

void themVaoTinhTong(int x[100], int &n, int m, int k){
	int size = sizeof(x)/sizeof(x[0]);
	if (n==size){
		printf("Khong the tinh tong!");
	}
	
	n++;
	for(int i=n-1; i>k; i--){
		x[i]=x[i-1];
	}
	x[k]=m;

}

int main(){
	char gt;
	
	do {
		printf("\n------\nMENU (Tinh Toan)\n");
		printf("1 - Nhap So\n");
		printf("2 - Tinh Tong\n");
		printf("3 - Tinh Hieu\n");
		printf("4 - Tinh Tich\n");
		printf("5 - Tinh Thuong\n");
		printf("x - Thoat\n");
		printf("Lua chon cua ban la: ");
		scanf(" %c", &gt);
		
		if(gt=='1'){
			nhapMang(a, n);
		}else if (gt=='2'){
			xuatMang(a, n);
		}else if(gt=='3' || gt=='4' || gt=='5'){
			int m;
			printf("\nNhap vao m = ");
			scanf("%d", &m);
			
			
			if (gt=='3'){
				themVaoCuoiMang(a, n, m);
			}else if(gt=='4'){
				themVaoDauMang(a, n, m);
			}else if(gt=='5'){
				int k;
				printf("\nNhap vao = ");
				scanf("%d", &k);
				themVaoTinhTong(a, n, m , k);
			}
		}
	}while(gt!='x');
}
