#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_1[5];         // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_2 = 61;            // Tag.BODY
    entity_5 = 82;            // Tag.BODY
    if(entity_2 < entity_5){  // Tag.BODY
    entity_2 = 66;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 30;            // Tag.BODY
    }                         // Tag.BODY
    char entity_3[53];        // Tag.BODY
    char entity_7[89];        // Tag.BODY
    entity_1[entity_2] = 'N'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_0;             // Tag.BODY
    entity_0 = 49;            // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 21;            // Tag.BODY
    entity_7[entity_0] = 'P'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_6] = 'C'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER