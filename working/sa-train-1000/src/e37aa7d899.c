#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    entity_2 = 20;            // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    char entity_0[10];        // Tag.BODY
    if(entity_7 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 98;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_7] = 't'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER