// RTPG_5569: vars=4 stmts=10
void test_func(void) {
    int c5 = 2;
    int dat74 = 86;
    int lo52 = 29238;
    int cur46 = 8;
    int h0 = 49;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 10; i++) {
        dat74 = cur46 + c5;
        lo52 = lo52 + 2;
        cur46 = cur46 - 4;
        c5 = cur46;
        dat74 = dat74 - 4;
        cur46 = c5 * 18593;
        dat74 = dat74 + 5;
        dat74 = cur46 - dat74;
        dat74 = cur46 - c5;
        dat74 = dat74 * 9;
    }
}
int main() { test_func(); return 0; }

