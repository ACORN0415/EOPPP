// RTPG_2059: vars=5 stmts=7
int xn[64];
int yo[64];
struct Node { int a; int b; };
void test_func(void) {
    int a56 = 49;
    int cur9 = -10;
    int dat19 = 52;
    int prev94 = 81;
    int a99 = 70;
    struct Node s; s.a = 94; s.b = 25978;
    int i;
    for (i = 0; i < 32; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        prev94 = prev94 - 3;
        dat19 = cur9;
        cur9 = a99 + prev94;
        dat19 = a56 + a99;
        prev94 = prev94 + 12;
        cur9 = dat19 + a56;
        a99 = a99 + 1;
        }
    }
}
int main() { test_func(); return 0; }

