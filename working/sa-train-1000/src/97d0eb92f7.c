#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 16;              // Tag.BODY
    entity_0 = 73;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    char entity_6[44];          // Tag.BODY
    if (entity_4 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 51;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_4){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_8] = 'k';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER