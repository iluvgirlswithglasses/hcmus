---
title: "Assignment 3"
author: "Lưu Nam Đạt"
date: "22127062"
geometry: margin=2cm
output: 
  pdf_document: 
    latex_engine: xelatex
fontsize: 12pt
---

# Bài 1

Với quy định:

  - `"|"` là phép OR
  - `"^"` là phép XOR
  - `"&"` là phép AND

Ta có:

  - `a = A ^ B`
  - `b = A & B`
  - `c = A | B`
  - `d = b | a`
  - `e = a ^ B`
  - `f = b ^ c`
  - `g = d ^ e`
  - `h = e & f`
  - `L1 = g`
  - `L2 = h`

Xét bảng chân trị, ta có:

| A | B | a | b | c | d | e | f | g | h | L1  |  L2 |
| - | - | - | - | - | - | - | - | - | - | :-: | :-: |
| 1 | 0 | 1 | 0 | 1 | 1 | 1 | 1 | 0 | 1 |  0  |  1  |
| 0 | 1 | 1 | 0 | 1 | 1 | 0 | 1 | 1 | 0 |  1  |  0  |
| 1 | 1 | 0 | 1 | 1 | 1 | 1 | 0 | 0 | 0 |  0  |  0  |

Vậy,  

  - Nếu bật Switch A: Đèn L1 tối, đèn L2 sáng
  - Nếu bật Switch B: Đèn L1 sáng, đèn L2 tối
  - Nếu bật cả 2 Switch: Cả 2 đèn đều tối

# Bài 2

Ta có bảng tương quan giá trị giữa hệ thập lục phân và hệ nhị phân như sau:

| Hex | Bin  | Hex | Bin  | Hex | Bin  | Hex | Bin  |
| :-: | :--: | :-: | :--: | :-: | :--: | :-: | :--: |
| 0   | 0000 | 4   | 0100 | 8   | 1000 | C   | 1100 |
| 1   | 0001 | 5   | 0101 | 9   | 1001 | D   | 1101 |
| 2   | 0010 | 6   | 0110 | A   | 1010 | E   | 1110 |
| 3   | 0011 | 7   | 0111 | B   | 1011 | F   | 1111 |

Vì $16 = 2^4$, khi đổi từ cơ số 16 sang cơ số 2, ta chỉ cần ráp 4 chữ số nhị phân tương ứng vào vị trí của mỗi chữ số thập lục phân là sẽ ra đáp án.

- *a)* $5$FD$97_{16} = 5 \times (2^4)^4 + 16 \times (2^4)^3 + 14 \times (2^4)^2 + 9 \times (2^4)^1 + 7 \times (2^4)^0 =$ `0101 1111 1101 1001 0111`$_{2}$
- *b)* $610$A$_{16} =$ `0110 0001 0000 1010`$_{2}$
- *c)* ABCD$_{16} =$ `1010 1011 1100 1101`$_{2}$
- *d)* $0100_{16} =$ `0000 0001 0000 0000`$_{2}$

# Bài 3

- *a)* $32_{10} =$ `0010 0000`$_{2}$
- *b)* $15_{10} =$ `1111`$_{2}$
- *c)* $27_{10} =$ `0001 1011`$_{2}$
- *d)* $53_{10} =$ `0011 0101`$_{2}$

# Bài 4

- *a)* $11.01_{2} = 2^1 + 2^0 + 2^{-2} = 3.25$
- *b)* $101.111_{2} = 2^2 + 2^0 + 2^{-1} + 2^{-2} + 2^{-3} = 5.875$
- *c)* $10.1_{2} = 2^1 + 2^{-1} = 2.5$
- *d)* $110.011_{2} = 2^2 + 2^1 + 2^{-2} + 2^{-3} = 6.375$
- *e)* $0.101_{2} = 2^{-1} + 2^{-3} = 0.625$

# Bài 5

- *a)* $4\dfrac{1}{2} = 2^2 + 2^{-1} = 100.1_{2}$  
- *b)* $2\dfrac{3}{4} = 2 + \dfrac{1}{2} + \dfrac{1}{4} = 2^1 + 2^{-1} + 2^{-2} = 10.11_{2}$  
- *c)* $1\dfrac{1}{8} = 1 + \dfrac{1}{8} = 2^0 + 2^{-3} = 1.001_{2}$  
- *d)* $\dfrac{5}{16} = \dfrac{1}{4} + \dfrac{1}{16} = 0.0101_{2}$  
- *e)* $5\dfrac{5}{8} = 4 + 1 + \dfrac{1}{2} + \dfrac{1}{8} = 2^2 + 2^0 + 2^{-1} + 2^{-3} = 101.101_{2}$  

# Bài 6

- *a)* $00011_{signed} = 2^1 + 2^0 = 3$
- *b)* $01111_{signed} = 2^3 + 2^2 + 2^1 + 2^0 = 15$
- *c)* $11100_{signed} = - 2^4 + 2^3 + 2^2 = -4$
- *d)* $11010_{signed} = - 2^4 + 2^3 + 2^1 = -6$
- *e)* $00000_{signed} = 0$
- *f)* $10000_{signed} = - 2^4 = -16$

# Bài 7

Với $\sim$ là phép lật bit, ta có

- *a)* $6 = 00000110_{signed}$  
- *b)* $-6 = -(6) = 1 + \sim(00000110)_{signed} = 1 + 11111001_{signed} = 11111010_{signed}$  
- *c)* $-17 = -(17) = 1 + \sim(00010001)_{signed} = 1 + 11101110_{signed} = 11101111_{signed}$  
- *d)* $13 = 00001101_{signed}$  
- *e)* $-1 = -(1) = 1 + \sim(00000001)_{signed} = 1 + 11111110_{signed} = 11111111_{signed}$  

# Bài 8

Trong trường hợp bit ngoài cùng bên trái được dùng để đánh dấu âm/dương cho số, ta có:

- *a)* max = $2^3 - 1 = 7$; min = $-2^3 = -8$
- *b)* max = $2^5 - 1 = 31$; min = $-2^5 = -32$
- *c)* max = $2^7 - 1 = 127$; min = $-2^7 = -128$

# Bài 9

- *a)* $1110_{excess} = 2^2 + 2^1 = 6$
- *b)* $0111_{excess} = - 2^3 + 2^2 + 2^1 + 2^0 = -1$
- *c)* $1000_{excess} = 0$
- *d)* $0010_{excess} = -2^3 + 2^1 = -6$
- *e)* $0000_{excess} = -2^3 = -8$
- *f)* $1001_{excess} = 2^0 = 1$

# Bài 10

- *a)* $5_{10} = 1101_{excess}$
- *b)* $-5_{10} = 0011_{excess}$
- *c)* $3_{10} = 1011_{excess}$
- *d)* $0_{10} = 1000_{excess}$
- *e)* $7_{10} = 1111_{excess}$
- *f)* $-8_{10} = 0000_{excess}$

# Bài 11

### Câu A:

Float 8-bit experession: `01001010`

- Sign: $0 \implies$ the given number is non-negative
- Exponent: $100_{excess} = 0_{10}$.
- Mantissa: $.1010_{2}$
- Denormalize: $.1010_{2} \times 2^0 = .1010_{2} = 0.625_{10}$

So the result is $0.625$

### Câu B:

Float 8-bit expression: `01101101`

- Sign: $0 \implies$ the given number is non-negative
- Exponent: $110_{excess} = 2_{10}$.
- Mantissa: $.1101_{2}$
- Denormalize: $.1101_{2} \times 2^2 = 11.01_{2} = 3.25_{10}$

So the result is $3.25$

### Câu C:

`00111001`$_{float 8bit} = 0.1001_{2} \times 2^{011_{excess}} = 0.1001_{2} \times 2^{-1} = 0.01001_{2} = 0.28125_{10}$

### Câu D:

`11011100`$_{float 8bit} = - 0.1100 \times 2^{101_{excess}} = - 0.1100 \times 2^1 = - 1.100_{2} = - 1.5_{10}$

### Câu E:

`10101011`$_{float 8bit} = - 0.1011 \times 2^{-010_{excess}} = - 0.1011 \times 2^{-2} = - 0.001011 = -0.171875_{10}$
