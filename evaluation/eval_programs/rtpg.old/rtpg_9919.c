// RTPG_9919: vars=8 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int lo72 = 74;
    int cnt47 = 2;
    int v43 = -23;
    int prev80 = 42517;
    int prev81 = 64099;
    int tmp70 = 7;
    int dat60 = 48;
    int cur8 = 2;
    int i;
    for (i = 0; i < 64; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        v43 = dat60 - tmp70;
        cnt47 = cur8 - 7;
        cur8 = prev80;
        v43 = cur8 - prev81;
        prev81 = lo72 + cur8;
        v43 = v43 + 2;
        dat60 = dat60 - lo72;
        prev81 = dat60;
        }
    }
}
int main() { test_func(); return 0; }

