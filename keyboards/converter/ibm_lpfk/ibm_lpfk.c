
#include "ibm_lpfk.h"

#ifdef LED_MATRIX_ENABLE

led_config_t g_led_config = { {
    // Key Matrix to LED Index (straight)
   { 000, 001, 002, 003, 004, 005, 006, 007 },
   { 010, 011, 012, 013, 014, 015, 016, 017 },
   { 020, 021, 022, 023, 024, 025, 026, 027 },
   { 030, 031, 032, 033, 034, 035, 036, 037 }
}, {
    // LED Index to Physical Position
              { 1, 0 }, { 2, 0 }, { 3, 0 }, { 4, 0 },
    { 0, 1 }, { 1, 1 }, { 2, 1 }, { 3, 1 }, { 4, 1 }, { 5, 1 },
    { 0, 2 }, { 1, 2 }, { 2, 2 }, { 3, 2 }, { 4, 2 }, { 5, 2 },
    { 0, 3 }, { 1, 3 }, { 2, 3 }, { 3, 3 }, { 4, 3 }, { 5, 3 },
    { 0, 4 }, { 1, 4 }, { 2, 4 }, { 3, 4 }, { 4, 4 }, { 5, 4 },
              { 1, 5 }, { 2, 5 }, { 3, 5 }, { 4, 5 }
}, {
    // LED Index to Flag (all LED_FLAG_KEYLIGHT)
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4
} };

#endif
