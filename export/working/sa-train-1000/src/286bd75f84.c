#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    char entity_0[13];        // Tag.BODY
    entity_6 = 5;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    if(entity_3 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 91;            // Tag.BODY
    }                         // Tag.BODY
    char entity_5[89];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_0[entity_3] = 'd'; // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 93;            // Tag.BODY
    entity_5[entity_2] = 'f'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER