/*
Để giải quyết bài toán này, chúng ta cần thực hiện các bước để biến mảng đầu vào thành một 
mảng không giảm với số lượng đồng xu tối thiểu. Ý tưởng chính là đi qua từng phần tử của mảng 
và nếu phát hiện phần tử không thỏa mãn điều kiện arr[i] >= arr[i-1], thì cần tăng giá trị của 
arr[i] lên sao cho arr[i] bằng hoặc lớn hơn arr[i-1]. Mỗi lần tăng như vậy tương đương với việc sử dụng một đồng xu.
 */

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int result = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                result = result + (arr[i - 1] - arr[i]); // Tính số lần tăng cần thiết
                arr[i] = arr[i - 1];                     // Cập nhật giá trị của phần tử hiện tại
            }
        }
        printf("%d\n", result);
    }
    return 0;
}