#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_8[71];        // Tag.BODY
    entity_3 = 77;            // Tag.BODY
    entity_7 = 97;            // Tag.BODY
    if(entity_3 < entity_7){  // Tag.BODY
    entity_3 = 38;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 51;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 63;            // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_4[29];        // Tag.BODY
    char entity_1[43];        // Tag.BODY
    entity_4[entity_0] = 'n'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_3] = 'X'; // Tag.BUFWRITE_COND_SAFE
    entity_2 = 5;             // Tag.BODY
    entity_1[entity_2] = 'Y'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER