// RTPG_3117: vars=6 stmts=5
int xn[32];
int yo[32];
struct Pair { int a; int b; };
void test_func(void) {
    int a44 = 53;
    int v52 = 31;
    int tmp15 = 22482;
    int hi0 = 61;
    int out55 = 39;
    int v89 = -22;
    struct Pair s; s.a = -26; s.b = 72;
    int i;
    for (i = 0; i < 32; i++) {
        v89 = xn[i];
        tmp15 = v89;
        v89 = v89 - 14597;
        out55 = v89 + a44;
        hi0 = hi0 - out55;
        v52 = tmp15 + 4;
        s.a = s.a + s.b;
        yo[i] = out55;
    }
done:
    a44 = 0;
}
int main() { test_func(); return 0; }

