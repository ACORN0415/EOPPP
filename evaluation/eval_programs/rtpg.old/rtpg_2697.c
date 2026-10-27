// RTPG_2697: vars=4 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int dat35 = 8;
    int val15 = 16;
    int z33 = 15;
    int res54 = 62853;
    int i;
    for (i = 0; i < 16; i++) {
        dat35 = xn[i];
        res54 = dat35 + dat35;
        val15 = res54;
        z33 = val15 - res54;
        z33 = z33 + 4;
        val15 = res54 + z33;
        if (dat35 < 73) {
        dat35 = val15;
        }
        yo[i] = dat35;
    }
}
int main() { test_func(); return 0; }

