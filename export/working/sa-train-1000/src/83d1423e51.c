#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_7[71];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 26;                                       // Tag.BODY
    char entity_3[51];                                   // Tag.BODY
    entity_4 = 1;                                        // Tag.BODY
    for(entity_8 = 68; entity_8 < entity_2; entity_8++){ // Tag.BODY
    entity_7[entity_4] = 'p';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_3[entity_8] = 'F';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER