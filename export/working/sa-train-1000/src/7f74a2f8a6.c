#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_5[59];        // Tag.BODY
    entity_4 = 36;            // Tag.BODY
    entity_3 = 32;            // Tag.BODY
    if(entity_3 < entity_4){  // Tag.BODY
    entity_3 = 7;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 97;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_3] = '6'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER