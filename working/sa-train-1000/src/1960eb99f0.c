#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_4[31];        // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_1 = 86;            // Tag.BODY
    char entity_7[72];        // Tag.BODY
    entity_9 = 26;            // Tag.BODY
    if(entity_8 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 2;             // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_4[entity_8] = '6'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[17];        // Tag.BODY
    entity_3 = 4;             // Tag.BODY
    entity_7[entity_9] = '4'; // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_3] = 'v'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER