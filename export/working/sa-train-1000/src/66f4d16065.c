#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_8 = 3;             // Tag.BODY
    char entity_2[35];        // Tag.BODY
    if(entity_0 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 7;             // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_0] = 'V'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER