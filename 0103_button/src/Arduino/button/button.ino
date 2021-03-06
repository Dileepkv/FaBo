//
// FaBo Brick Sample
//
// #103 Button Brick
//

#define buttonPin A0 // ボタンピン
#define ledPin 2     // LEDピン

// ボタンの押下状況取得用
int buttonState = 0;

void setup() {
  // ボタンピンを入力用に設定
  pinMode(buttonPin, INPUT); 
  // LEDピンを出力用に設定
  pinMode(ledPin, OUTPUT);         
}

void loop(){
  // ボタンの押下状況を取得
  buttonState = digitalRead(buttonPin);

  // ボタン押下判定
  if (buttonState == HIGH) {
    // ボタンが押された場合、LED点灯
    digitalWrite(ledPin, HIGH);
  } 
  else {
    // LED消灯
    digitalWrite(ledPin, LOW); 
  }
}
