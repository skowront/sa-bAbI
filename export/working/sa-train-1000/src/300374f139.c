#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_3 = 47;              // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_2[81];          // Tag.BODY
    entity_1 = 77;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    if (entity_8 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 34;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_8){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_1] = 'v';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER