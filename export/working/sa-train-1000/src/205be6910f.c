#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_7[3];           // Tag.BODY
    entity_8 = 29;              // Tag.BODY
    entity_4 = 88;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    if (entity_5 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 77;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_5){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_8] = 'S';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[16];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 3;               // Tag.BODY
    entity_9[entity_2] = 'Z';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER