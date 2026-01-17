#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 71;            // Tag.BODY
    char entity_5[68];        // Tag.BODY
    entity_2 = 59;            // Tag.BODY
    if(entity_2 < entity_0){  // Tag.BODY
    entity_2 = 27;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 68;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_5[entity_2] = 'R'; // Tag.BUFWRITE_COND_SAFE
    char entity_7[31];        // Tag.BODY
    char entity_3[15];        // Tag.BODY
    entity_8 = 9;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 30;            // Tag.BODY
    entity_7[entity_8] = 'h'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_4] = '5'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER