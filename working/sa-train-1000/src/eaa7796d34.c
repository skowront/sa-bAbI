#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_2 = 14;            // Tag.BODY
    char entity_0[22];        // Tag.BODY
    entity_1 = 95;            // Tag.BODY
    char entity_6[60];        // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    if(entity_7 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 20;            // Tag.BODY
    }                         // Tag.BODY
    char entity_5[78];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_6[entity_7] = 'K'; // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_2] = 'N'; // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 23;            // Tag.BODY
    entity_5[entity_9] = 'h'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER