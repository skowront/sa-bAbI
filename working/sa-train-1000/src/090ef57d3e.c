#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_6[32];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    char entity_9[99];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_7 = 27;            // Tag.BODY
    entity_4 = 76;            // Tag.BODY
    if(entity_8 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 29;            // Tag.BODY
    entity_6[entity_4] = 'D'; // Tag.BUFWRITE_TAUT_UNSAFE
    }                         // Tag.BODY
    char entity_2[58];        // Tag.BODY
    entity_9[entity_8] = 'u'; // Tag.BUFWRITE_COND_SAFE
    int entity_3;             // Tag.BODY
    entity_3 = 54;            // Tag.BODY
    entity_2[entity_3] = 'Y'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER