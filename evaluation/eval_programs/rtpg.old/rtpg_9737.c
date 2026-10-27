// RTPG_9737: vars=7 stmts=7
int idx_arr[32];
struct Point { int a; int b; };
void test_func(void) {
    int out76 = 48;
    int a91 = 2;
    int out21 = 4;
    int x19 = 18600;
    int sum96 = 3;
    int res55 = 35940;
    int acc1 = 77;
    struct Point s; s.a = 0; s.b = 56;
    int i;
    for (i = 0; i < 33; i++) {
        out21 = xn[idx_arr[i]];
        acc1 = a91 + -16;
        x19 = x19 + 3;
        res55 = res55 - x19;
        out76 = acc1;
        out21 = res55 - x19;
        out76 = out76 + 2;
        res55 = x19 - a91;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

