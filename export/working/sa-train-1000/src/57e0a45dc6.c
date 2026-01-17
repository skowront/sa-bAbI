#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_6[27];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    entity_4 = 64;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_7 = 36;                                       // Tag.BODY
    char entity_0[47];                                   // Tag.BODY
    if (entity_5 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 14;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 95; entity_9 < entity_5; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_9] = 'w';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_7] = 'Z';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER