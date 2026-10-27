// RTPG_5723: vars=3 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int z66 = 25;
    float acc48 = 24.87;
    int res47 = 23044;
    int i;
    for (i = 0; i < 52; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        z66 = res47 - 0;
        acc48 = res47 + acc48;
        z66 = acc48 - z66;
        acc48 = acc48 + res47;
        res47 = res47 + 4;
        z66 = acc48;
        res47 = res47 + 5;
        }
    }
}
int main() { test_func(); return 0; }

