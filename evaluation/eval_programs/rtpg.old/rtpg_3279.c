// RTPG_3279: vars=7 stmts=12
void test_func(void) {
    double sum10 = 65.50;
    int tmp3 = 93;
    int tmp90 = 71;
    int acc18 = 32855;
    int res18 = 52611;
    int z38 = 1;
    int z82 = 69;
    int h0 = 31;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int h2 = 6;
    int sv2 = 0;
    int i;
    for (i = 0; i < 86; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        sum10 = tmp3 - 10;
        z38 = z82 - res18;
        tmp3 = z82;
        tmp90 = z82 + res18;
        res18 = z38 - tmp90;
        res18 = tmp90;
        z82 = tmp3 - z38;
        acc18 = tmp3;
        z38 = sum10 + z82;
        z38 = z38 + 5;
        z82 = sum10 - z82;
        sum10 = z82;
        }
    }
}
int main() { test_func(); return 0; }

