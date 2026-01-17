#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_3 = 78;            // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    char entity_2[39];        // Tag.BODY
    if(entity_7 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 3;             // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_7] = 's'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER