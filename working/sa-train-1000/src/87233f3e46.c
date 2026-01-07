#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    char entity_0[36];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_7 = 86;              // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_8[55];          // Tag.BODY
    entity_3 = 45;              // Tag.BODY
    entity_5 = 44;              // Tag.BODY
    if (entity_2 < entity_3){   // Tag.BODY
    entity_0[entity_7] = 't';   // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                    // Tag.BODY
    entity_2 = 70;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_2){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_5] = 'k';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER