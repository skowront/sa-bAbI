#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_1[15];        // Tag.BODY
    entity_0 = 63;            // Tag.BODY
    entity_4 = 31;            // Tag.BODY
    if(entity_4 < entity_0){  // Tag.BODY
    entity_4 = 25;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 65;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_4] = 't'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER