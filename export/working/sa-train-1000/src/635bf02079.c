#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_5[65];        // Tag.BODY
    char entity_1[69];        // Tag.BODY
    entity_8 = 62;            // Tag.BODY
    entity_4 = 8;             // Tag.BODY
    entity_5[entity_8] = '0'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = rand();        // Tag.BODY
    if(entity_3 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 60;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 99;            // Tag.BODY
    entity_1[entity_3] = 'a'; // Tag.BUFWRITE_COND_SAFE
    char entity_0[65];        // Tag.BODY
    entity_0[entity_2] = 'q'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER