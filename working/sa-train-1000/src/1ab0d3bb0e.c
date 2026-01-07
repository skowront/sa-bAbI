#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_7[93];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_1 = 65;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_2 = 47;              // Tag.BODY
    if (entity_0 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 69;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_0){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_2] = 'o';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER