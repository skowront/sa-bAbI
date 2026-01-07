#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_7 = 99;            // Tag.BODY
    char entity_2[32];        // Tag.BODY
    entity_6 = 81;            // Tag.BODY
    if(entity_6 < entity_7){  // Tag.BODY
    entity_6 = 55;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 73;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_6] = 'i'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER