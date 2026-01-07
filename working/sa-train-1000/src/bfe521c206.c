#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    char entity_4[28];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_3 = 66;              // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 59;              // Tag.BODY
    if (entity_8 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 65;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_8){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_6[64];          // Tag.BODY
    entity_4[entity_9] = 'U';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_2;               // Tag.BODY
    entity_2 = 85;              // Tag.BODY
    entity_6[entity_2] = 'J';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER