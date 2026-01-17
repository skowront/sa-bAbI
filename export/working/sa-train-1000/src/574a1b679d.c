#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_6[26];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_5[51];        // Tag.BODY
    entity_7 = 3;             // Tag.BODY
    entity_1 = 35;            // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 31;            // Tag.BODY
    if(entity_7 < entity_1){  // Tag.BODY
    entity_7 = 13;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6[entity_2] = 'f'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 0;             // Tag.BODY
    }                         // Tag.BODY
    char entity_3[79];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 71;            // Tag.BODY
    entity_5[entity_7] = '7'; // Tag.BUFWRITE_COND_SAFE
    entity_3[entity_4] = 'M'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER