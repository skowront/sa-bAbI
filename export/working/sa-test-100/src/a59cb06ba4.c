#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_9[45];                                   // Tag.BODY
    entity_3 = 94;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    for(entity_2 = 78; entity_2 < entity_3; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_8[78];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_9[entity_2] = 'e';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 42;                                       // Tag.BODY
    entity_8[entity_5] = 'J';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER