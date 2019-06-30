/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 26 Jun 2019 11:29:41 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteLabel label2;
LRemoteButton button1;
LRemoteButton button2;
LRemoteLabel label3;

void setup()
{
  LRemote.setName("grace2003");
  LRemote.setOrientation(RC_PORTRAIT);
  LRemote.setGrid(5, 6);
    label1.setPos(0, 0);
    label1.setText("Bluetooth testing");
    label1.setSize(5, 1);
    label1.setColor(RC_ORANGE);
    LRemote.addControl(label1);

    label2.setPos(0, 1);
    label2.setText("Unknown");
    label2.setSize(5, 1);
    label2.setColor(RC_ORANGE);
    LRemote.addControl(label2);

    button1.setPos(0, 2);
    button1.setText("ON");
    button1.setSize(2, 1);
    button1.setColor(RC_ORANGE);
    LRemote.addControl(button1);

    button2.setPos(2, 2);
    button2.setText("OFF");
    button2.setSize(3, 1);
    button2.setColor(RC_ORANGE);
    LRemote.addControl(button2);

    label3.setPos(0, 5);
    label3.setText("Homemade by 林昕穎");
    label3.setSize(5, 1);
    label3.setColor(RC_ORANGE);
    LRemote.addControl(label3);
  LRemote.begin();
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop()
{
  LRemote.process();
  if (button1.isValueChanged()) {
    if (button1.getValue() == 1) {
      digitalWrite(LED_BUILTIN, HIGH);
      label2.updateText(String("Light  on"));

    }

  }
  if (button2.isValueChanged()) {
    if (button2.getValue() == 1) {
      digitalWrite(LED_BUILTIN, LOW);
      label2.updateText(String("Light  off"));

    }

  }
  delay(100);
}