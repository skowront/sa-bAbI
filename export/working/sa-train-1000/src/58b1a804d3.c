#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_5[64];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_0 = 96;            // Tag.BODY
    if(entity_6 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 92;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_6] = 'z'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_8[83];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 86;            // Tag.BODY
    entity_8[entity_3] = '8'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER