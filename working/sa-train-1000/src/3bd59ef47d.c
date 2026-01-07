#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    char entity_0[8];         // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_1 = 66;            // Tag.BODY
    entity_7 = 69;            // Tag.BODY
    if(entity_1 < entity_7){  // Tag.BODY
    entity_1 = 1;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 26;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_1] = 'v'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER