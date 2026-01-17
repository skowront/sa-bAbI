#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_7[66];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_6 = 15;            // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_5[59];        // Tag.BODY
    char entity_9[68];        // Tag.BODY
    entity_1 = 56;            // Tag.BODY
    entity_8 = 79;            // Tag.BODY
    entity_5[entity_8] = 'F'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 33;            // Tag.BODY
    entity_7[entity_2] = 'd'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_6 < entity_1){  // Tag.BODY
    entity_6 = 87;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 93;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_6] = '9'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER