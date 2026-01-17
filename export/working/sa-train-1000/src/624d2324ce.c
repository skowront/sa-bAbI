#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_8[2];           // Tag.BODY
    char entity_1[81];          // Tag.BODY
    entity_0 = 46;              // Tag.BODY
    entity_6 = 60;              // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 15;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    if (entity_5 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1[entity_6] = 'S';   // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = 20;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_5){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_9] = 'N';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER