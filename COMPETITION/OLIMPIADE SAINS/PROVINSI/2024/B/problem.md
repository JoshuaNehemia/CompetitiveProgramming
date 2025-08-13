# Berbagi Banyak Candil

## Deskripsi
Pak Dengklek memiliki sekian ekor bebek. Pak Dengklek memberi tahu Anda bahwa ia memiliki **setidaknya satu ekor bebek** dan **paling banyak** $B$ ekor bebek.  
Pagi hari ini, Pak Dengklek telah membeli $C$ butir jajanan candil untuk dibagikan ke bebek-bebeknya. Pak Dengklek ingin membagikan candil-candil tersebut sebanyak mungkin kepada bebek-bebeknya **selama setiap bebek mendapatkan jumlah candil yang sama rata**.

Setelah membagikan candil-candil tersebut, sisa candil akan dimakan oleh Pak Dengklek. Pak Dengklek memberitahu Anda bahwa banyaknya candil yang akhirnya ia makan adalah $D$.

Tugas Anda adalah **menentukan berapa banyak kemungkinan jumlah bebek** milik Pak Dengklek yang mungkin, berdasarkan informasi tersebut.  
Perhatikan bahwa jawaban bisa saja **0** apabila informasi yang diberikan Pak Dengklek ternyata keliru.

---

## Batasan
- $1 \leq B, C \leq 10^{12}$
- $0 \leq D \leq C$

---

## Subsoal
- **(50 poin)** Hanya berisi kasus uji berikut:  
  `25 8420 20`
- **(50 poin)** Tidak ada batasan tambahan.

---

## Masukan
Masukan diberikan dalam format berikut:
```

B C D

```

## Keluaran
Keluarkan sebuah baris berisi sebuah bilangan bulat yang menyatakan banyaknya kemungkinan jumlah bebek berbeda milik Pak Dengklek yang mungkin.

---

## Contoh Masukan 1
```

100 13 3

```

## Contoh Keluaran 1
```

2

```

**Penjelasan:**  
Hanya **2** dari **100** kemungkinan jumlah bebek berbeda milik Pak Dengklek yang mungkin, yaitu sebanyak **5** atau **10** ekor bebek.

---

## Contoh Masukan 2
```

9 9 0

```

## Contoh Keluaran 2
```

3

```

**Penjelasan:**  
Ada **3** kemungkinan yang mungkin, yaitu sebanyak **1**, **3**, atau **9** ekor bebek.

---

## Contoh Masukan 3
```

77 42 42

```

## Contoh Keluaran 3
```

35

```

**Penjelasan:**  
Ada **35** kemungkinan yang mungkin, yaitu sebanyak **43**, **44**, ..., hingga **77** ekor bebek.

---

## Contoh Masukan 4
```

7 42 42

```

## Contoh Keluaran 4
```

0

```

**Penjelasan:**  
Berdasarkan penjelasan contoh ketiga, tidak ada kemungkinan yang mungkin.
