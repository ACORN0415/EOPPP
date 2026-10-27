// RTPG_8838: vars=8 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int dat16 = 41;
    float b61 = 14.02;
    double prev8 = 98.68;
    int a37 = 13;
    int x4 = 2;
    int cur33 = -4;
    int lo82 = 98;
    int res76 = 83;
    int i;
    for (i = 0; i < 16; i++) {
        x4 = xn[i];
        b61 = b61 - prev8;
        prev8 = cur33 - prev8;
        prev8 = prev8 + 2;
        dat16 = prev8 - dat16;
        prev8 = b61;
        cur33 = a37 - cur33;
        cur33 = x4 - res76;
        res76 = res76 - 5;
        if (prev8 <= 71) {
        prev8 = prev8 - 4;
        }
        yo[i] = a37;
    }
}
int main() { test_func(); return 0; }

