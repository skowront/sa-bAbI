#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_6[52];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_8 = 86;            // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 33;            // Tag.BODY
    char entity_7[68];        // Tag.BODY
    entity_2 = 99;            // Tag.BODY
    if(entity_4 < entity_2){  // Tag.BODY
    entity_4 = 14;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7[entity_8] = 'Z'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4 = 88;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_4] = 'b'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER