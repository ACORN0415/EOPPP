// RTPG_5650: vars=6 stmts=6
int xn[64];
int yo[64];
struct Node { int a; int b; };
void test_func(void) {
    int a69 = 9;
    int x78 = 78;
    int x55 = 54542;
    int lo57 = 45;
    int z79 = 1;
    int cur50 = 39;
    struct Node s; s.a = 75; s.b = -25;
    int *ptr = &lo57;
    int i;
    for (i = 0; i < 64; i++) {
        x78 = xn[i];
        cur50 = z79 - cur50;
        x55 = x78 - a69;
        cur50 = lo57 + 17;
        a69 = cur50 + lo57;
        x78 = x78 + 1;
        a69 = cur50;
        *ptr = *ptr + 3;
        s.a = s.a + s.b;
        yo[i] = x55;
    }
}
int main() { test_func(); return 0; }

