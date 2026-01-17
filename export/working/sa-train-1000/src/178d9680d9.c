#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_4[61];          // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_6 = 41;              // Tag.BODY
    entity_1 = 80;              // Tag.BODY
    if (entity_2 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 62;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_2){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_3[93];          // Tag.BODY
    entity_4[entity_6] = 'i';   // Tag.BUFWRITE_COND_UNSAFE
    entity_9 = 16;              // Tag.BODY
    entity_3[entity_9] = '9';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER