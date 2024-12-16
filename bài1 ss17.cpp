#include <stdio.h>

int main() {
    int a[100], n = 0, i, sum = 0, max, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                printf("Nhap tung phan tu:\n");
                for (i = 0; i < n; i++) {
                    printf("a[%d] = ", i);
                    scanf("%d", &a[i]);
                }
                break;

            case 2:
                printf("Cac phan tu trong mang: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Do dai mang: %d\n", n);
                break;

            case 4:
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += a[i];
                }
                printf("Tong cac phan tu: %d\n", sum);
                break;

            case 5:
                max = a[0];
                for (i = 1; i < n; i++) {
                    if (a[i] > max) max = a[i];
                }
                printf("Phan tu lon nhat: %d\n", max);
                break;

            case 6:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 6);

    return 0;
}

