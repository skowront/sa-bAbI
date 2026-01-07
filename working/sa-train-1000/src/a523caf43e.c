#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    char entity_3[78];          // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 66;              // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_0 = 68;              // Tag.BODY
    if (entity_7 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 46;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_7){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_1] = 's';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER