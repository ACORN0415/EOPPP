// RTPG_1271: vars=3 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int lo41 = -23;
    int b77 = -19;
    int dat17 = 1;
    int i;
    for (i = 0; i < 32; i++) {
        b77 = xn[i];
        dat17 = b77 + lo41;
        dat17 = lo41 + lo41;
        b77 = lo41 - lo41;
        lo41 = lo41 - 48;
        yo[i] = dat17;
    }
}
int main() { test_func(); return 0; }

