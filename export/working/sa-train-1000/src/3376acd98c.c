#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_9[51];          // Tag.BODY
    entity_4 = 90;              // Tag.BODY
    entity_7 = 88;              // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    if (entity_1 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 21;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_1){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_4] = 'C';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER