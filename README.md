# SoalShift_modul2_D12

05111740000095 - Shawn Timothy

05111740000138 - Ahmad Naufal H

Penjelasan


*Soal1*


Elen mempunyai pekerjaan pada studio sebagai fotografer. Suatu hari ada seorang klien yang bernama Kusuma yang meminta untuk mengubah nama file yang memiliki ekstensi .png menjadi “[namafile]_grey.png”. Karena jumlah file yang diberikan Kusuma tidak manusiawi, maka Elen meminta bantuan kalian untuk membuat suatu program C yang dapat mengubah nama secara otomatis dan diletakkan pada direktori /home/[user]/modul2/gambar.
Catatan : Tidak boleh menggunakan crontab.

Pengerjaan : dengan template daemon dari Modul 2, lalu isi main program c dengan pointer yang menunjuk ke string yang akan di gunakan untuk mencari file berekstensi ".png", lalu menggunakan strcpy untuk mengcopy string yang bertuliskan direktori ke arah folder soal1 (path awal) dan direktori tempat file png yang telah di move (path akhir). Dengan fungsi STRSTR dari C untuk membongkar pasangan pasangan string sehingga bisa di dapat kan sebuah string yang bertuliskan ".png". Lalu merename nya menjadi "[namafile]_grey.png" dan memindahkannya ke path akhir. Lalu di sleep 2 detik agar berjalan setiap 2 detik.



*Soal2*


Pada suatu hari Kusuma dicampakkan oleh Elen karena Elen dimenangkan oleh orang lain. Semua kenangan tentang Elen berada pada file bernama “elen.ku” pada direktori “hatiku”. Karena sedih berkepanjangan, tugas kalian sebagai teman Kusuma adalah membantunya untuk menghapus semua kenangan tentang Elen dengan membuat program C yang bisa mendeteksi owner dan group dan menghapus file “elen.ku” setiap 3 detik dengan syarat ketika owner dan grupnya menjadi “www-data”. Ternyata kamu memiliki kendala karena permission pada file “elen.ku”. Jadi, ubahlah permissionnya menjadi 777. Setelah kenangan tentang Elen terhapus, maka Kusuma bisa move on.
Catatan: Tidak boleh menggunakan crontab

Pengerjaan : dengan template daemon dari Modul2, dan include library pwd.h dan grp.h , lalu mencari file elen.ku di direktori /modul2/soal2/hatiku/. Menggunakan path dari c, dengan struct, lalu gunakan 2 pointer *pw untuk pointer owner, *gr untuk pointer group. Jika ownernya "www-data" dan groupnya "www-data" makan hapus file elen.ku dengan sleep 3 detik.


*Soal3*

Diberikan file campur2.zip. Di dalam file tersebut terdapat folder “campur2”. 
Buatlah program C yang dapat :
i)  mengekstrak file zip tersebut.
ii) menyimpan daftar file dari folder “campur2” yang memiliki ekstensi .txt ke dalam file daftar.txt. 
Catatan:  
Gunakan fork dan exec.
Gunakan minimal 3 proses yang diakhiri dengan exec.
Gunakan pipe
Pastikan file daftar.txt dapat diakses dari text editor

Pengerjaan : Pertama unzip file campur2.zip dengan exec, lalu buat file daftar.txt. Lalu menggunakan command ls di direktori campur2 dan pointer z ke File dengan fungsi fdopen r = read, dan w = write dengan pointer daftar. Fgets untuk mendapatkan string ke variable buffer, lalu cari string dengan strstr dan strlen buffer-6 agar mencari extensi .txt di 6 char terakhir dari belakang. Karena tadi pointer daftar telah di fopen dengan command write maka yang tertampilkan akan di input ke file daftar.txt.

*Soal4*

Dalam direktori /home/[user]/Documents/makanan terdapat file makan_enak.txt yang berisikan daftar makanan terkenal di Surabaya. Elen sedang melakukan diet dan seringkali tergiur untuk membaca isi makan_enak.txt karena ngidam makanan enak. Sebagai teman yang baik, Anda membantu Elen dengan membuat program C yang berjalan setiap 5 detik untuk memeriksa apakah file makan_enak.txt pernah dibuka setidaknya 30 detik yang lalu (rentang 0 - 30 detik).
Jika file itu pernah dibuka, program Anda akan membuat 1 file makan_sehat#.txt di direktori /home/[user]/Documents/makanan dengan '#' berisi bilangan bulat dari 1 sampai tak hingga untuk mengingatkan Elen agar berdiet.

Contoh:
File makan_enak.txt terakhir dibuka pada detik ke-1
Pada detik ke-10 terdapat file makan_sehat1.txt dan makan_sehat2.txt

Catatan: 
dilarang menggunakan crontab
Contoh nama file : makan_sehat1.txt, makan_sehat2.txt, dst

