// RTPG_1818: vars=4 stmts=4
int idx_arr[16];
struct Pair { int a; int b; };
void test_func(void) {
    int lo45 = 64;
    int b80 = -37;
    int lo74 = 10;
    int v78 = 50;
    struct Pair s; s.a = 18; s.b = 25;
    int i;
    for (i = 0; i < 16; i++) {
        v78 = xn[idx_arr[i]];
        lo45 = v78 + b80;
        lo74 = lo45 + v78;
        b80 = lo45 - 72;
        lo74 = lo45 + v78;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

