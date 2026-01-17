//   plover18

/*
   sketch to do the plover18 project

*/

/*
   Editing history

   12/06/25       Version 1.00
                  Start date
*/

char vers[] = "1.00";
char bdate[] = "12/06/25";




void setup() {
  // put your setup code here, to run once:

int j;

for (j=0; j<20; j++) {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(4000);
}

Serial.begin(9600);
Serial.println(" ");
Serial.println("Honolulu Community College - Hon MAG - Fall 2025");
Serial.println(" ");
Serial.println("*** plover18 ***");
Serial.print("Version: ");
Serial.println(vers);
Serial.println("Build date: ");
Serial.println(bdate);
Serial.println(" ");

Serial.println("Done!");

}

void loop() {
  // put your main code here, to run repeatedly:

}
