#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_7[76];        // Tag.BODY
    entity_0 = 89;            // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 56;            // Tag.BODY
    if(entity_3 < entity_0){  // Tag.BODY
    entity_3 = 60;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 32;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_3] = 'F'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER