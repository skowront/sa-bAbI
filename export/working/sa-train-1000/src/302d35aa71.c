#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_5[56];        // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_2 = 19;            // Tag.BODY
    char entity_3[94];        // Tag.BODY
    entity_8 = 76;            // Tag.BODY
    entity_7 = 15;            // Tag.BODY
    entity_6 = 5;             // Tag.BODY
    char entity_9[32];        // Tag.BODY
    if(entity_8 < entity_7){  // Tag.BODY
    entity_8 = 85;            // Tag.BODY
    entity_9[entity_2] = 'z'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_6] = 'y'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_8 = 22;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_8] = '0'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER