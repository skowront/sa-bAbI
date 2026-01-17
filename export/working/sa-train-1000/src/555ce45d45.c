#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    char entity_4[39];        // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    entity_3 = 74;            // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 17;            // Tag.BODY
    entity_5 = 47;            // Tag.BODY
    char entity_0[0];         // Tag.BODY
    char entity_7[39];        // Tag.BODY
    if(entity_9 < entity_5){  // Tag.BODY
    entity_0[entity_3] = 'C'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_9 = 49;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_9] = 'V'; // Tag.BUFWRITE_COND_UNSAFE
    entity_7[entity_6] = 'K'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER