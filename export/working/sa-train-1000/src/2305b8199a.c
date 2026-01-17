#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_7[25];        // Tag.BODY
    entity_9 = 44;            // Tag.BODY
    entity_8 = 88;            // Tag.BODY
    if(entity_8 < entity_9){  // Tag.BODY
    entity_8 = 79;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 22;            // Tag.BODY
    }                         // Tag.BODY
    char entity_4[46];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_7[entity_8] = 'j'; // Tag.BUFWRITE_COND_SAFE
    entity_2 = 71;            // Tag.BODY
    entity_4[entity_2] = 'S'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER