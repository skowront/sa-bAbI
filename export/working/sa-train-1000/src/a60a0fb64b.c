#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_8[27];          // Tag.BODY
    entity_3 = 29;              // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    entity_1 = 29;              // Tag.BODY
    if (entity_2 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 50;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_2){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_1] = 'K';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER