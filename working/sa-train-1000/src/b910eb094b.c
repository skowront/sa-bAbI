#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_3 = 7;             // Tag.BODY
    char entity_6[55];        // Tag.BODY
    if(entity_8 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 53;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_8] = '4'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER