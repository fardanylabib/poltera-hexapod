#define DEKAT 0
#define SEDANG 1
#define JAUH 2
#define JUMLAH_SENSOR 8
#define SONAR_I2C_ADDRESS_MASK 0x80
#define JUMLAH_SAMPEL_JARAK 5
#define THRESHOLD_DEKAT 300
#define THRESHOLD_SEDANG 500
#define THRESHOLD_JAUH 800

float prosesJarak[JUMLAH_SENSOR];
float jarak[JUMLAH_SENSOR];
int status[JUMLAH_SENSOR];