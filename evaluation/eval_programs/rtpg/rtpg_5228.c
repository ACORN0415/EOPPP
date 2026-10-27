// RTPG_5228: vars=3 stmts=3
void test_func(void) {
    int sum47 = 65;
    int res20 = 87;
    int b74 = 93;
    int h0 = 54;
    int sv0 = 0;
    int h1 = 1325;
    int sv1 = 0;
    int i;
    for (i = 0; i < 9; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        b74 = b74 - 2;
        sum47 = b74 + 10;
        res20 = b74 + sum47;
        }
    }
}
int main() { test_func(); return 0; }

