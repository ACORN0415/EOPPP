// RTPG_4797: vars=8 stmts=4
int xn[64];
int yo[64];
struct Pair { int a; int b; };
void test_func(void) {
    int prev51 = 8;
    int prev60 = 4;
    int tmp55 = 98;
    int res67 = 16676;
    int prev56 = 5;
    int acc41 = -20;
    int y31 = 76;
    int b93 = 16768;
    struct Pair s; s.a = 55; s.b = 38;
    int i;
    for (i = 0; i < 64; i++) {
        prev56 = xn[i];
        prev56 = b93 + prev60;
        prev51 = b93 - 5;
        prev56 = prev56 - 4;
        tmp55 = acc41;
        s.a = s.a + s.b;
        yo[i] = b93;
    }
}
int main() { test_func(); return 0; }

