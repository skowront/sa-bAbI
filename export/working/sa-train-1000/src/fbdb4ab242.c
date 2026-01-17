#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_1[14];        // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_5[67];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_6 = 10;            // Tag.BODY
    entity_2 = 32;            // Tag.BODY
    entity_9 = 81;            // Tag.BODY
    entity_1[entity_2] = 'B'; // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_7;             // Tag.BODY
    entity_7 = 37;            // Tag.BODY
    entity_5[entity_7] = 'z'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_0[56];        // Tag.BODY
    if(entity_6 < entity_9){  // Tag.BODY
    entity_6 = 75;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 14;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_6] = 'p'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER