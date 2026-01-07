#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_0[6];                                    // Tag.BODY
    entity_2 = 22;                                       // Tag.BODY
    for(entity_4 = 71; entity_4 < entity_2; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_4] = 'S';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER