// RTPG_5359: vars=7 stmts=4
int idx_arr[64];
struct Node { int a; int b; };
void test_func(void) {
    float b54 = 62.96;
    double out39 = 16.42;
    int res48 = 4;
    int sum93 = 90;
    int c88 = 77;
    double cur94 = 52.61;
    int out86 = 9;
    struct Node s; s.a = 4; s.b = 74;
    int i;
    for (i = 0; i < 20; i++) {
        out39 = xn[idx_arr[i]];
        res48 = res48 + 9;
        out39 = b54 + res48;
        b54 = b54 + 4;
        b54 = out86 + out39;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

