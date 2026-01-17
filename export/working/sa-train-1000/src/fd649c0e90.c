#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_0[0];         // Tag.BODY
    entity_2 = 69;            // Tag.BODY
    entity_9 = 27;            // Tag.BODY
    if(entity_2 < entity_9){  // Tag.BODY
    entity_2 = 79;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 89;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_7[77];        // Tag.BODY
    char entity_6[11];        // Tag.BODY
    entity_4 = 48;            // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_7[entity_4] = 'Y'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_2] = 'I'; // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 67;            // Tag.BODY
    entity_6[entity_8] = 'e'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER