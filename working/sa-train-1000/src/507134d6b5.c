#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 2;             // Tag.BODY
    char entity_2[44];        // Tag.BODY
    entity_9 = 61;            // Tag.BODY
    if(entity_5 < entity_9){  // Tag.BODY
    entity_5 = 95;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 94;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_5] = 'M'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER