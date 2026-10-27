// RTPG_986: vars=3 stmts=2
int xn[16];
int yo[16];
struct Node { int a; int b; };
void test_func(void) {
    int lo32 = 35;
    int c54 = 7;
    int v99 = -9;
    struct Node s; s.a = 50; s.b = 1;
    int i;
    for (i = 0; i < 16; i++) {
        c54 = xn[i];
        v99 = c54 + lo32;
        lo32 = v99 - -9;
        s.a = s.a + s.b;
        yo[i] = lo32;
    }
}
int main() { test_func(); return 0; }

