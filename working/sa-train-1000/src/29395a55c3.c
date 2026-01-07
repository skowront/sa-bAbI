#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_0[67];        // Tag.BODY
    entity_8 = 6;             // Tag.BODY
    entity_7 = 25;            // Tag.BODY
    if(entity_8 < entity_7){  // Tag.BODY
    entity_8 = 97;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 79;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_8] = 'D'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER