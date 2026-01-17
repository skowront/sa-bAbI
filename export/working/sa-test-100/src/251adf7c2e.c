#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    entity_7 = 1;             // Tag.BODY
    char entity_3[41];        // Tag.BODY
    if(entity_4 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 43;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_4] = 'j'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER