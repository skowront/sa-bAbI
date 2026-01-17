#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_6[87];          // Tag.BODY
    entity_3 = 9;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 40;              // Tag.BODY
    if (entity_0 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 92;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_0){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_3] = 'n';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER