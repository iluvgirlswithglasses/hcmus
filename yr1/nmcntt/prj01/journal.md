---
title: "DevLog"
author: "Lưu Nam Đạt"
date: "22027062"
geometry: margin=2cm
output: 
  pdf_document: 
    latex_engine: xelatex
fontsize: 12pt
---

## Thứ Tư, Ngày 2 Tháng 11 Năm 2022

Dò thử 2 lựa chọn: Wordpress và Google Sites. Nhưng cảm thấy Wordpress nó đã tiến hóa nhiều quá nên quyết định dùng Wordpress luôn, đỡ phải suy nghĩ.

## Thứ Năm, Ngày 3 Tháng 11 Năm 2022

Triển khai Website theo kế hoạch đã định.

Dự tính lấy domain là *flaming-watermelon.wordpress.com*, nhưng vì dùng miễn phí nên nó ép phải có số suffix do nó chọn ngẫu nhiên. Hên là lấy được domain *flamingwatermelon22.wordpress.com*, có số 22 tượng trưng cho K22, cũng được.

Dùng thử một vài tính năng có thể cần thiết của nó. Kết luận:

- Giao diện vượt ngoài mong đợi. Nice, neat, clean, và responsive. Riêng phần responsive chắc không thể chê vào đâu.
- Nhúng Javascript vào hơi khó, nhưng Wordpress đã cung cấp đủ các item và tính năng lặt vặt rồi nên không sao.
- Có thể sửa được Source Code luôn nên là quá đã.

Lắp mấy cái văn chương của mình vô để test các tính năng liên quan đến blog. Rất tuyệt vời! Các bài blog được tự động index lên trang chủ, nội dung được phân loại và trình bày rõ ràng. Làm web bây giờ dễ vậy sao!?

## Thứ Sáu, Ngày 4 Tháng 11 Năm 2022

Trong buổi họp nhóm hôm nay, website Flaming Watermelon lần đầu tiên được trình diện. Không phải sửa gì cả.

## Thứ Hai, Ngày 14 Tháng 11 Năm 2022

Đăng thông tin thành viên và biên bản lên web flamingwatermelon22

Cơ bản thì cứ copy paste từ trang skyline345, vì đa số thành viên nhóm này là thành viên của nhóm skyline.

## Thứ Ba, Ngày 15 Tháng 11 Năm 2022

Đảm nhiệm việc làm game. Hôm nay lần đầu làm quen với Godot.

Repository được mở ở: [github.com/iluvgirlswithglasses/EasternOdyssey](github.com/iluvgirlswithglasses/EasternOdyssey)

Về tính năng, hôm nay cài được những tính năng sau:

1. Cơ chế di chuyển
2. Cơ chế bắn súng
3. Cơ chế Spawn quái ngẫu nhiên
4. Cơ chế Spawn quái theo đội hình (được biểu diễn bằng phương trình đường hay vector lực tuyến tính)
5. Cơ chế chỉ số, bao gồm những chỉ số cơ bản như máu/sát thương, chỉ số số liệu như kills count,... và nhiều loại chỉ số khác được lưu trữ trong một Manager (thuộc vấn đề kỹ thuật)
6. Cơ chế Phase & Stage
7. Cơ chế tháo lắp súng, gồm đa dạng các loại súng
8. Cơ chế đường đạn bay: Đạn bay bằng phương trình đường hay vector lực tuyến tính

Về kỹ thuật, codebase của Eastern Odyssey có những đặc trưng sau:

1. Hướng đối tượng nghiêm ngặt. Có tính Generalized cao --> Dễ dàng thêm/sửa/xóa các tính năng trong game. Dễ dàng sửa chữa và phát triển.
2. Hierarchy được chuẩn hóa.

## Thứ Tư, Ngày 16 Tháng 11 Năm 2022

Về kỹ thuật: 

1. Nhiều cải tiến được áp dụng lên codebase sẵn có.
2. Hoàn thiện Character & Enemy & Environment Logic
3. Hoàn thiện Collision & Interaction Logic

Về tính năng: 

1. Hoàn thành phát triển bộ công cụ Character/Enemy Design
2. Đã hoàn phát triển bộ công cụ Level Design.
