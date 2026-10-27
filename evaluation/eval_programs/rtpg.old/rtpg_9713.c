// RTPG_9713: vars=4 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int tmp45 = 10;
    double out85 = 40.51;
    float prev8 = 27.51;
    int tmp51 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        out85 = xn[i];
        prev8 = tmp51 + 11155;
        tmp51 = out85 & out85;
        yo[i] = tmp45;
    }
}
int main() { test_func(); return 0; }

