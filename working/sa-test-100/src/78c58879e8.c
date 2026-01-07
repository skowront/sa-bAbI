#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[99];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_1 = 66;                                       // Tag.BODY
    for(entity_3 = 20; entity_3 < entity_1; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_3] = 'R';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER