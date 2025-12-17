# Section 26: Miscellaneous #1

## Number Systems

* **Binary:** Base 2 $\rightarrow \{0, 1\}$
* **Octal:** Base 8 $\rightarrow \{0, 1, 2, 3, 4, 5, 6, 7\}$
* **Decimal:** Base 10 $\rightarrow \{0, 1, 2, 3, 4, 5, 6, 7, 8, 9\}$
* **Hexadecimal:** Base 16 $\rightarrow \{0, 1, \dots, 9, A, B, C, D, E, F\}$

### Comparison Table

| Decimal | Binary | Octal | Hexadecimal |
| :---: | :---: | :---: | :---: |
| 0 | 0 | 0 | 0 |
| 1 | 1 | 1 | 1 |
| 2 | 10 | 2 | 2 |
| 3 | 11 | 3 | 3 |
| 4 | 100 | 4 | 4 |
| 5 | 101 | 5 | 5 |
| 6 | 110 | 6 | 6 |
| 7 | 111 | 7 | 7 |
| 8 | 1000 | 10 | 8 |
| 9 | 1001 | 11 | 9 |
| 10 | 1010 | 12 | A |
| 11 | 1011 | 13 | B |
| 12 | 1100 | 14 | C |
| 13 | 1101 | 15 | D |
| 14 | 1110 | 16 | E |
| 15 | 1111 | 17 | F |

---

## Conversion of Number Systems

### 1. Decimal to Binary
**Method:** Divide by 2 and take the remainder from end (bottom) to start (top).

**Example:** $50_{10} \rightarrow (?)_{2}$

$$
\begin{array}{r|l}
2 & 50 \\
\hline
2 & 25 \rightarrow 0 \\
\hline
2 & 12 \rightarrow 1 \\
\hline
2 & 6 \rightarrow 0 \\
\hline
2 & 3 \rightarrow 0 \\
\hline
2 & 1 \rightarrow 1 \\
\hline
& 0 \rightarrow 1
\end{array}
$$

**Result:** $50_{10} = 110010_{2}$

-----

### 2. Decimal to Octal
**Method:** Divide by 8 and take the remainder from end to start.

**Example:** $50_{10} \rightarrow (?)_{8}$

$$
\begin{array}{r|l}
8 & 50 \\
\hline
8 & 6 \rightarrow 2 \\
\hline
& 0 \rightarrow 6
\end{array}
$$

**Result:** $50_{10} = 62_{8}$

-----

### 3. Decimal to Hexadecimal
**Method:** Divide by 16 and take the remainder from end to start.

**Example:** $50_{10} \rightarrow (?)_{16}$

$$
\begin{array}{r|l}
16 & 50 \\
\hline
16 & 3 \rightarrow 2 \\
\hline
& 0 \rightarrow 3
\end{array}
$$

**Result:** $50_{10} = 32_{16}$

---

### 4. Binary to Decimal
**Method:** Sum of (Digit $\times$ Base$^{\text{position}}$).

**Example:** $11110_{2} \rightarrow (?)_{10}$

$$
\begin{aligned}
& 1 \times 2^4 + 1 \times 2^3 + 1 \times 2^2 + 1 \times 2^1 + 0 \times 2^0 \\
= & 16 + 8 + 4 + 2 + 0 \\
= & 30
\end{aligned}
$$

**Result:** $11110_{2} = 30_{10}$

-----

### 5. Octal to Decimal
**Example:** $34_{8} \rightarrow (?)_{10}$

$$
\begin{aligned}
& 3 \times 8^1 + 4 \times 8^0 \\
= & 24 + 4 \\
= & 28
\end{aligned}
$$

**Result:** $34_{8} = 28_{10}$

-----

### 6. Hexadecimal to Decimal
**Example:** $1E_{16} \rightarrow (?)_{10}$

$$
\begin{aligned}
& 1 \times 16^1 + E(14) \times 16^0 \\
= & 16 + 14 \\
= & 30
\end{aligned}
$$

**Result:** $1E_{16} = 30_{10}$

-----

### 7. Octal to Binary
**Method:** Convert each octal digit to a 3-bit binary number.

**Example:** $72_{8} \rightarrow (?)_{2}$

* $7 \rightarrow 111$
* $2 \rightarrow 010$

**Result:** $72_{8} = 111010_{2}$

-----

### 8. Binary to Octal
**Method:** Group bits in 3s from right to left (LSB to MSB).

**Example:** $10110110_{2} \rightarrow (?)_{8}$

* $110 \rightarrow 6$
* $110 \rightarrow 6$
* $010 \rightarrow 2$ (added padding zero)

**Result:** $10110110_{2} = 266_{8}$

---

### 9. Hexadecimal to Binary
**Method:** Convert each hex digit to a 4-bit binary number.

**Example:** $3C4_{16} \rightarrow (?)_{2}$

* $3 \rightarrow 0011$
* $C \rightarrow 1100$
* $4 \rightarrow 0100$

**Result:** $3C4_{16} = 1111000100_{2}$ (Leading zeros can be omitted)

-----

### 10. Binary to Hexadecimal
**Method:** Group bits in 4s from right to left.

**Example:** $10011001010_{2} \rightarrow (?)_{16}$

* $1010 \rightarrow A$
* $1100 \rightarrow C$
* $0100 \rightarrow 4$ (added padding zeros)

**Result:** $10011001010_{2} = 4CA_{16}$

---

### 11. Octal to Hexadecimal
**Note:** There is no direct method.
**Strategy:** Octal $\rightarrow$ Binary $\rightarrow$ Hexadecimal.

**Example:** $276_{8} \rightarrow (?)_{16}$

1.  **Octal to Binary:**
    * $2 \rightarrow 010$
    * $7 \rightarrow 111$
    * $6 \rightarrow 110$
    * *Binary:* $010111110_{2}$

2.  **Binary to Hexadecimal:**
    * Group by 4s: `0000` `1011` `1110`
    * $1110 \rightarrow E$
    * $1011 \rightarrow B$
    * $0 \rightarrow 0$

**Result:** $276_{8} = BE_{16}$

-----

### 12. Hexadecimal to Octal
**Note:** No direct method.
**Strategy:** Hexadecimal $\rightarrow$ Binary $\rightarrow$ Octal.

**Example:** $276_{16} \rightarrow (?)_{8}$

1.  **Hexadecimal to Binary:**
    * $2 \rightarrow 0010$
    * $7 \rightarrow 0111$
    * $6 \rightarrow 0110$
    * *Binary:* $001001110110_{2}$

2.  **Binary to Octal:**
    * Group by 3s: `001` `001` `110` `110`
    * $110 \rightarrow 6$
    * $110 \rightarrow 6$
    * $001 \rightarrow 1$
    * $001 \rightarrow 1$

**Result:** $276_{16} = 1166_{8}$
