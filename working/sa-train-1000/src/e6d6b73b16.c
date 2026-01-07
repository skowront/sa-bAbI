#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_7[84];        // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_2 = 9;             // Tag.BODY
    if(entity_6 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 61;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_6] = '2'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER