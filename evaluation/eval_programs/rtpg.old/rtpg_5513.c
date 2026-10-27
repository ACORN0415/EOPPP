// RTPG_5513: vars=8 stmts=8
void test_func(void) {
    int dat35 = 59;
    int out23 = 59003;
    int lo48 = 50;
    int cur61 = 64030;
    int dat12 = -44;
    int prev80 = 76;
    int out75 = 8290;
    int v92 = -26;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 35;
    int sv1 = 0;
    int h2 = 35680;
    int sv2 = 0;
    int i;
    for (i = 0; i < 72; i++) {
        cur61 = lo48 % cur61;
        prev80 = out23;
        dat12 = dat35 & prev80;
        cur61 = cur61 / prev80;
        dat35 = out75 * 32;
        dat12 = out23 * 10;
        prev80 = out75 * 65271;
        out75 = out23 * 6;
        if (cur61 <= 86) {
        v92 = v92 + dat12;
        }
    }
}
int main() { test_func(); return 0; }

