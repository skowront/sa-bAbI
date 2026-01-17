#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_5[20];          // Tag.BODY
    entity_0 = 18;              // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    entity_1 = 81;              // Tag.BODY
    if (entity_2 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 33;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_2){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_1] = 'I';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER