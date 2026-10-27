// RTPG_9435: vars=10 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int z47 = 1;
    int a97 = 10;
    int acc2 = 35;
    int v36 = 20863;
    int tmp77 = 0;
    int tmp20 = 48;
    int x33 = 54;
    int cnt4 = -13;
    int out53 = 8;
    int cur35 = 31555;
    int i;
    for (i = 0; i < 32; i++) {
        out53 = xn[i];
        tmp20 = out53 + acc2;
        cnt4 = z47;
        x33 = z47 - v36;
        v36 = v36 - 3;
        tmp20 = acc2 - x33;
        if (out53 < -9) {
        v36 = out53;
        }
        yo[i] = tmp77;
    }
}
int main() { test_func(); return 0; }

