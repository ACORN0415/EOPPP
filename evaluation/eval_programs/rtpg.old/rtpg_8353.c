// RTPG_8353: vars=8 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int prev70 = 21632;
    int acc24 = 6;
    int a93 = -17;
    int cnt48 = 8;
    int a73 = 11247;
    int cnt45 = 6;
    int val41 = 49274;
    int z38 = 10943;
    int h0 = -11;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int h2 = 46;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        z38 = xn[i];
        val41 = z38 + prev70;
        a93 = a93 - 3;
        z38 = val41 + 8;
        val41 = a73 + acc24;
        acc24 = val41 - a73;
        if (val41 < 85) {
        a93 = acc24 + 35608;
        }
        yo[i] = a93;
    }
}
int main() { test_func(); return 0; }

