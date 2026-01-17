#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_4 = 15;              // Tag.BODY
    char entity_3[18];          // Tag.BODY
    entity_0 = 43;              // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    char entity_5[99];          // Tag.BODY
    entity_5[entity_4] = 'D';   // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 88;              // Tag.BODY
    if (entity_9 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 5;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_9){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_0] = 'j';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_6;               // Tag.BODY
    char entity_1[16];          // Tag.BODY
    entity_6 = 57;              // Tag.BODY
    entity_1[entity_6] = 'M';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER