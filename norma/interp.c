#include "defs.h"
#include "data.h"
#include "decl.h"

static char* ASTop[] = { "+", "-", "*", "/" };

int interpretAST(struct ASTnode* n) {
    int leftval, rightval;

    if (n->left){
        leftval = interpretAST(n->left);
      }
    if (n->right){
        rightval = interpretAST(n->right);
      }
    if (n->op == A_INTLIT){
        printf("int %d\n", n->intvalue);
    }
    else{
        printf("error");
    }
        result(n, leftval, rightval);
   
    }
int result(struct ASTnode* n , int leftval ,int rightval) {
    
     if (n->op == A_ADD) {
        return (leftval + rightval);
    }
    if (n->op == A_SUBTRACT) {
        return (leftval - rightval);
    }
    if (n->op == A_DIVIDE) {
        return (leftval / rightval);
    }
    if (n->op == A_MULTIPLY) {
        return (leftval * rightval);
    }
    if (n->op == A_INTLIT) {
        return (n->intvalue);
    }
    printf("Unknown AST ");
        exit(1);
}