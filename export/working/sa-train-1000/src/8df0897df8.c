#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_9 = 50;              // Tag.BODY
    char entity_3[60];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 17;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    if (entity_5 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 66;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_5){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_8] = '2';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER