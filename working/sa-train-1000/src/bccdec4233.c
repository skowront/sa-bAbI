#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_2[52];          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 67;              // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 67;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    if (entity_6 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 15;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_6){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_7] = 'f';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER