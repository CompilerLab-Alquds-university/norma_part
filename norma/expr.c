#include "defs.h"
#include "data.h"
#include "decl.h"

static struct ASTnode* primary(void) {
    struct ASTnode* n;
    switch (Token.token) {
    case T_INTLIT:
        n = mkastleaf(A_INTLIT, Token.intvalue);
        scan(&Token);
        return (n);
    default:
        printf("syntax error \n");
        exit(1);
    }
}
    int arithop(int tok) {
        if (tok == T_PLUS) {
            return (A_ADD);
        }
        if (tok == T_MINUS) {
            return (A_SUBTRACT);
        }
        if (tok == T_STAR) {
            return (A_MULTIPLY);
        }
        if (tok == T_SLASH) {
            return(A_DIVIDE);
        }
        else 
            printf( "unknown token in arithop()");
            exit(1);
        
    }
