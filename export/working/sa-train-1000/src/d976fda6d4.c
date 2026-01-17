#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_7[82];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_1 = 90;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 21;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_0] = 'O'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER