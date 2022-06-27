
int s1=3; // SENSOR CAIXA BAIXA  
int s2=4;// SENSOR CAIXA MÉDIA 
int s3=5; // SENSOR CAIXA ALTA
int k1=6;// SOPRO
int k2=7;// ESTEIRA DESVIO
int ts=800; // TEMPO SOPRO
int td=1500; // TEMPO DESVIO
int sensor1=0;
int sensor2=0;
int sensor3=0;


void setup() {

pinMode(sensor1, INPUT);
pinMode(sensor2, INPUT);
pinMode(sensor3, INPUT);
pinMode(k1, OUTPUT);//SOPRO
pinMode(k2, OUTPUT); //DESVIO
}

void loop() {
  
sensor1 = digitalRead(s1);
sensor2 = digitalRead(s2);
sensor3 = digitalRead(s3);


if  // SOPRADOR CAIXA FORA PADRÃO

((sensor2==1)&&(sensor1==1)&&(sensor3==0)) // SE OS SENSORES DE CAIXA BAIXA E CAIXA MÉDIA FOREM ACIONADOS, O SOPRO ATUA POR 0,8 SEGUNDOS
{
digitalWrite(k1, HIGH); //SOPRO

delay(ts); //TEMPO SOPRO

digitalWrite(k1, LOW); // DESLIGA SOPRO

}

else{
digitalWrite(k1, LOW);
}


if //ACIONA ESTEIRA DESVIO

((sensor1==1)&&(sensor2==1)&&(sensor3==1)) // SE OS TRES SENSORES FOREM ACIONADOS,A ESTEIRA DE DESVIO LIGA POR 1,5 SEGUNDOS
{digitalWrite(k2, HIGH); //DESVIO

delay(td); // TEMPO DESVIO

digitalWrite(k2, LOW); // DESLIGA DESVIO
}
else
{digitalWrite(k2, LOW);
  
  }

}
