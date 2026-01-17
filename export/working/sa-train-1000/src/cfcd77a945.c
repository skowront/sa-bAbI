#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 70;              // Tag.BODY
    char entity_0[30];          // Tag.BODY
    entity_8 = 21;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    if (entity_4 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 32;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_4){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_8] = 'u';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;               // Tag.BODY
    entity_9 = 68;              // Tag.BODY
    char entity_1[60];          // Tag.BODY
    entity_1[entity_9] = 'G';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER