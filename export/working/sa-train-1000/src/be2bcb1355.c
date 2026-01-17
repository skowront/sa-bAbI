#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_6 = 17;            // Tag.BODY
    char entity_9[13];        // Tag.BODY
    char entity_7[14];        // Tag.BODY
    entity_2 = 95;            // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 93;            // Tag.BODY
    if(entity_6 < entity_2){  // Tag.BODY
    entity_6 = 10;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9[entity_8] = 'n'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 96;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_6] = 'V'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER