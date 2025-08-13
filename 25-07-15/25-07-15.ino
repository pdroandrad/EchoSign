#include <Servo.h>

// Criando objetos Servo para cada dedo
Servo servoMindinho; //amarelo
Servo servoAnelar; // azul
Servo servoMedio; // verde escuro
Servo servoIndicador; // roxo
Servo servoPolegar; // laranja
Servo servoPulso; // branco

// void a(){
//   servoMindinho.write(180);
//   servoAnelar.write(180);
//   servoMedio.write(180);
//   servoIndicador.write(180);
//   servoPolegar.write(180);
//   servoPulso.write(180);
// }

void setup() {
// Anexando os servos aos pinos definidos
  servoMindinho.attach(5);
  servoMindinho.write(0);
  servoAnelar.attach(6);
  servoMedio.attach(7);
  servoIndicador.attach(8);
  servoPolegar.attach(9);
  servoPulso.attach(10);
  delay(1000);
}

void loop() {
  // Mindinho
  servoMindinho.write(-90);
  // delay(1000);
  // servoMindinho.write(-90);
  // delay(1000);
  // servoMindinho.write(-180);
  // delay(1000);
    
  // // Anelar
  // servoAnelar.write(180);
  // delay(1000);
  // servoAnelar.write(0);
  // delay(1000);

  // // Médio
  // servoMedio.write(180);
  // delay(1000);
  // servoMedio.write(0);
  // delay(1000);

  // // Indicador
  // servoIndicador.write(180);
  // delay(1000);
  // servoIndicador.write(0);
  // delay(1000);

  // // Polegar
  // servoPolegar.write(180);
  // delay(1000);
  // servoPolegar.write(0);
  // delay(1000);

  // // Pulso
  // servoPulso.write(180);
  // delay(1000);
  // servoPulso.write(0);
  // delay(5000);
}
