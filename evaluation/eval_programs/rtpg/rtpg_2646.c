// RTPG_2646: vars=9 stmts=5
void test_func(void) {
    int lo46 = 8;
    int v16 = 14;
    int res47 = 84;
    int sum98 = 16;
    int res6 = -29;
    int prev43 = 73;
    int acc75 = 33369;
    int a15 = 19;
    int prev98 = 9;
    int i;
    for (i = 0; i < 43; i++) {
        res6 = res47 | v16;
        prev43 = res6 % prev43;
        res6 = a15;
        acc75 = v16 - acc75;
        a15 = res47;
    }
}
int main() { test_func(); return 0; }

