#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    char entity_1[51];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_9 = 33;              // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    char entity_6[12];          // Tag.BODY
    entity_2 = 18;              // Tag.BODY
    entity_8 = 5;               // Tag.BODY
    if (entity_5 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 2;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_5){ // Tag.BODY
    entity_1[entity_9] = '4';   // Tag.BUFWRITE_TAUT_SAFE
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_2] = 'I';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER