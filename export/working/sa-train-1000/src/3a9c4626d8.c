#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    char entity_2[33];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    entity_3 = 21;            // Tag.BODY
    if(entity_4 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 19;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_2[entity_4] = '3'; // Tag.BUFWRITE_COND_SAFE
    entity_0 = 64;            // Tag.BODY
    char entity_1[65];        // Tag.BODY
    entity_1[entity_0] = 'l'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER