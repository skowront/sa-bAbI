#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_8[40];        // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_5[18];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 7;             // Tag.BODY
    entity_0 = 74;            // Tag.BODY
    entity_3 = 57;            // Tag.BODY
    if(entity_0 < entity_3){  // Tag.BODY
    entity_8[entity_6] = 'X'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 80;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 43;            // Tag.BODY
    }                         // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_5[entity_0] = 'A'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[78];        // Tag.BODY
    entity_9 = 52;            // Tag.BODY
    entity_2[entity_9] = 'c'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER