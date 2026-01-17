#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_7[67];          // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 60;              // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    char entity_2[49];          // Tag.BODY
    entity_6 = 97;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 70;              // Tag.BODY
    if (entity_9 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 82;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_9){ // Tag.BODY
    entity_2[entity_0] = 'O';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 97;              // Tag.BODY
    char entity_3[84];          // Tag.BODY
    entity_7[entity_6] = '6';   // Tag.BUFWRITE_COND_UNSAFE
    entity_3[entity_1] = 'N';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER