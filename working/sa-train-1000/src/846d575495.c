#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    char entity_6[13];          // Tag.BODY
    entity_5 = 11;              // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 62;              // Tag.BODY
    if (entity_8 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 33;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_8){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_6[entity_4] = 't';   // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 10;              // Tag.BODY
    char entity_1[34];          // Tag.BODY
    entity_1[entity_7] = 'S';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER