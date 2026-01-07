#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_5 = 85;            // Tag.BODY
    char entity_0[37];        // Tag.BODY
    if(entity_1 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 65;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_1] = 'w'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER