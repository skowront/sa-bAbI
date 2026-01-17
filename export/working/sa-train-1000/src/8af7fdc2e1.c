#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    char entity_6[23];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    char entity_7[18];          // Tag.BODY
    entity_8 = 23;              // Tag.BODY
    entity_9 = 35;              // Tag.BODY
    entity_3 = 37;              // Tag.BODY
    if (entity_5 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6[entity_8] = 'p';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = 20;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_5){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_9] = 'm';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER