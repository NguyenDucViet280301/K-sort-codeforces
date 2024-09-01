Cho một mảng số nguyên a có độ dài n.

Bạn có thể thực hiện phép toán sau một số lần bất kỳ (có thể là không):

Bước 1: Chọn một số nguyên k sao cho 1 ≤ k ≤ n và trả k + 1 đồng xu.

Bước 2: Chọn chính xác k chỉ số sao cho 1 ≤ i₁ < i₂ < ... < iₖ ≤ n.

Bước 3: Với mỗi z từ 1 đến k, tăng aᵢz lên 1 đơn vị.

Hãy tìm số đồng xu tối thiểu cần thiết để làm cho mảng a trở thành không giảm. Nghĩa là a₁ ≤ a₂ ≤ ... ≤ aₙ.

Đầu vào:

Mỗi test case chứa nhiều trường hợp kiểm tra. Dòng đầu tiên của input chứa một số nguyên duy nhất t (1 ≤ t ≤ 10⁴) - số lượng test case. Mô tả của các test case theo sau.

Dòng đầu tiên của mỗi test case chứa một số nguyên duy nhất n (1 ≤ n ≤ 10⁵) - độ dài của mảng a.

Dòng thứ hai của mỗi test case chứa n số nguyên a₁, a₂, ..., aₙ (1 ≤ aᵢ ≤ 10⁹) - các phần tử của mảng a.

Đảm bảo rằng tổng của n trên tất cả các test case không vượt quá 10⁵.

Đầu ra:

Với mỗi test case, xuất ra một số nguyên duy nhất - số đồng xu tối thiểu cần thiết để làm cho mảng a trở thành không giảm.

Giải quyết:

Để giải quyết bài toán này, chúng ta cần thực hiện các bước để biến mảng đầu vào thành một 
mảng không giảm với số lượng đồng xu tối thiểu. Ý tưởng chính là đi qua từng phần tử của mảng 
và nếu phát hiện phần tử không thỏa mãn điều kiện arr[i] >= arr[i-1], thì cần tăng giá trị của 
arr[i] lên sao cho arr[i] bằng hoặc lớn hơn arr[i-1]. Mỗi lần tăng như vậy tương đương với việc sử dụng một đồng xu.
