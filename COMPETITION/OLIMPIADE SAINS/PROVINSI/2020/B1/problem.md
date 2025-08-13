# Lomba Lari Bebek

## Deskripsi
Pak Dengklek mengadakan lomba lari jauh untuk bebek-bebeknya. Rute lomba lari Pak Dengklek merupakan **garis lurus**.  
Di rute lomba lari tersebut, terdapat $N$ patok, dinomori **1** sampai **N**.  

- Patok ke-$i$ berjarak $A_i$ kilometer dari patok sebelumnya.  
- Patok pertama berjarak $A_1$ kilometer dari **garis mulai**.

Ada $K$ bebek yang mengikuti lomba lari, dinomori **1** sampai **K**.  
Bebek ke-$i$ dapat berlari sejauh $B_i$ kilometer. Semua bebek mulai berlari dari garis mulai.  

Tugas Anda adalah **menentukan nomor patok terjauh yang bisa dilewati oleh setiap bebek**.


## Format Masukan
Masukan diberikan dalam format berikut:
```

N K
A1 A2 … AN
B1 B2 … BK

```


## Format Keluaran
Keluarkan $K$ baris, yang masing-masing terdiri dari satu bilangan.  
Bilangan pada baris ke-$i$ menyatakan **nomor patok terakhir** yang dicapai atau dilewati bebek ke-$i$.


## Contoh Masukan
```

5 5
1 2 1 2 1
2 3 5 6 10

```

## Contoh Keluaran
```

1
2
3
4
5

```


## Penjelasan Contoh
- Patok terakhir yang dilalui **bebek pertama** adalah patok pertama → keluaran pertama **1**.  
- Patok terakhir yang dilalui **bebek keempat** adalah patok keempat → keluaran keempat **4**.


## Subsoal
### Subsoal 1 (50 poin)
- $1 \leq N \leq 100$  
- $1 \leq K \leq 100$  
- $1 \leq A_i \leq 100$  
- $1 \leq B_i \leq 1000$

### Subsoal 2 (50 poin)
- $1 \leq N \leq 10^5$  
- $1 \leq K \leq 10^5$  
- $1 \leq A_i \leq 10000$  
- $1 \leq B_i \leq 10000$
