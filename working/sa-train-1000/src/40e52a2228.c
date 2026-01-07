#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    entity_5 = 33;              // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_9[51];          // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_3[62];          // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 74;              // Tag.BODY
    entity_0 = 2;               // Tag.BODY
    if (entity_6 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 4;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_6){ // Tag.BODY
    entity_9[entity_5] = 'K';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_0] = 'H';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER