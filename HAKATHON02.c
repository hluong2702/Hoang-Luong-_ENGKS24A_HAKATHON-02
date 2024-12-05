#include<stdio.h>

int main(){

    int n, choice;
    int arr[100];
    int index, value;
    int count = 0;
    int chan, le;
do{
    printf("\nMENU\n");
    printf("1.Nhập số phần tử và giá trị cho mảng\n");
    printf("2.In ra giá trị các phần tử trong mảng\n");
    printf("3.Đếm số lượng các phần tử chẵn lẻ trong mảng\n");
    printf("4.Tìm giá trị lớn thứ hai trong mảng\n");
    printf("5.Thêm một phần tử vào đầu mảng, phần tử mới thêm vào mảng phải do người dùng nhập vào\n");
    printf("6.Xóa phần tử tại một vị trí cụ thể\n");
    printf("7.Sắp xếp mảng theo thứ tự giảm dần\n");
    printf("8.Cho người dùng nhập vào một phần tử, tìm kiếm xem phần tử đó có tồn tại trong mảng hay không\n");
    printf("9.In ra toàn bộ số nguyên tố trong mảng đã được bình phương\n");
    printf("10.Sắp xếp mảng theo thứ tự giảm dần\n");
    printf("11.Thoát\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Moi ban nhap vao so phan tu cua mang\n");
        scanf("%d",&n);

        if(n<=0){
            printf("Khong hop le");
            return 1;
        }
        for(int i = 0;i<n;i++){
             printf("Gia tri cho tung mang la ");
             scanf("%d",&arr[i]);
        }
           break;
        case 2:
        printf("Cac phan tu co trong mang la \n");
        for(int i = 0;i<n;i++){
            printf("arr[%d] = %d\n",i,arr[i]);
        }
        break;
        case 3:
        for(int i =0;i<n;i++){
            if(arr[i] %2 ==0){
                chan++;
            }else{
                le++;
            }
        }
        printf("So phan tu chan trong mang la %d\n ",chan -1);
        printf("So phan tu le trong mang la %d",le);
        break;

        case 4:
        break;

        case 5:

        printf("Moi ban nhap vao vi tri muon chen ");
        scanf("%d",&index);

        printf("Moi ban nhap vao gia tri muon them ");
        scanf("%d",&value);

        if(index> n-1){
        printf("Khong hop le ");
        return 0;
    }
    
    for(int i =n ;i>index;i--){
        arr[i]= arr[i-1];
    }
    arr[index]=value;
    for(int i = 0;i<n+1;i++){
        printf("%d\n",arr[i]);
    }
        break;
        case 6:
        printf("Moi ban nhap vao vi tri can xoa ");
        scanf("%d",&index);

        if(index>n-1){
        printf("Khong hop le ");
        return 0;
    }
   
         for(int i = index;i<n-1;i++){
         arr[i]=arr[i+1];
     }
        for(int i =0;i< n-1;i++){
        printf("%d\n",arr[i]);
    }
        break;
        case 7:
        for(int i = 0;i<n;i++){
        int minIndex =i;
        for(int j = i +1;j<n;j++){
            if(arr[j]>arr[minIndex]){
                minIndex=j;
            }

        }
         int temp= arr[minIndex];
         arr[minIndex]=arr[i];
         arr[i]=temp;
    }
    for(int i = 0;i<5;i++){
        printf("%d\t",arr[i]);

    }
        break;
        case 8:
        printf("Moi ban nhap vao mot phan tu  ");
        scanf("%d",&n);

        for(int i = 0;i<n;i++){
        if(arr[i]== n){
            printf("Vi tri cua phan tu do la %d",i+1);
            count ++;
        }
    }
    if(count ==0){
        printf("Vi tri cau phan tu k ton tai ");
    }
        break;

        case 9:
        for (int i = 0; i < n; i++) {
        int prime = 1;
        if (arr[i] < 2){
            prime = 0;
        }
        for (int j = 2; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            printf(" So nguyen to la %d ", arr[i]);
        }
        if(prime !=1 && prime !=0 ){
            printf("Khong co so nguyen to trong mang ");
        }
        
}
        break;

        case 10:
        for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
     
    }
        for(int i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }
        break;
    }
}while(choice !=11);

return 0;

}