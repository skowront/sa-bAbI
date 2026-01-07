#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_5[3];         // Tag.BODY
    char entity_6[44];        // Tag.BODY
    entity_4 = 74;            // Tag.BODY
    entity_7 = 62;            // Tag.BODY
    entity_9 = 73;            // Tag.BODY
    if(entity_4 < entity_9){  // Tag.BODY
    entity_4 = 83;            // Tag.BODY
    entity_5[entity_7] = 'Z'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_4 = 76;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_6[entity_4] = 'l'; // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 48;            // Tag.BODY
    char entity_1[57];        // Tag.BODY
    entity_1[entity_2] = 'u'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER