#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_1[96];        // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_7 = 91;            // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    if(entity_4 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 0;             // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_2[88];        // Tag.BODY
    entity_1[entity_4] = 'Q'; // Tag.BUFWRITE_COND_SAFE
    entity_0 = 23;            // Tag.BODY
    entity_2[entity_0] = '6'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER