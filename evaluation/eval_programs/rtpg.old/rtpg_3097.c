// RTPG_3097: vars=4 stmts=7
void test_func(void) {
    int out77 = 3;
    int b29 = -50;
    int dat24 = -27;
    int z99 = 1;
    int h0 = 4;
    int sv0 = 0;
    int h1 = 42;
    int sv1 = 0;
    int i;
    for (i = 0; i < 31; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        z99 = z99 - 2;
        dat24 = dat24 - 3;
        z99 = out77 + 22185;
        b29 = dat24 - z99;
        out77 = out77 + out77;
        b29 = out77 + b29;
        out77 = z99 + b29;
        }
    }
}
int main() { test_func(); return 0; }

