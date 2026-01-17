#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_6[88];        // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_7[75];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_2 = 74;            // Tag.BODY
    char entity_9[94];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_7[entity_2] = 'q'; // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = 35;            // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 95;            // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_6[entity_4] = 'T'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_1 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 5;             // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_1] = 'P'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER