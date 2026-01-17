#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 12;              // Tag.BODY
    char entity_2[31];          // Tag.BODY
    entity_0 = 83;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    if (entity_4 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 57;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_4){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_1[84];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_2[entity_0] = 'o';   // Tag.BUFWRITE_COND_UNSAFE
    entity_9 = 87;              // Tag.BODY
    entity_1[entity_9] = 'a';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER