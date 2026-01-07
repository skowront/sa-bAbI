#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_3 = 47;            // Tag.BODY
    char entity_0[21];        // Tag.BODY
    entity_7 = 70;            // Tag.BODY
    if(entity_3 < entity_7){  // Tag.BODY
    entity_3 = 89;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 89;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_3] = 'L'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER