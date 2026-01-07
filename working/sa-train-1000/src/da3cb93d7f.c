#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_3[65];        // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    entity_2 = 75;            // Tag.BODY
    if(entity_7 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 47;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_7] = '9'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER