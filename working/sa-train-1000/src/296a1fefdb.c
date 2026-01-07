#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_2[18];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_4 = 3;             // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    if(entity_3 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 47;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_3] = 'H'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER