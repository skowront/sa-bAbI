#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_5[26];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_6 = 42;            // Tag.BODY
    if(entity_1 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 55;            // Tag.BODY
    }                         // Tag.BODY
    char entity_0[53];        // Tag.BODY
    entity_5[entity_1] = 'V'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_2;             // Tag.BODY
    entity_2 = 6;             // Tag.BODY
    entity_0[entity_2] = '0'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER