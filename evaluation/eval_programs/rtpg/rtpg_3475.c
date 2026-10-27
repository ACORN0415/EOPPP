// RTPG_3475: vars=9 stmts=6
int xn[16];
int yo[16];
struct Node { int a; int b; };
void test_func(void) {
    int c75 = 94;
    int out45 = 81;
    int dat80 = 84;
    int x81 = 75;
    int c99 = 92;
    int sum34 = 4;
    int dat9 = 16240;
    int lo89 = 4;
    int dat59 = 42579;
    struct Node s; s.a = 48; s.b = 5;
    int i;
    for (i = 0; i < 72; i++) {
        int j;
        for (j = 0; j < 5; j++) {
        c75 = c99 + c75;
        lo89 = dat9 - c75;
        lo89 = lo89 - 1;
        dat9 = lo89 + c75;
        c75 = c75 + 5;
        lo89 = dat59 - sum34;
        }
    }
}
int main() { test_func(); return 0; }

