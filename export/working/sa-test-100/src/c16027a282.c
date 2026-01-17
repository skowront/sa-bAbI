#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_1[64];        // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_2 = 21;            // Tag.BODY
    entity_0 = 84;            // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    char entity_7[34];        // Tag.BODY
    if(entity_8 < entity_2){  // Tag.BODY
    entity_7[entity_0] = 'z'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_8 = 29;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_8] = '0'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER