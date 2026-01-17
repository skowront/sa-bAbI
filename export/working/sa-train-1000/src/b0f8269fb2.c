#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 0;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_5[54];                                   // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    if (entity_0 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 13;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 72; entity_3 < entity_0; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_9[81];                                   // Tag.BODY
    entity_5[entity_3] = 'y';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 90;                                       // Tag.BODY
    entity_9[entity_2] = '7';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER