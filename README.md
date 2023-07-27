# function notifications

 Bu fonksiyonlar, get_next_line.c dosyasında bulunan bir satırı okuyarak ve çağrıldıkça diğer satırları okuyarak dosyanın içeriğini işlemek için kullanılır. Bu işlevlerin birleşimi, dosyanın içeriğini satır satır okuma ve işleme işlevselliğini sağlar.
 
# read_total_line:
 Bu fonksiyon, verilen dosya tanıtıcısından (fd) okuma yaparak line dizisine satır satır veri ekleyen temel işlevdir. Fonksiyon, verilen dosyada EOF'a veya satır sonuna ulaşana kadar okuma işlemini devam ettirir ve her okuma işleminden sonra line dizisine veriyi ekler. Eğer bir hata oluşursa (read fonksiyonu -1 dönerse), hafızayı serbest bırakır ve NULL döndürür.

# read_newline:
 Bu fonksiyon, verilen line dizisindeki veriyi satır sonuna kadar ('\n' karakterine kadar) alarak yeni bir string oluşturan işlevdir. Eğer line dizisi boşsa veya satır sonu yoksa, NULL döndürür.

# before_line_delete:
 Bu fonksiyon, verilen line dizisindeki veriyi satır başından itibaren ('\n' karakterinin hemen sonrasından) kopyalayarak yeni bir string oluşturan işlevdir. Eğer line dizisi boşsa veya satır sonu yoksa, NULL döndürür.

# get_next_line:
 Bu fonksiyon, read_total_line, read_newline ve before_line_delete fonksiyonlarını kullanarak dosyadan satır satır veri okuyan ve her çağrılışta bir sonraki satırı veren ana işlevdir. Fonksiyon, statik bir değişken olan line aracılığıyla dosya tanıtıcısına (fd) göre verileri saklar. Her çağrılışta line dizisi güncellenir ve bir sonraki satırı içerecek şekilde ayarlanır.
