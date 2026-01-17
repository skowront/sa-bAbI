#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_2[55];          // Tag.BODY
    char entity_9[71];          // Tag.BODY
    entity_3 = 58;              // Tag.BODY
    entity_7 = 90;              // Tag.BODY
    if (entity_1 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2[entity_3] = 'K';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 81;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_1){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_9[entity_5] = 'n';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[45];          // Tag.BODY
    entity_0 = 44;              // Tag.BODY
    entity_6[entity_0] = 'y';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER