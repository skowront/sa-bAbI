#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_2[42];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 18;            // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    if(entity_6 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 56;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_6] = '3'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER