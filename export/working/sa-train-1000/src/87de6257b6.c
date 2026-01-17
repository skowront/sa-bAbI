#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_5[22];          // Tag.BODY
    entity_4 = 28;              // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_1 = 47;              // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    entity_7 = 60;              // Tag.BODY
    char entity_9[82];          // Tag.BODY
    if (entity_2 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 50;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_2){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_9[entity_4] = 'v';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 53;              // Tag.BODY
    entity_5[entity_7] = 'v';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_8[59];          // Tag.BODY
    entity_8[entity_3] = 'D';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER