// RTPG_7198: vars=3 stmts=6
struct Node { int a; int b; };
void test_func(void) {
    int out63 = 0;
    float v18 = 83.67;
    double v33 = 79.94;
    struct Node s; s.a = 32; s.b = 80;
    int h0 = -3;
    int sv0 = 0;
    int h1 = 93;
    int sv1 = 0;
    int i;
    for (i = 0; i < 85; i++) {
        v18 = v18 + 4;
        out63 = v33 + v18;
        v33 = out63 * 5;
        v33 = v33 * 55;
        v18 = v18 + 4;
        out63 = v33 - out63;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

