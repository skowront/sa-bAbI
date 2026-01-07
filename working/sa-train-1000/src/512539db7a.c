#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_2[89];        // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_7[46];        // Tag.BODY
    entity_5 = 72;            // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_4 = 67;            // Tag.BODY
    entity_6 = 83;            // Tag.BODY
    if(entity_4 < entity_5){  // Tag.BODY
    entity_4 = 60;            // Tag.BODY
    entity_7[entity_6] = 'N'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_4 = 94;            // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_2[entity_4] = 'Z'; // Tag.BUFWRITE_COND_SAFE
    char entity_3[76];        // Tag.BODY
    entity_1 = 62;            // Tag.BODY
    entity_3[entity_1] = 'y'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER