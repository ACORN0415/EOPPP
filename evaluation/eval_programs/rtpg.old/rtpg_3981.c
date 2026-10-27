// RTPG_3981: vars=9 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int x43 = 9;
    int prev59 = 0;
    int out34 = 25;
    int dat23 = 37934;
    float v29 = 4.44;
    int prev79 = 12103;
    int cur93 = 20654;
    int c81 = -11;
    int cur35 = 96;
    int i;
    for (i = 0; i < 32; i++) {
        prev79 = xn[i];
        prev79 = c81 % cur93;
        out34 = cur35 ^ prev79;
        c81 = c81 + prev59;
        if (cur93 <= -4) {
        cur93 = v29 + cur35;
        }
        yo[i] = x43;
    }
}
int main() { test_func(); return 0; }

