#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[83];        // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_5 = 9;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    if(entity_8 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 77;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_1[7];         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_0[entity_8] = 'X'; // Tag.BUFWRITE_COND_SAFE
    entity_3 = 93;            // Tag.BODY
    entity_2 = 36;            // Tag.BODY
    char entity_9[10];        // Tag.BODY
    entity_9[entity_2] = 'C'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_3] = 'M'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER