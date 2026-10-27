// RTPG_6254: vars=6 stmts=5
int xn[32];
int yo[32];
enum State { SLOW, RED, GREEN };
void test_func(void) {
    int tmp40 = -18;
    int tmp16 = 2149;
    int val78 = 3;
    int cur57 = 7;
    int z41 = 89;
    int x69 = 47;
    enum State st = SLOW;
    int h0 = 48;
    int sv0 = 0;
    int h1 = 50783;
    int sv1 = 0;
    int h2 = 75;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        cur57 = xn[i];
        tmp40 = tmp40 + 2;
        tmp16 = tmp16 + cur57;
        cur57 = x69 - 51719;
        tmp40 = x69 + tmp40;
        val78 = tmp40 + tmp40;
        yo[i] = tmp40;
    }
}
int main() { test_func(); return 0; }

