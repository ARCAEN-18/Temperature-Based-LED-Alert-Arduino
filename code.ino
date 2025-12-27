#include &lt;DHT11.h&gt;

#define DHTPIN A1 // DHT11 data pin
#define LED1 2
#define LED2 3
#define LED3 4

DHT11 dht11(DHTPIN);

void setup() {

pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
Serial.begin(9600);
}

void loop() {
int temperature = 0;
int humidity = 0;

int result = dht11.readTemperatureHumidity(temperature, humidity);

if (result != 0) {

Serial.print(&quot;temp: &quot;);
Serial.print(temperature);
Serial.print(&quot;°C &quot;);
Serial.print(&quot;Humidity: &quot;);
Serial.print(humidity);
Serial.println(&quot;%&quot;);

if (temperature &gt; 35 &amp;&amp; temperature &lt;= 45 &amp;&amp; humidity &gt;
50) {
digitalWrite(LED1, HIGH);
digitalWrite(LED2, HIGH);
digitalWrite(LED3, LOW);
}
else if (temperature &gt;= 30 &amp;&amp; temperature &lt;= 34 &amp;&amp; humidity
&gt; 30) {
digitalWrite(LED1, HIGH);
digitalWrite(LED2, LOW);
digitalWrite(LED3, LOW);
}
else if (temperature &gt; 20 &amp;&amp; humidity &gt; 20) {
digitalWrite(LED1, HIGH);
digitalWrite(LED2, HIGH);
digitalWrite(LED3, HIGH);
}
else {
digitalWrite(LED1, LOW);
digitalWrite(LED2, LOW);
digitalWrite(LED3, LOW);} }
else {
Serial.println(DHT11::getErrorString(result));

}
delay(2000);}
