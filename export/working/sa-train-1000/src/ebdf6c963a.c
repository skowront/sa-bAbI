#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_1 = 33;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    char entity_3[33];          // Tag.BODY
    entity_0 = 78;              // Tag.BODY
    if (entity_8 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 15;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_8){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_1] = '2';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER