bool boton = false;



void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  
  if (digitalRead(2)==LOW)
  { boton = !boton;
   delay(200);
  }
  if (boton == false){ 
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW); 
  }
  if (digitalRead(2)==LOW)
  { boton = !boton;
   delay(1000);
  }
  digitalWrite(13, HIGH);
  delay(500); 
  digitalWrite(13, LOW);
  delay(500); 
  if (digitalRead(2)==LOW)
  { boton = !boton;
   delay(1000);
  }
  digitalWrite(12, HIGH);
  delay(500); 
  digitalWrite(12, LOW);
  delay(500); 
  if (digitalRead(2)==LOW)
  { boton = !boton;
   delay(1000);
  }
  digitalWrite(11, HIGH);
  delay(500); 
  digitalWrite(11, LOW);
  delay(500); 
  if (digitalRead(2)==LOW)
  { boton = !boton;
   delay(1000);
  }
  digitalWrite(10, HIGH);
  delay(500); 
  digitalWrite(10, LOW);
  delay(500); 
  if (digitalRead(2)==LOW)
  { boton = !boton;
   delay(1000);
  }
  digitalWrite(9, HIGH);
  delay(500); 
  digitalWrite(9, LOW);
  delay(500); 
  if (digitalRead(2)==LOW)
  { boton = !boton;
   delay(1000);
  }
  digitalWrite(8, HIGH);
  delay(500); 
  digitalWrite(8, LOW);
  delay(500); 
  if (digitalRead(2)==LOW)
  { boton = !boton;
   delay(1000);
  } 
  digitalWrite(7, HIGH);
  delay(500); 
  digitalWrite(7, LOW);
  delay(500); 
  if (digitalRead(2)==LOW)
  { boton = !boton;
   delay(1000);
  }
  digitalWrite(6, HIGH);
  delay(500); 
  digitalWrite(6, LOW);
  delay(500); 
  if (digitalRead(2)==LOW)
  { boton = !boton;
   delay(1000);
  }
  digitalWrite(5, HIGH);
  delay(500); 
  digitalWrite(5, LOW);
  delay(500); 
  if (digitalRead(2)==LOW)
  { boton = !boton;
   delay(1000);
  }
  digitalWrite(4, HIGH);
  delay(500); 
  if (digitalRead(2)==LOW)
  { boton = !boton;
   delay(1000);
  }
  digitalWrite(4, LOW);
  delay(500); 

Serial.println(boton);
}
}