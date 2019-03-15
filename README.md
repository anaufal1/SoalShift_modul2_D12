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

Pengerjaan : 
