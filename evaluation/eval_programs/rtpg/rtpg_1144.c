// RTPG_1144: vars=7 stmts=5
int xn[64];
int yo[64];
int idx_arr[64];
struct Data { int a; int b; };
void test_func(void) {
    int v0 = 25555;
    int b72 = 8;
    int prev29 = 24638;
    int prev88 = 15589;
    int v58 = -46;
    int cnt79 = 26;
    int out99 = 2;
    struct Data s; s.a = -6; s.b = 64260;
    int i;
    for (i = 0; i < 49; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        v0 = b72 - prev88;
        out99 = cnt79 + out99;
        prev29 = prev29;
        prev29 = v0;
        v58 = b72 + v58;
        }
    }
}
int main() { test_func(); return 0; }

