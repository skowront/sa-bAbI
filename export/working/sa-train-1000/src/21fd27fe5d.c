#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_1[0];         // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_2 = 99;            // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    if(entity_8 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 15;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_8] = 'o'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER