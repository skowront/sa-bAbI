#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[40];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_3 = 95;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    if (entity_9 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 82;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 15; entity_8 < entity_9; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_8] = 'u';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER