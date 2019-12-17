//led e botão star wars
int ledstar = 13;
int botaostar = 2;

//led e botão tema do mario
int botaomario = 12;
int ledmario = 11;

//frequência da melodia do tema do mario bros
int melodiamario[] = {660,660,660,510,660,770,380,510,380,320,440,
480,450,430,380,660,760,860,700,760,660,520,580,480,510,380,320,
440,480,450,430,380,660,760,860,700,760,660,520,580,480,500,760,
720,680,620,650,380,430,500,430,500,570,500,760,720,680,620,650,
1020,1020,1020,380,500,760,720,680,620,650,380,430,500,430,500,
570,585,550,500,380,500,500,500,500,760,720,680,620,650,380,430,
500,430,500,570,500,760,720,680,620,650,1020,1020,1020,380,500,760,
720,680,620,650,380,430,500,430,500,570,585,550,500,380,500,500,500,
500,500,500,500,580,660,500,430,380,500,500,500,500,580,660,870,760,
500,500,500,500,580,660,500,430,380,660,660,660,510,660,770,380};

//duração de cada nota
int duracaonotasmario[] = {100,100,100,100,100,100,100,100,100,100,100,
80,100,100,100,80,50,100,80,50,80,80,80,80,100,100,100,100,80,100,100,
100,80,50,100,80,50,80,80,80,80,100,100,100,100,150,150,100,100,100,100,
100,100,100,100,100,100,150,200,80,80,80,100,100,100,100,100,150,150,100,
100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,150,150,
100,100,100,100,100,100,100,100,100,100,150,200,80,80,80,100,100,100,100,
100,150,150,100,100,100,100,100,100,100,100,100,100,100,100,100,60,80,60,
80,80,80,80,80,80,60,80,60,80,80,80,80,80,60,80,60,80,80,80,80,80,80,100,
100,100,100,100,100,100};

//buzzer
int buzzer = 9;
 
//frequências da marcha imperial - star wars 
#define c 261
#define d 294
#define e 329
#define f 349
#define g 391
#define gS 415
#define a 440
#define aS 455
#define b 466
#define cH 523
#define cSH 554
#define dH 587
#define dSH 622
#define eH 659
#define fH 698
#define fSH 740
#define gH 784
#define gSH 830
#define aH 880
 
void setup() {

  pinMode(ledstar, OUTPUT);
  pinMode(ledmario, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(botaostar, INPUT);
  pinMode(botaomario, INPUT);
}
 
void loop() {

    int estadostar = digitalRead(botaostar);
    int estadomario = digitalRead(botaomario);

    if (estadostar == HIGH) {
        marchaimperial();
    } else if (estadomario == HIGH) {
        mariobros();
    }
}
 
void beep (unsigned char led, unsigned char buzzer, int frequencia, long tempo) {

    digitalWrite(led, HIGH);

    long pausa = (long)(1000000/frequencia);

    long loop = (long)((tempo*1000)/(pausa*2));
    
    for (int i = 0; i < loop; i++) {
        digitalWrite(buzzer,HIGH);
        delayMicroseconds(pausa);
        digitalWrite(buzzer,LOW);
        delayMicroseconds(pausa);
    }
 
    digitalWrite(led, LOW);
 
    delay(20);
}

//função para tocar a marcha imperial - star wars
void marchaimperial() {

    beep(ledstar, buzzer, a, 500);
    beep(ledstar, buzzer, a, 500);
    beep(ledstar, buzzer, a, 500);
    beep(ledstar, buzzer, f, 350);
    beep(ledstar, buzzer, cH, 150);
 
    beep(ledstar, buzzer, a, 500);
    beep(ledstar, buzzer, f, 350);
    beep(ledstar, buzzer, cH, 150);
    beep(ledstar, buzzer, a, 1000);
 
    beep(ledstar, buzzer, eH, 500);
    beep(ledstar, buzzer, eH, 500);
    beep(ledstar, buzzer, eH, 500);
    beep(ledstar, buzzer, fH, 350);
    beep(ledstar, buzzer, cH, 150);
 
    beep(ledstar, buzzer, gS, 500);
    beep(ledstar, buzzer, f, 350);
    beep(ledstar, buzzer, cH, 150);
    beep(ledstar, buzzer, a, 1000);
 
    beep(ledstar, buzzer, aH, 500);
    beep(ledstar, buzzer, a, 350);
    beep(ledstar, buzzer, a, 150);
    beep(ledstar, buzzer, aH, 500);
    beep(ledstar, buzzer, gSH, 250);
    beep(ledstar, buzzer, gH, 250);
 
    beep(ledstar, buzzer, fSH, 125);
    beep(ledstar, buzzer, fH, 125);
    beep(ledstar, buzzer, fSH, 250);
    delay(250);
    beep(ledstar, buzzer, aS, 250);
    beep(ledstar, buzzer, dSH, 500);
    beep(ledstar, buzzer, dH, 250);
    beep(ledstar, buzzer, cSH, 250);
 
    beep(ledstar, buzzer, cH, 125);
    beep(ledstar, buzzer, b, 125);
    beep(ledstar, buzzer, cH, 250);
    delay(250);
    beep(ledstar, buzzer, f, 125);
    beep(ledstar, buzzer, gS, 500);
    beep(ledstar, buzzer, f, 375);
    beep(ledstar, buzzer, a, 125);
 
    beep(ledstar, buzzer, cH, 500);
    beep(ledstar, buzzer, a, 375);
    beep(ledstar, buzzer, cH, 125);
    beep(ledstar, buzzer, eH, 1000);
 
    beep(ledstar, buzzer, aH, 500);
    beep(ledstar, buzzer, a, 350);
    beep(ledstar, buzzer, a, 150);
    beep(ledstar, buzzer, aH, 500);
    beep(ledstar, buzzer, gSH, 250);
    beep(ledstar, buzzer, gH, 250);
 
    beep(ledstar, buzzer, fSH, 125);
    beep(ledstar, buzzer, fH, 125);
    beep(ledstar, buzzer, fSH, 250);
    delay(250);
    beep(ledstar, buzzer, aS, 250);
    beep(ledstar, buzzer, dSH, 500);
    beep(ledstar, buzzer, dH, 250);
    beep(ledstar, buzzer, cSH, 250);
 
    beep(ledstar, buzzer, cH, 125);
    beep(ledstar, buzzer, b, 125);
    beep(ledstar, buzzer, cH, 250);
    delay(250);
    beep(ledstar, buzzer, f, 250);
    beep(ledstar, buzzer, gS, 500);
    beep(ledstar, buzzer, f, 375);
    beep(ledstar, buzzer, cH, 125);
 
    beep(ledstar, buzzer, a, 500);
    beep(ledstar, buzzer, f, 375);
    beep(ledstar, buzzer, c, 125);
    beep(ledstar, buzzer, a, 1000);
}

void mariobros() {
  
    int pausaentrenotasmario[] ={150,300,300,100,300,550,575,450,400,500,300,
    330,150,300,200,200,150,300,150,350,300,150,150,500,450,400,500,300,330,
    150,300,200,200,150,300,150,350,300,150,150,500,300,100,150,150,300,300,
    150,150,300,150,100,220,300,100,150,150,300,300,300,150,300,300,300,100,
    150,150,300,300,150,150,300,150,100,420,450,420,360,300,300,150,300,300,
    100,150,150,300,300,150,150,300,150,100,220,300,100,150,150,300,300,300,
    150,300,300,300,100,150,150,300,300,150,150,300,150,100,420,450,420,360,
    300,300,150,300,150,300,350,150,350,150,300,150,600,150,300,350,150,150,
    550,325,600,150,300,350,150,350,150,300,150,600,150,300,300,100,300,550,
    575};

    for (int nota = 0; nota < 156; nota++) {
        int duracaodanota = duracaonotasmario[nota];
        beep(ledmario, buzzer, melodiamario[nota],duracaodanota); 
        delay(pausaentrenotasmario[nota]);
    }
 
    noTone(buzzer);
}