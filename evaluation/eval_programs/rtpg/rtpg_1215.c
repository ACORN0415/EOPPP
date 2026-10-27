// RTPG_1215: vars=6 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int dat46 = 27195;
    float sum83 = 21.52;
    double z83 = 41.60;
    int tmp41 = 2;
    int y17 = 0;
    int cnt15 = 74;
    int i;
    for (i = 0; i < 64; i++) {
        dat46 = xn[i];
        tmp41 = cnt15 % dat46;
        sum83 = y17 - tmp41;
        cnt15 = dat46 % cnt15;
        dat46 = cnt15 - tmp41;
        z83 = sum83 - 17299;
        dat46 = cnt15 - cnt15;
        z83 = z83 - 5;
        if (y17 <= 0) {
        z83 = y17 - dat46;
        }
        yo[i] = y17;
    }
}
int main() { test_func(); return 0; }

