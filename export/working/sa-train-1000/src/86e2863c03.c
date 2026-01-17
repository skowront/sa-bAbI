#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    entity_3 = 33;                                       // Tag.BODY
    char entity_6[73];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    for(entity_8 = 29; entity_8 < entity_3; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_8] = 'E';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER