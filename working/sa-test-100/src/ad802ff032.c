#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    char entity_4[99];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 87;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 32;              // Tag.BODY
    if (entity_0 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 8;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_9[21];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_4[entity_5] = 'Z';   // Tag.BUFWRITE_COND_SAFE
    entity_8 = 33;              // Tag.BODY
    entity_9[entity_8] = 'v';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER