// RTPG_7094: vars=4 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int res6 = 98;
    int b74 = -29;
    int lo97 = 6;
    int res34 = 21;
    int i;
    for (i = 0; i < 32; i++) {
        lo97 = xn[i];
        res34 = res34 + 5;
        res6 = res6 - lo97;
        lo97 = res6 - res34;
        res34 = b74 + lo97;
        res34 = res6 + res6;
        res6 = res34 + 44431;
        b74 = res6 - res34;
        b74 = res34 - res34;
        lo97 = res6 - b74;
        res6 = b74;
        lo97 = b74 + res34;
        res34 = res6;
        yo[i] = b74;
    }
}
int main() { test_func(); return 0; }

