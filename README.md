# get_next_line

• get_next_line() işlevinize tekrarlanan çağrılar (örneğin, bir döngü kullanarak) izin vermelidir
dosya tanıtıcı tarafından işaret edilen metin dosyasını her seferinde bir satır okursunuz.

• İşleviniz okunan satırı döndürmelidir.
Okunacak başka bir şey yoksa veya bir hata oluştuysa, NULL döndürmelidir.

• Hem bir dosyayı okurken hem de okurken işlevinizin beklendiği gibi çalıştığından emin olun.
standart girişten okuma.

• Lütfen döndürülen satırın sonlandırıcı \n karakterini içermesi gerektiğini unutmayın,
dosyanın sonuna ulaşılmış olması ve bir \n karakteri ile bitmemesi dışında.

• Başlık dosyanız get_next_line.h en azından şu satırın prototipini içermelidir:
get_next_line() işlevi.

• İhtiyacınız olan tüm yardımcı işlevleri get_next_line_utils.c dosyasına ekleyin.

(i) Statik değişkenin ne olduğunu bilmek iyi bir başlangıç ​​olacaktır.

• get_next_line() içindeki dosyaları okumanız gerekeceğinden, bu seçeneği
derleyici çağrısı: -D BUFFER_SIZE=n
Read() için arabellek boyutunu tanımlayacaktır.
Arabellek boyutu değeri, emsal değerlendiricileriniz ve Moulinette tarafından değiştirilecektir.
Kodunuzu test etmek için.

!!! Bu projeyi -D ile ve olmadan derleyebilmeliyiz. Normal bayraklara ek olarak BUFFER_SIZE bayrağı.
seçebilirsiniz seçtiğiniz varsayılan değer.

• Kodunuzu aşağıdaki gibi derleyeceksiniz (örnek olarak 42 arabellek boyutu kullanılmıştır):
cc -Duvar -Wextra -Werror -D BUFFER_SIZE=42 <dosya>.c

• Dosya şunu gösteriyorsa, get_next_line() öğesinin tanımsız bir davranışa sahip olduğunu düşünüyoruz.
dosya tanıtıcı tarafından son aramadan bu yana değişti, oysa read() dosyaya ulaşmadı
dosyanın sonu.

• Okuma sırasında get_next_line() öğesinin tanımsız bir davranışa sahip olduğunu da düşünüyoruz.
bir ikili dosya. Ancak, şu durumlarda bu davranışı işlemek için mantıklı bir yol uygulayabilirsiniz:
istediğiniz.

(A) BUFFER_SIZE değeri 9999 ise, işleviniz hala çalışıyor mu? Eğer 1 mi? 10000000? Neden biliyor musun?

(i) get_next_line() işlevi her açıldığında mümkün olduğunca az okumaya çalışın
isminde. Yeni bir satırla karşılaşırsanız, mevcut satırı döndürmeniz gerekir.
Tüm dosyayı okuyup ardından her satırı işlemeyin.

#Yasaklı
• Bu projede libft'inizi kullanmanıza izin verilmiyor.
• lseek() yasaklanmıştır.
• Global değişkenler yasaktır.


# Bonus part

u proje basittir ve karmaşık bonuslara izin vermez. Ancak güveniyoruz
yaratıcılığınız Zorunlu kısmı tamamladıysanız, bu bonus kısmı deneyin.
İşte bonus parça gereksinimleri:

• Sadece bir statik değişken kullanarak get_next_line() geliştirin.

• get_next_line() cihazınız aynı anda birden fazla dosya tanımlayıcıyı yönetebilir.
Örneğin, dosya tanımlayıcıları 3, 4 ve 5'ten okuyabiliyorsanız,
her birinin okuma dizisini kaybetmeden arama başına farklı bir fd'den okuyabilir
dosya tanımlayıcı veya başka bir fd'den bir satır döndürme.
Bu, fd 3'ten okumak için get_next_line() işlevini çağırabilmeniz gerektiği anlamına gelir, o zaman
fd 4, sonra 5, sonra bir kez daha 3, bir kez daha 4 ve böyle devam eder.

Bonus parça dosyalarına _bonus.[c\h] son ​​ekini ekleyin.
Bu, zorunlu parça dosyalarına ek olarak aşağıdaki 3 dosyayı teslim edeceğiniz anlamına gelir:
Dosyalar:

• get_next_line_bonus.c
• get_next_line_bonus.h
• get_next_line_utils_bonus.c

### Translate 2

İşlev adı: get_next_line
Prototip: char *get_next_line(int fd);
Dosyalardan okuma yapmak için kullanılan bir dosya tanımlayıcısı (file descriptor) alarak bir satır döndüren bir işlev.
• Tekrarlayan çağrılar (örneğin, bir döngü kullanarak) get_next_line() işlevinizi, dosya tanımlayıcısıyla işaret edilen metin dosyasını bir satır at a time okuyabilecek şekilde ayarlamalıdır.
• İşleviniz okunan satırı döndürmelidir.
Okunacak başka bir şey yoksa veya bir hata oluştuysa, NULL döndürmelidir.
• Lütfen dikkat edin, döndürülen satır, dosya sonuna ulaşılmış ve \n karakteri ile bitmiyorsa bile \n karakterini içermelidir.
• get_next_line.h başlık dosyanız en azından get_next_line() işlevinin prototipini içermelidir.
• get_next_line_utils.c dosyasında ihtiyaç duyduğunuz yardımcı işlevleri ekleyin.
İyi bir başlangıç noktası, bir statik değişkenin ne olduğunu bilmektir.

Get Next Line Bir dosya tanımlayıcısından bir satır okumak çok zahmetli
• get_next_line() işlevinizde dosyaları okumanız gerektiğinden, derleyici çağrınıza bu seçeneği ekleyin: -D BUFFER_SIZE=n
Bu, read() için tampon boyutunu tanımlayacaktır.
Tampon boyutu değeri, akran değerlendirenleriniz ve Moulinette tarafından değiştirilecektir, böylece kodunuzu test edebilecekler.
Bu projeyi -D BUFFER_SIZE bayrağı olmadan veya ile birlikte derleyebilmeliyiz.
Varsayılan değeri isteğinize göre seçebilirsiniz.
• Kodunuzu aşağıdaki gibi derleyeceksiniz (42 tampon boyutu bir örnek olarak kullanılmıştır):
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
• get_next_line() işlevinin, read() dosyanın sonuna ulaşmadığı sürece, dosya tanımlayıcısı tarafından gösterilen dosyanın, son çağrıdan bu yana değiştiği durumlarda tanımsız bir davranışa sahip olduğunu düşünüyoruz.
• Ayrıca, get_next_line() işlevinin bir ikili dosyayı okurken tanımsız bir davranışa sahip olduğunu kabul ediyoruz. Ancak, isterseniz bu davranışı ele almanın mantıklı bir yolunu uygulayabilirsiniz.
BUFFER_SIZE değeri 9999 olduğunda, fonksiyon hala çalışıyor mu?
1 olduğunda? 10000000 olduğunda? Neden olduğunu biliyor musunuz?
get_next_line() her çağrıldığında mümkün olduğunca az miktarda okuma yapmaya çalışın. Yeni bir satıra rastlarsanız, mevcut satırı döndürmelisiniz.
Tüm dosyayı okumayın ve ardından her satırı işlemeyin.

Yasaklı
• Bu projede libft'nizi kullanmanıza izin verilmez.
• lseek() yasaktır.
• Global değişkenler yasaktır.

Bonus Bölüm
Bu proje doğrudan ilerici bir projedir ve karmaşık bonuslara izin vermez. Bununla birlikte, yaratıcılığınıza güveniyoruz. Zorunlu kısmı tamamladıysanız, bonus kısmına bir deneyin.
İşte bonus kısmının gereksinimleri:
• get_next_line() işlevini sadece bir adet statik değişken kullanarak geliştirin.
• get_next_line() aynı anda birden fazla dosya tanımlayıcısını yönetebilmelidir.
Örneğin, 3, 4 ve 5 numaralı dosya tanımlayıcılarından okuma yapabiliyorsanız, her çağrıda farklı bir dosya tanımlayıcısından okuyabilmelisiniz ve her bir dosya tanımlayıcısının okuma işlemi kaybolmamalı veya başka bir dosya tanımlayıcısından bir satır döndürmemelidir.
Bu, get_next_line() işlevini 3 numaralı dosya tanımlayıcısından okumak için çağırabilmeli, ardından 4, ardından 5, ardından tekrar 3, tekrar 4 ve benzeri şekilde çağırabilmelidir.
Bonus kısmı dosyalarına _bonus.[c\h] eki ekleyin.
Bu, zorunlu kısım dosyalarına ek olarak, aşağıdaki 3 dosyayı teslim edeceğiniz anlamına gelir:
• get_next_line_bonus.c
• get_next_line_bonus.h
• get_next_line_utils_bonus.c
