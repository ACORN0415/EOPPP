// RTPG_4855: vars=3 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int c24 = 46;
    int acc40 = 27313;
    int dat17 = 94;
    int i;
    for (i = 0; i < 64; i++) {
        acc40 = xn[i];
        acc40 = dat17 + 45964;
        dat17 = dat17 - 4;
        acc40 = c24;
        acc40 = c24 - 13894;
        acc40 = c24 + acc40;
        dat17 = dat17 - 30;
        acc40 = c24;
        if (acc40 == 7) {
        acc40 = dat17 - acc40;
        }
        yo[i] = acc40;
    }
}
int main() { test_func(); return 0; }

