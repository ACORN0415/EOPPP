// RTPG_7283: vars=4 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    float cnt71 = 90.85;
    int lo89 = 2;
    float v65 = 62.08;
    int prev71 = 93;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        v65 = xn[i];
        prev71 = prev71 - 3;
        prev71 = v65 + v65;
        prev71 = cnt71;
        cnt71 = cnt71 * 0;
        cnt71 = prev71 - v65;
        cnt71 = prev71 - 24447;
        prev71 = cnt71 - lo89;
        v65 = v65 - 4;
        lo89 = prev71 * 8;
        lo89 = cnt71 * 23;
        lo89 = lo89 * 6;
        lo89 = lo89 - -28;
        if (v65 <= 22) {
        cnt71 = lo89;
        }
        yo[i] = prev71;
    }
}
int main() { test_func(); return 0; }

