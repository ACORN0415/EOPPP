// RTPG_2952: vars=5 stmts=9
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int y81 = 17651;
    int out55 = 11;
    int out97 = -16;
    int acc8 = -45;
    int c35 = 16;
    struct Data s; s.a = 15; s.b = 4;
    int i;
    for (i = 0; i < 64; i++) {
        acc8 = xn[i];
        out97 = out55 - y81;
        y81 = out97 + 65373;
        out97 = out97 - 4;
        out55 = y81 - 10;
        y81 = out97 + y81;
        y81 = y81 - 4;
        c35 = out97;
        out97 = out97 + 8;
        out55 = out55 - 5;
        s.a = s.a + s.b;
        if (acc8 < 43) {
        out97 = acc8 - 30;
        }
        yo[i] = acc8;
    }
}
int main() { test_func(); return 0; }

