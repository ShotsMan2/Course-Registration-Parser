# Course Registration String Parser

This project implements a text processing algorithm in C that analyzes a specific student course registration format based on Lab 7 requirements.

## ⚙️ Logic

The system accepts a single string where course names are joined by the `#` character.

1.  **Count Courses:** Iterates through the string counting delimiters to find the total number of items.
2.  **Find Longest:** Tracks the start index and length of the longest substring between delimiters.
3.  **Format Output:** Replaces `#` with newlines to print a clean list.

## 🚀 Example Output

**Input:** `veriyapilari#algoritma#programlama#veritabani`

```text
--- Analiz Sonuclari ---
Toplam ders sayisi: 4
En uzun ders: veriyapilari (12 karakter)

--- Ders Listesi ---
veriyapilari
algoritma
programlama
veritabani
