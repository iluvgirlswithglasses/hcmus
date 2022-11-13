---
title: "Assignment 04"
author: "Lưu Nam Đạt"
date: "22127062"
geometry: margin=2cm
output: 
  pdf_document: 
    latex_engine: xelatex
fontsize: 12pt
---

# Question 01

`368A` — Write the content of **Register 6** to **Memory Cell 8A** *(The Memory Cell whose address is 8A)*

`BADE` — If the content of **Register A** matches the content of **Register 0**, then place `DE` to the program counter *(which means the next execution will be located at the Memory Cell DE, aka. `JUPM DE`)*

`803C` — Apply operator `AND` between two values written at **Register 3** and **Register C**, the result is then written to **Register 0**

`40F4` — Copy the content of **Register F** to **Register 4**

# Question 02

## Subtask A

The first instruction: `13B8` — Write the content of **Memory Cell B8** (which is `0F`) to **Register 3**.

So the answer is `0F`

## Subtask B

List of instructions from the beginning to halt:

- `13B8` — Write the content of **Memory Cell B8** (which is `0F`) to **Register 3**.
- `A302` — Rotate the content of **Register 3** 2 bits to the right. The content of **Register 3** originally had the binary value of `0000 1111`, which is now changed to `1100 0011` after circular bit-shifting.
- `33B8` — Write the content of **Register 3** (which has the binary expression of `1100 0011` and the hexadecimal expression of `C3`) to **Memory Cell B8**

So when the program halts, **Memory Cell B8** has the bit pattern of `1100 0011` (or `C3` in hexadecimal representation).

# Question 03

LOAD register 6 with the hexadecimal value 77: `2677`

LOAD register 7 with the contents of memory cell 77: `1777`

JUMP to the instruction at memory location 24 if the contents of register 0
equals the value in register A: `BA24`

ROTATE register 4 three bits to the right: `A403`

AND the contents of registers E and 2 leaving the result in register 1: `81E2`

# Question 04

List of instructions from the beginning to halt:

- Step 1: `2004` — Write (Load) value `04` to **Register 0**

- Step 2: `2101` — Write value `01` to **Register 1**

- Step 3: `4012` — Copy value `01` from **Register 1** to **Register 2**

- Step 4: `5112` — Perform addition operator, which increase the value written in **Register 1** by the value written in **Register 2**

- Step 5: `B10C` — If the value written in **Register 1** matches the value written in **Register 0** (which is `04`), then JUMP to **Memory Cell 0C**, which is equivalent to halting the program.

- Step 6: `B006` — Jump to **Memory Cell 06**, which is equivalent to returning to step 4.

## Subtask A

Since the value in **Register 0** is never changed anywhere other than **Step 1**, its value when program halts is `04`

## Subtask B

Since the program only halts when the condition in **Step 5** is `TRUE`, the bit pattern in **Register 1** when the machine halts is `0000 0100` (which is `04` in hexadecimal representation).

## Subtask C

The value of the **program counter** when program halts is the address of the last instruction, which is `0C` (or `0000 1100` in binary representation)

# Question 05

`2080` — Write the hexadecimal value `80` (which is a `1000 0000` bitmask) to **Register 0**

`11A7` — Write the content of **Memory Cell A7** to **Register 1**

`7101` — Perform `OR` operator on the value of **Register 0** and **Register 1**, the result will override **Register 1**.

`31A7` — Write the result in **Register 1** after bitmasking to **Memory Cell A7**

# Question 06

`203C` — Write the hexadecimal value `3C` (which is a `0011 1100` bitmask) to **Register 0**

`11E0` — Write the content of **Memory Cell E0** to **Register 1**

`8101` — Perform `AND` operator on the value of **Register 0** and **Register 1**, the result after this bitmasking step will override **Register 1**

`A102` — The value loaded in **Register 1** will be shifted 2 bits to the right.

`31E1` — Write the calculated result in **Register 1** to **Memory Cell E1**
