

#include <avr/io.h>
#include <util/delay.h>


int main(void) {
    // Set the LED pin as an output
    // MEMORY MAPPED IO PORT B DATA DIRECTION REGISTER SET BIT 5
    DDRB |= (1 << DDB5);

    while (1) {
        // MEMORY MAPPED IO PORT B DATA REGISTER Toggle BIT 5
        // Toggle the LED on and off
        PORTB ^= (1 << PORTB5);
        _delay_ms(50);
    }

    return 0;
} 


// #include <Arduino.h>

// void setup() {

// }

// void loop() {

// }
