#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_4 = 33;            // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    char entity_3[73];        // Tag.BODY
    if(entity_2 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 44;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_2] = 'S'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER