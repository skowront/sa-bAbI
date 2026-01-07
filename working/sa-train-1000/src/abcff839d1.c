#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_6[37];          // Tag.BODY
    entity_3 = 57;              // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    entity_7 = 38;              // Tag.BODY
    if (entity_9 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 75;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_9){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_7] = 'Y';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER