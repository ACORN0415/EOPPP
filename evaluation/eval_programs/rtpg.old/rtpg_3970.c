// RTPG_3970: vars=8 stmts=2
int xn[16];
int yo[16];
struct Node { int a; int b; };
void test_func(void) {
    int hi1 = 7;
    int cnt47 = 25641;
    int res53 = -37;
    int val26 = 4;
    int cnt32 = 9;
    int y28 = 36170;
    int a85 = 54;
    int v19 = 16837;
    struct Node s; s.a = -46; s.b = 9;
    int i;
    for (i = 0; i < 16; i++) {
        res53 = xn[i];
        cnt32 = a85 - cnt32;
        cnt47 = a85 + v19;
        s.a = s.a + s.b;
        yo[i] = res53;
    }
}
int main() { test_func(); return 0; }

