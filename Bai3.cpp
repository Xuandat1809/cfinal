
/*
dữ liệu về các giao dịch chuyển tiền ngân hàng trong 1 ngày được cho bởi định dạng sau đây:
<from_account> <to_account> <money> <time_point> <atm>
Trong đó:
<from_account>: là tài khoản chuyển tiền(xâu kí tự độ dài từ 6 đến 20)
<to_account>: tài khoản nhận tiền(xâu kí tự độ dài 6 đến 20)
<money>: số tiền đc chuyển trong giao dịch (số nguyên từ 1 đến 100)
<time_point>: thời điểm giao dịch diễn ra, là 1 xâu kí tự định dạng HH:MM:SS(giờ:phút:giây)
<atm>: mã của ATM nơi thực hiện giao dịch chuyển tiền(xâu kí tự độ dài 3 đến 10)
Ví dụ: T00112233445 T001234002 20 08:36:25 BIDV(tại BIDV, tài khoản T00112233445 chuyển 20$ cho
tài khoản T001234002 tại thời điểm 08:36:25)
Một chu trình giao dịch độ dài n bắt đầu từ tài khoản A1 là 1 dãy các tài khoản khác nhau
A1, A2, ..., An trong đó A1 có chuyển tiền cho A2, A2 có chuyển tiền cho A3,...,
An có chuyển tiền cho A1

Viết chương trình thực hiện các truy vấn sau đây trên tập dữ liệu giao dịch chuyển tiền nêu trên
- ?total_money_transaction: tổng số tiền trong tất cả các giao dịch đã cho
- ?total_money_transaction_from <account>: tính tổng số tiền được chuyển đi bởi tài khoản <account>
- ?inspect_cycle <acc> <n>: tính và trả về giá trị 1 nếu có 1 chu trình giao dịch độ dài <n>
bắt đầu từ giao dịch <acc>; và trả về 0, nếu ngược lại.
- ?max_money_period <time1> <time2>: tính số tiền của giao dịch lớn nhất được thực hiện trong giai đoạn 
từ <time1> đến <time2> (time1 và time2 có định dạng HH:MM:SS NHƯ TRÊN)

Khối thông tin về giao djch bao gồm các dòng(mỗi bộ dữ liệu test có thể lên đến 100000 dòng)
- Mỗi dòng là thông tin về 1 giao dịch đc mô tả theo định dạng nêu trên
- Khối thông tin về giao dịch được kết thúc bởi dòng chứa kí tự #
Khối thông tin về truy vấn bao gồm các dòng (mỗi bộ dữ liệu test có thể lên đến 100000 dòng)
- Mỗi dòng là 1 truy vấn có định dạng đc mô tả như trên
- Khối thông tin truy vấn được kết thúc bởi dòng chứa kí tự #
OUTPUT: in ra stdout( trên mỗi dòng) kết quả của truy vấn tương ứng
*/

