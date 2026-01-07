#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 24;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    entity_4 = 96;              // Tag.BODY
    char entity_0[94];          // Tag.BODY
    if (entity_1 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 81;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_1){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_8] = 'v';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER