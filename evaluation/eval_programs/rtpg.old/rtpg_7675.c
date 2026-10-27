// RTPG_7675: vars=4 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int cnt82 = 21;
    float cnt52 = 33.97;
    double out57 = 73.88;
    float dat59 = 39.70;
    int i;
    for (i = 0; i < 64; i++) {
        cnt52 = xn[i];
        out57 = dat59;
        out57 = out57 - 5;
        cnt82 = cnt82 + cnt52;
        out57 = out57 + 5;
        cnt82 = dat59 + cnt52;
        cnt52 = cnt52 + 4;
        out57 = out57;
        yo[i] = cnt52;
    }
}
int main() { test_func(); return 0; }

