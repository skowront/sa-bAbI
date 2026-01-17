#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_7 = 48;            // Tag.BODY
    char entity_8[20];        // Tag.BODY
    if(entity_6 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 62;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_6] = 'I'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER