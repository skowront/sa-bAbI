#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_0[24];        // Tag.BODY
    entity_1 = 11;            // Tag.BODY
    if(entity_6 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 70;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_0[entity_6] = 'T'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[78];        // Tag.BODY
    entity_4 = 83;            // Tag.BODY
    entity_2[entity_4] = '2'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER