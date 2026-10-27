// RTPG_7848: vars=5 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int sum8 = 0;
    float dat17 = 13.10;
    double cur30 = 76.61;
    int b11 = 48;
    int res46 = 13;
    int i;
    for (i = 0; i < 90; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        res46 = res46 - sum8;
        b11 = dat17 + res46;
        res46 = sum8 + res46;
        cur30 = cur30 - 4;
        dat17 = res46 - dat17;
        dat17 = cur30 + dat17;
        res46 = sum8 + b11;
        cur30 = cur30 - res46;
        cur30 = cur30 - sum8;
        cur30 = sum8 - sum8;
        b11 = cur30 - b11;
        cur30 = sum8;
        }
    }
}
int main() { test_func(); return 0; }

