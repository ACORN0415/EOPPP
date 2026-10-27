// RTPG_388: vars=9 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int v83 = 24576;
    int a2 = 37;
    int cur16 = 63054;
    int val73 = 51101;
    int prev25 = -27;
    int c59 = 50;
    int cnt38 = 3;
    int a32 = 54662;
    int prev77 = 1;
    int h0 = 80;
    int sv0 = 0;
    int h1 = 95;
    int sv1 = 0;
    int h2 = -35;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        prev77 = xn[i];
        c59 = cur16 * -47;
        a32 = a32 - 4;
        a2 = v83 * 49;
        if (cur16 == -2) {
        cur16 = a32;
        }
        yo[i] = prev77;
    }
}
int main() { test_func(); return 0; }

