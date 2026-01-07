#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_8[11];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_4 = 44;            // Tag.BODY
    entity_9 = 54;            // Tag.BODY
    if(entity_4 < entity_9){  // Tag.BODY
    entity_4 = 67;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 5;             // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_1[68];        // Tag.BODY
    char entity_7[39];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_8[entity_4] = 'g'; // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 69;            // Tag.BODY
    entity_1[entity_0] = 'y'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 63;            // Tag.BODY
    entity_7[entity_3] = 'a'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER