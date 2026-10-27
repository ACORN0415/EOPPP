// RTPG_9687: vars=7 stmts=5
int xn[32];
int yo[32];
struct Data { int a; int b; };
void test_func(void) {
    int tmp19 = -13;
    int b39 = 82;
    int val59 = 69;
    int cur65 = 23034;
    int tmp65 = 28696;
    int z3 = 1;
    int tmp44 = 62990;
    struct Data s; s.a = 2358; s.b = 10;
    int i;
    for (i = 0; i < 32; i++) {
        b39 = xn[i];
        val59 = tmp65 - tmp44;
        tmp44 = cur65;
        val59 = cur65 - tmp19;
        val59 = val59 + 5;
        tmp19 = tmp19;
        s.a = s.a + s.b;
        yo[i] = tmp44;
    }
}
int main() { test_func(); return 0; }

