#include <stdio.h>

int main() {
	int numb, array[numb], n;

	while(true){
		printf("\n==========MENU==========\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra cac gia tri phan tu trong mang\n");
		printf("3. Dem so luong cac so nguyen to trong mang\n");
		printf("4. Tim giá tri nho thu hai trong mang\n");
		printf("5. Them vi tri vao mang\n");
		printf("6. Xoa phan tu\n");
		printf("7. sap xep mang theo thu tu giam dan bang Insertion sort\n");
		printf("8. Xoa toan bo phan tu trung lap trong mang va hien thi toan bo phan tu doc nhat co o trong mang\n");
		printf("9. dao nguoc mang\n");
		
		printf("\nMoi ban nhap vao so chuc nang tuong ung: ");
		scanf("%d", &numb);
		
		switch(numb){
			case 1:
				printf("Moi ban nhap so luong phan tu cho mang: ");
				scanf("%d", &n);
				for(int i = 0;i < n;i++){
					printf("array[%d] = ",i);
					scanf("%d", &array[i]);
				}
				break;
			case 2:
				if(n <= 0 ){
					printf("Mang trong!");
				}else{
					for(int i = 0;i < n;i++){
						printf("array[%d] = %d, ", i, array[i]);
					}
				}
				break;
			case 3:
				int count = 0, check;
				for(int i = 0;i < n;i++){
					check = 1;
					for(int j = 2;j * j <= array[i];j++){
						if(j % array[i] == 0){
							check = 0;
						}
					}if(check){
						count++;
					}
				}
				printf("co %d so nguyen to trong mang", count);
				break;
			case 4:
				for(int i = 0;i < 2;i++){
					int min = array[i];
					for(int j = 0;j < n;j++){
						if(array[j] < array[min]){
							min = array[j];
							array[j] = array[i];
							array[i] = min;
							
						}
					}
					printf("Phan tu nho nhat la %d ",array[2]);
				}
				break;		
		}
	}
	return 0;
}
