#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_3[97];          // Tag.BODY
    entity_5 = 91;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_1 = 90;              // Tag.BODY
    if (entity_0 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 36;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_5] = 'P';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER