#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_4[38];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_3 = 54;              // Tag.BODY
    entity_8 = 28;              // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    if (entity_2 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 94;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_2){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_4[entity_8] = '3';   // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 98;              // Tag.BODY
    char entity_7[54];          // Tag.BODY
    entity_7[entity_0] = 'P';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER