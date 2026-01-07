#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_3[3];           // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_0 = 13;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_2 = 9;               // Tag.BODY
    if (entity_8 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 83;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_8){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_2] = 'Y';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER