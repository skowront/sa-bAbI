#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_1[71];        // Tag.BODY
    entity_3 = 93;            // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_8[80];        // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_4 = 54;            // Tag.BODY
    if(entity_6 < entity_4){  // Tag.BODY
    entity_1[entity_3] = 'X'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_6 = 26;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_6] = 'z'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER