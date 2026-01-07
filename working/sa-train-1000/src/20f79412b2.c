#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    char entity_2[73];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_7 = 11;              // Tag.BODY
    entity_8 = 63;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    if (entity_5 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 79;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_5){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_8] = 'w';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER