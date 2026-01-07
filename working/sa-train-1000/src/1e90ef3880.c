#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_7[12];        // Tag.BODY
    char entity_9[74];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 46;            // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_5[37];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_8 = 17;            // Tag.BODY
    entity_4 = 86;            // Tag.BODY
    entity_3 = 19;            // Tag.BODY
    if(entity_4 < entity_0){  // Tag.BODY
    entity_7[entity_8] = 'C'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4 = 94;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 43;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_3] = '5'; // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_4] = 'E'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER