#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    char entity_6[96];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 76;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_2[21];                                   // Tag.BODY
    entity_7 = 43;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    if (entity_4 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 38;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 35; entity_1 < entity_4; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_7] = 's';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_1] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER