// Definicija pinova za segmente (A, B, C, D, E, F, G)
int A = 32;
int B = 33;
int C = 25;
int D = 26;
int E = 27;
int F = 14;
int G = 12;

void setup() {
  // Postavi sve segmente kao outpute - izlaze
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}

void loop() {
  prikaziBroj(0);  // pozovi funkiju i ispisi broj 
  delay(500);
  prikaziBroj(1); 
  delay(500);
  prikaziBroj(2); 
  delay(500);
}


// Funkcija za prikaz brojeva od 0 do 9
void prikaziBroj(int broj) {
  if (broj == 0) {
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, HIGH);
  }

  if (broj == 1) {
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
  }

  if (broj == 2) {
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(G, LOW);
    digitalWrite(E, LOW);
    digitalWrite(D, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(F, HIGH);
  }

  if (broj == 3) {
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(G, LOW);
    digitalWrite(E, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(C, LOW);
    digitalWrite(F, HIGH);
  }

  if (broj == 4) {
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(A, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
  }

  if (broj == 5) {
    digitalWrite(A, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(E, HIGH);
  }

  if (broj == 5) {
    digitalWrite(A, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(E, HIGH);
  }
  
  if (broj == 6) {
    digitalWrite(A, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
    digitalWrite(E, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    digitalWrite(B, HIGH);
  }
  
  if (broj == 7) {
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
  }
  
  if (broj == 8) {
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
  }
  
  if (broj == 9) {
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
    digitalWrite(E, HIGH);
  }
}
