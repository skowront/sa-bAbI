#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_3[33];          // Tag.BODY
    entity_1 = 34;              // Tag.BODY
    entity_0 = 10;              // Tag.BODY
    if (entity_4 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 23;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_4){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_0] = 'y';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER