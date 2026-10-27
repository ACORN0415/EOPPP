// RTPG_5355: vars=6 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    float v68 = 47.62;
    int v49 = 3;
    int prev47 = 57646;
    int acc54 = 45;
    int b51 = 57;
    double tmp45 = 69.74;
    int h0 = 6;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        b51 = xn[i];
        prev47 = prev47 - 4;
        v49 = b51;
        prev47 = v49 - prev47;
        v68 = acc54 - prev47;
        yo[i] = b51;
    }
}
int main() { test_func(); return 0; }

