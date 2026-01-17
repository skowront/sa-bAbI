#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_1 = 24;            // Tag.BODY
    char entity_9[13];        // Tag.BODY
    entity_4 = 33;            // Tag.BODY
    if(entity_4 < entity_1){  // Tag.BODY
    entity_4 = 32;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 93;            // Tag.BODY
    }                         // Tag.BODY
    char entity_5[18];        // Tag.BODY
    entity_9[entity_4] = 'w'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;             // Tag.BODY
    entity_7 = 4;             // Tag.BODY
    entity_5[entity_7] = 'K'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER