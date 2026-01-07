#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_2 = 36;              // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_3 = 6;               // Tag.BODY
    char entity_1[33];          // Tag.BODY
    if (entity_7 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 76;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_7){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_3] = 'g';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER