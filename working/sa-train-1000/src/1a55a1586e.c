#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_8[6];         // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_5[10];        // Tag.BODY
    entity_7 = 2;             // Tag.BODY
    entity_2 = 37;            // Tag.BODY
    entity_4 = 73;            // Tag.BODY
    if(entity_4 < entity_7){  // Tag.BODY
    entity_4 = 33;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 1;             // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_8[entity_2] = 't'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_4] = '7'; // Tag.BUFWRITE_COND_SAFE
    char entity_1[51];        // Tag.BODY
    entity_6 = 41;            // Tag.BODY
    entity_1[entity_6] = 's'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER