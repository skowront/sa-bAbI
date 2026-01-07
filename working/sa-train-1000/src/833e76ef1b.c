#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_7 = 88;            // Tag.BODY
    entity_4 = 80;            // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_5[49];        // Tag.BODY
    char entity_9[79];        // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    if(entity_6 < entity_7){  // Tag.BODY
    entity_9[entity_4] = 'L'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_6 = 51;            // Tag.BODY
    }                         // Tag.BODY
    char entity_3[76];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_5[entity_6] = 'm'; // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 59;            // Tag.BODY
    entity_3[entity_1] = 'P'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER