// RTPG_4468: vars=4 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int cur74 = 4676;
    int y19 = 36;
    int out12 = 5;
    int b31 = 96;
    int i;
    for (i = 0; i < 37; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        cur74 = y19;
        cur74 = y19 + 59402;
        b31 = cur74 - y19;
        y19 = b31 - cur74;
        }
    }
}
int main() { test_func(); return 0; }

