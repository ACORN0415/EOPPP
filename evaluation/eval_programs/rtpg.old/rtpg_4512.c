// RTPG_4512: vars=4 stmts=4
void test_func(void) {
    double dat98 = 25.94;
    int acc93 = 20457;
    int dat73 = 53205;
    double cur86 = 77.45;
    int *ptr = &cur86;
    int i;
    for (i = 0; i < 35; i++) {
        cur86 = cur86;
        cur86 = acc93 + 9;
        cur86 = dat98;
        acc93 = dat73 - cur86;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

