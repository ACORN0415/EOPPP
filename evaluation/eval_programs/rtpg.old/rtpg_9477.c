// RTPG_9477: vars=3 stmts=3
int xn[32];
int yo[32];
struct Data { int a; int b; };
void test_func(void) {
    float sum4 = 42.59;
    int prev7 = 2;
    int hi15 = -19;
    struct Data s; s.a = 28; s.b = 28442;
    int h0 = 69;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        sum4 = xn[i];
        prev7 = sum4 + prev7;
        hi15 = hi15 - 1;
        hi15 = prev7 + prev7;
        s.a = s.a + s.b;
        if (sum4 <= 71) {
        prev7 = sum4;
        }
        yo[i] = prev7;
    }
}
int main() { test_func(); return 0; }

