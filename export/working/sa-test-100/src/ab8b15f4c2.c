#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_0 = 75;              // Tag.BODY
    char entity_1[57];          // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_9 = 49;              // Tag.BODY
    if (entity_8 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 62;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_8){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_1[entity_9] = 'i';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;               // Tag.BODY
    char entity_6[8];           // Tag.BODY
    char entity_7[6];           // Tag.BODY
    entity_2 = 70;              // Tag.BODY
    entity_3 = 95;              // Tag.BODY
    entity_7[entity_3] = 't';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_2] = 'e';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER