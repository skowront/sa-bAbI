#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_4[53];          // Tag.BODY
    entity_3 = 5;               // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    entity_2 = 86;              // Tag.BODY
    if (entity_6 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 67;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_6){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_3] = 'U';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER