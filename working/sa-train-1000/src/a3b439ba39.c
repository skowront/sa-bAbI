#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    char entity_4[4];         // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_3 = 14;            // Tag.BODY
    if(entity_1 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 87;            // Tag.BODY
    }                         // Tag.BODY
    char entity_0[79];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 71;            // Tag.BODY
    entity_4[entity_1] = '3'; // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_5] = 'W'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER