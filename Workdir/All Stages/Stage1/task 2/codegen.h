typedef struct tnode{
int val;
char *op;
struct tnode *left,*right;
}tnode;

struct tnode* makeLeafNode(int n);

struct tnode* makeOperatorNode(char c, struct tnode *l, struct tnode *r);

int codegen(struct tnode *t, FILE *target);

int evaluate(struct tnode *t);

int getreg();

void freereg();

void store(int i, FILE *target);


