#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 5;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_4[85];                                   // Tag.BODY
    char entity_9[85];                                   // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    entity_5 = 19;                                       // Tag.BODY
    if (entity_3 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 88;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_2] = 'e';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_6 = 40; entity_6 < entity_3; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_6] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER