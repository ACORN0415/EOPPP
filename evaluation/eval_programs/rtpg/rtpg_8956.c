// RTPG_8956: vars=3 stmts=4
void test_func(void) {
    int sum0 = 8;
    double dat77 = 18.48;
    int v7 = 12068;
    int i;
    for (i = 0; i < 32; i++) {
        switch (dat77) {
            case 0: dat77 = 40; break;
            case 1: dat77 = -1; break;
            case 2: v7 = 31; break;
            case 3: dat77 = 27195; break;
            default: break;
        }
        dat77 = dat77 + 1;
    }
}
int main() { test_func(); return 0; }

