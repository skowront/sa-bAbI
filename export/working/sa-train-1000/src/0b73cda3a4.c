#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_5[48];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_2 = 32;              // Tag.BODY
    entity_6 = 72;              // Tag.BODY
    if (entity_0 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 10;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_0){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_6] = 'w';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER