// RTPG_8218: vars=3 stmts=5
int xn[32];
int yo[32];
enum State { BLUE, ON, OFF };
void test_func(void) {
    int cur17 = 50907;
    int cur28 = 3;
    int b70 = 2976;
    enum State st = BLUE;
    int h0 = 11409;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        cur28 = xn[i];
        b70 = b70 + cur17;
        cur17 = b70 + cur28;
        cur28 = b70;
        cur17 = b70 * 91;
        cur17 = b70 - cur17;
        yo[i] = cur28;
    }
}
int main() { test_func(); return 0; }

