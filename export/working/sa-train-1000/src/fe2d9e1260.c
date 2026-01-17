#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    char entity_8[79];          // Tag.BODY
    entity_9 = 31;              // Tag.BODY
    entity_1 = 59;              // Tag.BODY
    if (entity_0 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 16;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_0){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_8[entity_1] = 'S';   // Tag.BUFWRITE_COND_SAFE
    entity_5 = 42;              // Tag.BODY
    char entity_3[76];          // Tag.BODY
    entity_3[entity_5] = 'B';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER