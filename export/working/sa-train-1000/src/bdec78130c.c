#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    entity_8 = 1;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 30;              // Tag.BODY
    char entity_1[73];          // Tag.BODY
    char entity_9[39];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 19;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    if (entity_6 < entity_0){   // Tag.BODY
    entity_1[entity_8] = 'G';   // Tag.BUFWRITE_TAUT_SAFE
    } else {                    // Tag.BODY
    entity_6 = 63;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_6){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 6;               // Tag.BODY
    entity_9[entity_5] = 'b';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[27];          // Tag.BODY
    entity_2[entity_3] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER