#include "sonar.h"

float getJarakSonar(int address){
  address = address | SONAR_I2C_ADDRESS_MASK;
  //baca nilai sensor berdasarkan addressnya
  float jarak=100;//misal hasilnya 100
  return jarak;
}

float bacaSemua(float* arrProsesJarak, float* arrJarak, int* arrStatus, float threshold){

  for(int sampel=0; sampel<JUMLAH_SAMPEL_JARAK;sampel++){
    for(int i=0; i<JUMLAH_SENSOR;i++){
      if(sampel == 0){
        arrProsesJarak[i] = getJarakSonar(i);
      }else{
        arrProsesJarak[i] += getJarakSonar(i);
      }
    }
  }
  //ambil rata-rata
  for(int i=0; i<JUMLAH_SENSOR;i++){
    float rataRataJarak = arrProsesJarak[i]/JUMLAH_SAMPEL_JARAK;
    if(rataRataJarak < threshold){
      
    }
  }
}

float bacaKanan(float* arrJarak, int* arrStatus){

}

float bacaKiri(float* arrJarak, int* arrStatus){
  
}


float bacaDepan(float* arrJarak, int* arrStatus){
  
}

float bacaBelakang(float* arrJarak, int* arrStatus){
  
}