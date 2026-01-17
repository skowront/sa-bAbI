#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[93];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_2 = 7;                                        // Tag.BODY
    if (entity_6 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 94;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 34; entity_4 < entity_6; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_4] = 'O';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER