/*
 * Generated using BlocklyDuino:
 *
 * https://github.com/MediaTek-Labs/BlocklyDuino-for-LinkIt
 *
 * Date: Wed, 26 Jun 2019 11:04:35 GMT
 */

#include <LRemote.h>

LRemoteLabel label1;
LRemoteLabel label2;
LRemoteSwitch switch1;
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
    label2.setText("");
    label2.setSize(5, 1);
    label2.setColor(RC_ORANGE);
    LRemote.addControl(label2);

    switch1.setPos(0, 2);
    switch1.setSize(5, 1);
    switch1.setText("");
    switch1.setColor(RC_ORANGE);
    LRemote.addControl(switch1);

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
  if (switch1.isValueChanged()) {
    if (switch1.getValue() == 1) {
      digitalWrite(LED_BUILTIN, HIGH);

    } else {
      digitalWrite(LED_BUILTIN, LOW);

    }

  }
  delay(100);
}
