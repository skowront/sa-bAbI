#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_0[32];                                   // Tag.BODY
    entity_7 = 44;                                       // Tag.BODY
    for(entity_8 = 61; entity_8 < entity_7; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_8] = 'T';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER