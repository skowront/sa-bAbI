#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_6[84];        // Tag.BODY
    entity_5 = 42;            // Tag.BODY
    if(entity_7 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 72;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_7] = 'c'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER