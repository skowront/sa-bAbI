#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_3[91];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_1 = 39;            // Tag.BODY
    entity_7 = 51;            // Tag.BODY
    char entity_9[17];        // Tag.BODY
    char entity_0[59];        // Tag.BODY
    entity_4 = 14;            // Tag.BODY
    entity_5 = 13;            // Tag.BODY
    if(entity_1 < entity_7){  // Tag.BODY
    entity_1 = 76;            // Tag.BODY
    entity_9[entity_4] = 'b'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_5] = 'd'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_1 = 43;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_1] = 'y'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER