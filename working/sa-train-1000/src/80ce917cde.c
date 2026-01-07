#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_0[7];           // Tag.BODY
    entity_7 = 39;              // Tag.BODY
    entity_2 = 74;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    if (entity_8 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 66;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_8){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_7] = 'x';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER