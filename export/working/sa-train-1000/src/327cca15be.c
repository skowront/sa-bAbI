#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    entity_8 = 79;              // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 54;              // Tag.BODY
    char entity_9[76];          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    if (entity_7 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 13;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_7){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_3[3];           // Tag.BODY
    entity_9[entity_8] = 'E';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_0;               // Tag.BODY
    entity_0 = 80;              // Tag.BODY
    entity_3[entity_0] = 'X';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER