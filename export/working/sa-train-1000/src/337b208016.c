#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    entity_4 = 99;            // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_9[76];        // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    if(entity_3 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 14;            // Tag.BODY
    }                         // Tag.BODY
    char entity_5[99];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_9[entity_3] = 's'; // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 89;            // Tag.BODY
    entity_5[entity_7] = 'o'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER