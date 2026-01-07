#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    entity_6 = 43;            // Tag.BODY
    char entity_5[91];        // Tag.BODY
    if(entity_2 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 89;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_2] = 'R'; // Tag.BUFWRITE_COND_SAFE
    char entity_7[54];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 47;            // Tag.BODY
    entity_7[entity_3] = 'f'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER