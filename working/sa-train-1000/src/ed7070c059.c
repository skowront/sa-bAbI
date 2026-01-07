#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_1[94];        // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_5 = 87;            // Tag.BODY
    entity_7 = 25;            // Tag.BODY
    if(entity_7 < entity_5){  // Tag.BODY
    entity_7 = 16;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 73;            // Tag.BODY
    }                         // Tag.BODY
    char entity_0[88];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_1[entity_7] = 'w'; // Tag.BUFWRITE_COND_SAFE
    entity_6 = 88;            // Tag.BODY
    entity_0[entity_6] = 'l'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER