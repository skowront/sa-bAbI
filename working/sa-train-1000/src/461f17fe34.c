#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[40];        // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 29;            // Tag.BODY
    entity_2 = 62;            // Tag.BODY
    if(entity_5 < entity_2){  // Tag.BODY
    entity_5 = 66;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 87;            // Tag.BODY
    }                         // Tag.BODY
    char entity_7[6];         // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_0[entity_5] = '0'; // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 73;            // Tag.BODY
    entity_7[entity_8] = 'N'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER