#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_5 = 87;            // Tag.BODY
    char entity_2[29];        // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    entity_7 = 7;             // Tag.BODY
    entity_2[entity_5] = '5'; // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_6[44];        // Tag.BODY
    if(entity_3 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 81;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_3] = 'y'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER