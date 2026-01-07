#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_0 = 7;               // Tag.BODY
    char entity_6[83];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    entity_8 = 32;              // Tag.BODY
    if (entity_2 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 68;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_2){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_1[94];          // Tag.BODY
    entity_6[entity_8] = 'C';   // Tag.BUFWRITE_COND_SAFE
    int entity_9;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 66;              // Tag.BODY
    entity_9 = 79;              // Tag.BODY
    char entity_5[27];          // Tag.BODY
    entity_5[entity_7] = 'E';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_9] = 'v';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER