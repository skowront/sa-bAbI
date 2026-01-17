#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_6[40];          // Tag.BODY
    char entity_7[14];          // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_5 = 47;              // Tag.BODY
    entity_0 = 93;              // Tag.BODY
    entity_6[entity_0] = '8';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 39;              // Tag.BODY
    if (entity_8 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 9;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_8){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 38;              // Tag.BODY
    entity_7[entity_5] = 'p';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_1[47];          // Tag.BODY
    entity_1[entity_9] = 'C';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER