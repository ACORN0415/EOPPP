// RTPG_5369: vars=4 stmts=3
void test_func(void) {
    int v5 = 19;
    int dat21 = 8;
    int res95 = 27041;
    int v89 = -9;
    int i;
    for (i = 0; i < 95; i++) {
        switch (dat21) {
            case 0: v5 = -8; break;
            case 1: v89 = 7; break;
            case 2: dat21 = 48515; break;
            case 3: res95 = 35; break;
            default: break;
        }
        dat21 = dat21 + 1;
    }
}
int main() { test_func(); return 0; }

