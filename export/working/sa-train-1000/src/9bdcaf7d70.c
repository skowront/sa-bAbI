#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    entity_8 = 78;              // Tag.BODY
    char entity_4[2];           // Tag.BODY
    entity_7 = 66;              // Tag.BODY
    if (entity_5 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 93;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_5){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_8] = 'i';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER