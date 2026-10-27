// RTPG_7681: vars=9 stmts=2
struct Node { int a; int b; };
void test_func(void) {
    int lo64 = 49787;
    int out0 = 3;
    int c14 = -23;
    int prev64 = 36807;
    int tmp49 = 20;
    int res31 = 47;
    int a28 = 63452;
    int acc76 = 0;
    int x68 = -15;
    struct Node s; s.a = 8231; s.b = 8;
    int i;
    for (i = 0; i < 93; i++) {
        res31 = res31;
        res31 = res31 + 1;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

