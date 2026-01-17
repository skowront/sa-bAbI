#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_5 = 56;              // Tag.BODY
    char entity_2[43];          // Tag.BODY
    entity_7 = 6;               // Tag.BODY
    if (entity_8 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 84;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_8){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_9[52];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 31;              // Tag.BODY
    entity_9[entity_0] = 'F';   // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_5] = 'X';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER