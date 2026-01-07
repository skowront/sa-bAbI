#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    char entity_4[12];          // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_5[25];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_7 = 85;              // Tag.BODY
    entity_9 = 6;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_8 = 16;              // Tag.BODY
    if (entity_0 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 30;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_0){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_9] = 'r';   // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_8] = 'L';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER