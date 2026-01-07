#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_5[91];        // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_7 = 89;            // Tag.BODY
    if(entity_6 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 73;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_6] = 'o'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER