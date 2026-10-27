// RTPG_9931: vars=4 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int out85 = 10;
    double prev8 = 40.51;
    float tmp45 = 27.51;
    int tmp51 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        prev8 = xn[i];
        tmp45 = tmp51 + 11155;
        tmp51 = prev8 & out85;
        yo[i] = out85;
    }
}
int main() { test_func(); return 0; }

