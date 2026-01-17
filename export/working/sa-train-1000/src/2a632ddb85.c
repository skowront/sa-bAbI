#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_1[27];          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_6 = 19;              // Tag.BODY
    entity_2 = 52;              // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    if (entity_7 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 43;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_7){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_2] = 'x';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER