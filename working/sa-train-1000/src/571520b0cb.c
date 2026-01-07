#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_6[17];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_2 = 85;            // Tag.BODY
    char entity_5[99];        // Tag.BODY
    entity_8 = 94;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6[entity_2] = 'g'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 36;            // Tag.BODY
    }                         // Tag.BODY
    char entity_9[52];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_5[entity_0] = 's'; // Tag.BUFWRITE_COND_SAFE
    entity_7 = 73;            // Tag.BODY
    entity_9[entity_7] = 'l'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER