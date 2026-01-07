#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_4 = 81;              // Tag.BODY
    char entity_8[35];          // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    entity_6 = 63;              // Tag.BODY
    if (entity_5 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 68;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_5){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_6] = 'r';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER