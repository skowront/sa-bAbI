#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    entity_1 = 92;              // Tag.BODY
    char entity_2[40];          // Tag.BODY
    entity_3 = 66;              // Tag.BODY
    if (entity_5 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 80;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_5){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_3] = 'S';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER