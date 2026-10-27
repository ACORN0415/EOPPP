// RTPG_7195: vars=4 stmts=2
void test_func(void) {
    int b9 = 25860;
    int out92 = 28;
    int hi89 = 27;
    int x47 = 6;
    int h0 = 37458;
    int sv0 = 0;
    int h1 = 24;
    int sv1 = 0;
    int i;
    for (i = 0; i < 78; i++) {
        switch (b9) {
            case 0: out92 = 6; break;
            case 1: b9 = 31; break;
            default: break;
        }
        b9 = b9 + 1;
    }
}
int main() { test_func(); return 0; }

