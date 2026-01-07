#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 52;              // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    entity_2 = 67;              // Tag.BODY
    char entity_8[49];          // Tag.BODY
    if (entity_3 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 19;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_3){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_5] = 'e';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER