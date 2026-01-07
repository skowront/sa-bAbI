#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_5[32];        // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_8 = 89;            // Tag.BODY
    if(entity_0 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 49;            // Tag.BODY
    }                         // Tag.BODY
    char entity_4[85];        // Tag.BODY
    entity_5[entity_0] = 'd'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_7 = 33;            // Tag.BODY
    char entity_3[62];        // Tag.BODY
    entity_2 = 13;            // Tag.BODY
    entity_4[entity_7] = '0'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_2] = 'g'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER