#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_8[77];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_1 = 21;              // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_4[41];          // Tag.BODY
    entity_2 = 59;              // Tag.BODY
    entity_5 = 76;              // Tag.BODY
    entity_8[entity_2] = 'R';   // Tag.BUFWRITE_TAUT_SAFE
    if (entity_9 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 7;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_9){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_1] = 'K';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER