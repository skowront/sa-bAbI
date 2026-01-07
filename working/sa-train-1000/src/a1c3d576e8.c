#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    char entity_7[19];          // Tag.BODY
    entity_9 = 88;              // Tag.BODY
    entity_1 = 77;              // Tag.BODY
    if (entity_0 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 54;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_0){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_1] = '0';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER