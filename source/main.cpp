#include "MicroBit.h"
#include "samples/Tests.h"
#include <cstdio>

MicroBit uBit;

int main()
{
    uBit.init();

    //out_of_box_experience();

    //microbit_panic( 999 );

    //uBit.init();

    //out_of_box_experience();
        // Insert your code here!

        // An example codal.json is provided in the root directory: codal.ble.json
    // Rename codal.ble.json to codal.json to use this BLE sample

    ble_test();
    
    uBit.display.scroll(ManagedString( microbit_friendly_name()));
    uBit.display.scroll(ManagedString( microbit_friendly_name()));
    uBit.display.scroll(ManagedString( microbit_friendly_name()));
    //uBit.display.scroll("2");
    
    //uBit.display.scroll("22222");


    // If main exits, there may still be other fibers running or registered event handlers etc.
    // Simply release this fiber, which will mean we enter the scheduler. Worse case, we then
    // sit in the idle task forever, in a power efficient sleep.
    //release_fiber();
    release_fiber();
}

