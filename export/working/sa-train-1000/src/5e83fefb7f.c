#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    entity_0 = 71;            // Tag.BODY
    char entity_1[60];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 52;            // Tag.BODY
    if(entity_7 < entity_0){  // Tag.BODY
    entity_7 = 81;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 23;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_1[entity_7] = 'Y'; // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 54;            // Tag.BODY
    char entity_2[35];        // Tag.BODY
    entity_2[entity_8] = '2'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER