#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[75];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_6 = 63;                                       // Tag.BODY
    for(entity_5 = 24; entity_5 < entity_6; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_5] = '6';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER