#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    char entity_4[65];        // Tag.BODY
    entity_1 = 83;            // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    if(entity_6 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 82;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_6] = '7'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER