#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_0 = 19;            // Tag.BODY
    entity_1 = 87;            // Tag.BODY
    char entity_8[18];        // Tag.BODY
    if(entity_0 < entity_1){  // Tag.BODY
    entity_0 = 0;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 74;            // Tag.BODY
    }                         // Tag.BODY
    char entity_6[10];        // Tag.BODY
    entity_8[entity_0] = 'C'; // Tag.BUFWRITE_COND_SAFE
    int entity_5;             // Tag.BODY
    entity_5 = 4;             // Tag.BODY
    entity_6[entity_5] = '0'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER