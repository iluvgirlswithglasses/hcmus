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

Đảm nhiệm việc làm game, trao trang web lại cho người khác làm. Hôm nay lần đầu làm quen với Godot.

Về tính năng, hôm nay cài được những tính năng sau:

1. Cơ chế di chuyển
2. Cơ chế bắn súng
3. Cơ chế Spawn quái ngẫu nhiên
4. Cơ chế Spawn quái theo đội hình (được biểu diễn bằng phương trình đường hay vector lực tuyến tính)
5. Cơ chế chỉ số, bao gồm những chỉ số cơ bản như máu/sát thương, chỉ số số liệu như kills count,... và nhiều loại chỉ số khác được lưu trữ trong một Manager (thuộc vấn đề kỹ thuật)
6. Cơ chế Phase & Stage
7. Cơ chế tháo lắp súng, gồm đa dạng các loại súng
8. Cơ chế đường đạn bay: Đạn bay bằng phương trình đường hay vector lực tuyến tính

## Thứ Tư, Ngày 16 Tháng 11 Năm 2022

Since I wrote all of my commits in English, imma write it down in the same language.

I translated them the first day because I need to report them to the leader, that's all.

Today commits include:

- Optimization
- Character & Enemy & Environment logic
- Character and Enemy design toolbox
- Level design toolbox
- Completing Collision system, never to touch that again
- Phase manager 
- Wait Time manager
- Font resources
- Spiral projectiles
- Clownpiece boss / Stage 1 boss

## Thứ Năm, Ngày 17 Tháng 11 Năm 2022

Today commits include:

- Adding more features to Clownpiece boss. Consider she's completed
- Added more enemy types: 
    - IceFairy - It's actually the first enemy type developed 2 days ago, but I generalized it so it can be inherited by other enemy types in the future
    - FireFairy - The one that shoots 4 consecutive bullets
    - WindFairy - The one that shoots 4 bullets in a corn-shape
- Added MORE level design tools. They are called "spawners" which control how enemies appear on the scenes. Since I want them to appear in nice-looking formation, I believe I need to work on these design tools a lots.
- Working on Stage 1...
- Spiral Projectiles (and Spiral Shooting Guns) bugfix
- level design tools bug fix
- bullets' logic debug

## Thứ Sáu, Ngày 18 Tháng 11 Năm 2022

Today commits include:

- Created a new WindFairy class. It just the old one with simpler attack mechanism.
- Added more control objects over the project
- Added a new enemy design tool.
- FireFairy upgrade. Its gameplay is unchanged, only the hierarchy which is changed from the old to the new enemy design tool.
- Added more parameters to IceFairy. It is now having more customizable attack patterns.
- Spiral Gun's generalization. I can now build a Shotgun based on this.
- Input Map update - the player is now able to play the game either with arrows or WASD.
- Player buff. Since my first tester found this game TOO HARD, I decided to buff the player a little bit.
- Stage 1 design done, entering test phase.
- Added a scoreboard
- Added a whole UI logic
- Added a stage greeting scene based on that UI Logic
- Added a SHOTGUN!
- Added a new type of Spiral Gun - The one that shoots bullet to bullet in a clockwise/counter-clockwise pattern.
- Since my first tester found the game TOO HARD, I decided to move Stage 1 to Stage 2, and create another Stage 1 instead
- Moon Rabit - (the new) Stage 1 boss created
- Stage 2 (the old Stage 1) difficulty heighten
- Gun Fix
- New Enemy added: LightFairy - The one that shoots 3 bullets in 3 directions.
- Added music. The tracks used are composed by Team Shanghai Alice (all rights guaranteed), which are:
    - "Scarlet Beyond a Crimson Dream" / (Future) Title Scene Music
    - "The Space Shrine Maiden Appears" / Stage 1 Background Music
    - "Pierrot of the Star-Spangled Banner" / Stage 2 Background Music
    - "Faraway Voyage of 380,000 Kilometers" / Stage 3 (future) background music
- Added a score system, which isn't good at all, but statistics look cool anyway.

## Thứ Bảy, Ngày 19 Tháng 11 Năm 2022

- Finally made a Title Scene
- Make the UI Better: Retry option & Return to Title option.
- Healthbar completed
- Added new enemies: Spiral Shooting Spaceship & Shotgun Spaceship (which are named VertexFairy and ShotgunFairy, respectively)
- Added one more phase to Stage 2, which use the aforementioned enemy classes.
- Audio player to play those music
- Game over function
- Give LightFairy more function
- Stage 1 design
- Stage 1 balance
- Stage 1 FINAL balance
- Added background to all scenes

## Chủ Nhật, Ngày 20 Tháng 11 Năm 2022

- Hitbox update
- Clownpiece (Stage 2 boss) nerf
- Added explosion animation
- Collectible item system
- More Balance & Bugfix
- Spiral Shotgun - A gun that shot multiple shotgun shells in circular directions.
- Added 2 more enemy classes that use this new shotgun, which are:
    - PyroButterfly: The gray spaceship that shoots red bullets in circular formation, seen in Stage 3
    - CryoButterfly: Sharing the same appearance with PyroButterfly, but shoots blue bullets and is strong af.
- Complete level design for Stage 3, excluding the boss.
- background music bugfix
- The new boss - Yuuka - is started to be designed as the boss of Stage 3
- Clownpiece nerf
- Slight buffs for Stage 3
- Yuuka boss completed

## Thứ Hai, Ngày 21 Tháng 11 Năm 2022

- Yuuka nerf
- quit game function
- tutorial added on title scene
- added the "restart stage" hotkey
- savegame system
- relax. seriously.



