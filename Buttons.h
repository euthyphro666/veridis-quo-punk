#pragma once

#include <stdlib.h>

// Encoder button, clockwise 'button', and counter-clockwise 'button'.
#define ENC_BTN_PIN 2
#define ENC_CLK_PIN A2
#define ENC_CNT_PIN A1

#define BUTTONS_LENGTH 3
#define INITIAL LOW

short Button_State[ BUTTONS_LENGTH ] = { INITIAL, INITIAL, INITIAL };
short Previous_Button_State[ BUTTONS_LENGTH ] = { INITIAL, INITIAL, INITIAL };
unsigned long Last_Debounce_Time[ BUTTONS_LENGTH ] = { 0, 0, 0 };
unsigned long Debounce_Delay = 50;

void initializeButtons()
{
    // Setup buttons as inputs
    pinMode(ENC_BTN_PIN, INPUT);
    pinMode(ENC_CLK_PIN, INPUT);
    pinMode(ENC_CNT_PIN, INPUT);
}

/***************************************************************************\
    Get_Button_Pressed
      Uses the button pin number and the button index in the global button 
      arrays to determine if the button was pressed while still taking
      measures to debounce any button press.

    button: The button pin number for the button in question.
    index: The index of the button info in the global arrays;
      Previous_Buton_State, Last_Debounce_Time, and Button_State.
\***************************************************************************/
bool getButtonPressed(int button, int index)
{
    bool pressed = false;
    int reading = digitalRead(button);
    long now = millis();

    if (reading != Previous_Button_State[index])
    {
        Last_Debounce_Time[index] = now;
    }

    if ((now - Last_Debounce_Time[index]) > Debounce_Delay)
    {
        if (reading != Button_State[index])
        {
            Button_State[index] = reading;

            if (Button_State[index] == LOW)
            {
                pressed = true;
            }
        }
    }
    Previous_Button_State[index] = reading;
    return pressed;
}