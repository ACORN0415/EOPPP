// RTPG_5482: vars=4 stmts=10
void test_func(void) {
    int c5 = 2;
    int cur46 = 86;
    int dat74 = 29238;
    int lo52 = 8;
    int h0 = 49;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 10; i++) {
        cur46 = lo52 + c5;
        dat74 = dat74 + 2;
        lo52 = lo52 - 4;
        c5 = lo52;
        cur46 = cur46 - 4;
        lo52 = c5 * 18593;
        cur46 = cur46 + 5;
        cur46 = lo52 - cur46;
        cur46 = lo52 - c5;
        cur46 = cur46 * 9;
    }
}
int main() { test_func(); return 0; }

