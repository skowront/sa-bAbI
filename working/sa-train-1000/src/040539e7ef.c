#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 87;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    char entity_1[79];          // Tag.BODY
    entity_6 = 17;              // Tag.BODY
    if (entity_5 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 63;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_5){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_4[10];          // Tag.BODY
    entity_1[entity_6] = 'o';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_2;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_2 = 58;              // Tag.BODY
    entity_7 = 7;               // Tag.BODY
    char entity_8[77];          // Tag.BODY
    entity_4[entity_7] = 'K';   // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_2] = 'f';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER