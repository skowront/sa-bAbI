#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[68];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_7[60];                                   // Tag.BODY
    entity_5 = 65;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_1 = 35;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    if (entity_6 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 38;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 42; entity_3 < entity_6; entity_3++){ // Tag.BODY
    entity_7[entity_5] = '1';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_9[entity_3] = 'M';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER