// RTPG_405: vars=9 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int val59 = 6;
    int out25 = 44;
    float acc32 = 59.82;
    float v10 = 2.29;
    int cnt49 = -35;
    float cur91 = 32.71;
    int res13 = -36;
    int res46 = 7;
    int dat31 = 14;
    int i;
    for (i = 0; i < 64; i++) {
        cnt49 = xn[i];
        res13 = val59 - acc32;
        cur91 = cur91 - 4;
        out25 = cur91 - 39496;
        cur91 = res13 + cnt49;
        val59 = cnt49 + val59;
        if (cur91 <= 26) {
        cnt49 = cnt49 - 2;
        }
        yo[i] = cur91;
    }
}
int main() { test_func(); return 0; }

