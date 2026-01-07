#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_2[13];          // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_9 = 61;              // Tag.BODY
    entity_7 = 47;              // Tag.BODY
    if (entity_8 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 45;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_8){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_2[entity_9] = 'C';   // Tag.BUFWRITE_COND_UNSAFE
    entity_3 = 83;              // Tag.BODY
    char entity_1[63];          // Tag.BODY
    entity_1[entity_3] = 'P';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER