// RTPG_88: vars=11 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int acc64 = 5;
    int prev28 = 3;
    int lo36 = 10553;
    int val40 = 21819;
    int sum0 = -48;
    int cur80 = 8;
    int c51 = 3;
    int out68 = 23;
    int lo20 = 7;
    int a85 = 5;
    float prev63 = 68.20;
    int i;
    for (i = 0; i < 32; i++) {
        c51 = xn[i];
        lo20 = c51 - prev28;
        sum0 = sum0 + 5;
        prev63 = prev63 + 4;
        out68 = sum0 - acc64;
        cur80 = lo20 - out68;
        if (prev28 < -13) {
        sum0 = sum0 + 2;
        }
        yo[i] = cur80;
    }
}
int main() { test_func(); return 0; }

