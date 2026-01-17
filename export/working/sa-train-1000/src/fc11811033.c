#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_2[63];        // Tag.BODY
    entity_0 = 81;            // Tag.BODY
    entity_3 = 85;            // Tag.BODY
    if(entity_3 < entity_0){  // Tag.BODY
    entity_3 = 52;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 57;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_3] = '9'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER