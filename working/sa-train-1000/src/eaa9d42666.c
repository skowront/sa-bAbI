#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_4 = 98;            // Tag.BODY
    char entity_2[71];        // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 35;            // Tag.BODY
    }                         // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_3[82];        // Tag.BODY
    entity_2[entity_0] = 'Q'; // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 71;            // Tag.BODY
    entity_3[entity_5] = 'R'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER