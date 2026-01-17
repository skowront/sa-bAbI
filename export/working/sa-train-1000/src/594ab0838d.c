#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    entity_4 = 95;            // Tag.BODY
    char entity_9[91];        // Tag.BODY
    if(entity_2 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 2;             // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_2] = 'o'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER