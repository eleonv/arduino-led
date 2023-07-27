# Arduino-led
Proyecto arduino para encender un led desde un formulario creado con visual studio

# Arduino
```c
#define PIN_LED 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("Hola Mundo");
  //delay(1000);

  if (Serial.available()>0){
    int leerCaracter  = Serial.read();

    if(leerCaracter=='E') {
      digitalWrite(PIN_LED, HIGH);
    } else if(leerCaracter=='A') {
      digitalWrite(PIN_LED, LOW);  
    }
  }
}
```

# Visual studio
```c#
namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        System.IO.Ports.SerialPort arduino;

        public Form1()
        {
            InitializeComponent();
            arduino = new System.IO.Ports.SerialPort();
            arduino.PortName = "COM3";
            arduino.BaudRate = 9600;
            arduino.Open();
        }

        private void buttonEncender_Click(object sender, EventArgs e)
        {
            arduino.Write("E");
        }

        private void buttonApagar_Click(object sender, EventArgs e)
        {
            arduino.Write("A");
        }


    }
}
```
