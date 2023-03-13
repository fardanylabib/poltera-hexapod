#include "sensor-warna.h"

bool initSensorWarna(){
  //inisialisasi sensor warna
  pinMode(PIN_SENSOR_WARNA_1, INPUT);
  pinMode(PIN_SENSOR_WARNA_2, INPUT);
  pinMode(PIN_SENSOR_WARNA_3, INPUT);
  pinMode(PIN_SENSOR_WARNA_4, INPUT);
}

bool cekGaris(){
  float nilai=0;
  for(int i=0; i<SAMPLING_COUNT;i++){
    nilai += analogRead(PIN_SENSOR_WARNA_1);
    nilai += analogRead(PIN_SENSOR_WARNA_2);
    nilai += analogRead(PIN_SENSOR_WARNA_3);
    nilai += analogRead(PIN_SENSOR_WARNA_4);
  }
  nilai = nilai/(JUMLAH_SENSOR_WARNA * SAMPLING_COUNT);
  if(nilai > THRESHOLD_PUTIH){
    return true;
  }
  return false;
}

