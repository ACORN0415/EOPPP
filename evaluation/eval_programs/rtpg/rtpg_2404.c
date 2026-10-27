// RTPG_2404: vars=5 stmts=6
int xn[64];
int yo[64];
struct Node { int a; int b; };
void test_func(void) {
    int out72 = 2;
    int z84 = 9;
    int acc28 = 9;
    int x62 = -1;
    int cnt55 = 64481;
    struct Node s; s.a = 1; s.b = 63565;
    int i;
    for (i = 0; i < 95; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        x62 = acc28 + z84;
        acc28 = out72 + z84;
        x62 = x62 + 4;
        out72 = cnt55;
        cnt55 = out72 + x62;
        out72 = out72 + 1;
        }
    }
}
int main() { test_func(); return 0; }

