#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_6[12];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_1 = 37;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_8 = 45;              // Tag.BODY
    if (entity_0 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 5;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_0){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_1] = 'H';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER