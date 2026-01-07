#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_2[16];        // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_8[25];        // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 19;            // Tag.BODY
    entity_1 = 25;            // Tag.BODY
    entity_8[entity_1] = 'G'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 28;            // Tag.BODY
    char entity_4[63];        // Tag.BODY
    entity_6 = 89;            // Tag.BODY
    if(entity_3 < entity_6){  // Tag.BODY
    entity_4[entity_0] = 'U'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 5;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 90;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_3] = 'J'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER