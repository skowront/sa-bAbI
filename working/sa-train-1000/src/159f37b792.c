#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_1 = 96;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 24;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    char entity_4[25];          // Tag.BODY
    if (entity_6 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 60;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_6){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_7] = 'T';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER