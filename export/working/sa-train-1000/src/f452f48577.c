#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_8 = 75;              // Tag.BODY
    entity_7 = 9;               // Tag.BODY
    char entity_2[91];          // Tag.BODY
    if (entity_3 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 65;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_3){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_8] = 'h';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER