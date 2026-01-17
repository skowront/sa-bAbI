#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_2[73];          // Tag.BODY
    char entity_9[44];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_3 = 43;              // Tag.BODY
    entity_5 = 96;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_0 = 7;               // Tag.BODY
    if (entity_8 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 69;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_8){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_9[entity_3] = '1';   // Tag.BUFWRITE_COND_UNSAFE
    entity_2[entity_5] = 'u';   // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_4[44];          // Tag.BODY
    entity_7 = 68;              // Tag.BODY
    entity_4[entity_7] = 'D';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER