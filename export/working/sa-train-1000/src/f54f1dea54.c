#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_3[89];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 8;                                        // Tag.BODY
    for(entity_5 = 67; entity_5 < entity_6; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_5] = 'W';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER