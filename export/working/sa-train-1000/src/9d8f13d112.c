#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    entity_4 = 10;            // Tag.BODY
    char entity_1[68];        // Tag.BODY
    if(entity_3 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 94;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_3] = 'k'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER