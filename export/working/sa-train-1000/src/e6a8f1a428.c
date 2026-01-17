#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 60;              // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    char entity_7[16];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 61;              // Tag.BODY
    if (entity_3 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 91;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_3){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_2] = 'S';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER