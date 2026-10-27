// RTPG_8327: vars=3 stmts=5
int xn[32];
int yo[32];
enum State { BLUE, ON, OFF };
void test_func(void) {
    int b70 = 50907;
    int cur17 = 3;
    int cur28 = 2976;
    enum State st = BLUE;
    int h0 = 11409;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        cur17 = xn[i];
        cur28 = cur28 + b70;
        b70 = cur28 + cur17;
        cur17 = cur28;
        b70 = cur28 * 91;
        b70 = cur28 - b70;
        yo[i] = cur17;
    }
}
int main() { test_func(); return 0; }

