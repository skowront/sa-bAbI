#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[15];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 91;                                       // Tag.BODY
    if (entity_9 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 25;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 97; entity_0 < entity_9; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_0] = 'A';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER