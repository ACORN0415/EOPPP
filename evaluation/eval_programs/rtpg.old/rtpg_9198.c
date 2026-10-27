// RTPG_9198: vars=5 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int dat85 = 59;
    int x60 = 15;
    int out10 = 56956;
    int out14 = 72;
    int c87 = 2;
    int i;
    for (i = 0; i < 71; i++) {
        switch (out14) {
            case 0: out10 = 12; break;
            case 1: x60 = 59288; break;
            case 2: dat85 = 71; break;
            case 3: x60 = 18; break;
            default: break;
        }
        out14 = out14 + 1;
    }
}
int main() { test_func(); return 0; }

