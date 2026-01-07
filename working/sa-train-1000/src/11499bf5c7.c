#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_3 = 65;            // Tag.BODY
    char entity_1[42];        // Tag.BODY
    if(entity_5 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 46;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_5] = 'T'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER