// RTPG_5225: vars=6 stmts=3
int xn[16];
int yo[16];
struct Pair { int a; int b; };
void test_func(void) {
    int sum91 = -9;
    int b19 = -25;
    int tmp20 = 1;
    int tmp85 = 50231;
    int a27 = 53;
    int tmp53 = 59;
    struct Pair s; s.a = 26; s.b = 45;
    int i;
    for (i = 0; i < 16; i++) {
        tmp20 = xn[i];
        tmp85 = b19 + 5034;
        tmp20 = tmp85 - tmp20;
        b19 = b19 + 5;
        s.a = s.a + s.b;
        yo[i] = tmp20;
    }
}
int main() { test_func(); return 0; }

