#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_1[53];        // Tag.BODY
    entity_2 = 22;            // Tag.BODY
    entity_9 = 82;            // Tag.BODY
    if(entity_9 < entity_2){  // Tag.BODY
    entity_9 = 21;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 65;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_9] = 'O'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER