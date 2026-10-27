// RTPG_9470: vars=5 stmts=9
struct Pair { int a; int b; };
void test_func(void) {
    int acc55 = 26;
    int out73 = 58;
    int v9 = 36942;
    int val12 = 2;
    int prev39 = 64;
    struct Pair s; s.a = 1; s.b = 0;
    int *ptr = &out73;
    int i;
    for (i = 0; i < 31; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        val12 = v9;
        prev39 = acc55 + prev39;
        out73 = prev39;
        prev39 = out73 - val12;
        prev39 = prev39 - 3;
        prev39 = acc55 - v9;
        out73 = v9 + 5;
        val12 = val12;
        val12 = out73 + val12;
        }
    }
}
int main() { test_func(); return 0; }

