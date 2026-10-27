// RTPG_4497: vars=10 stmts=8
void test_func(void) {
    int cur21 = 59;
    int x12 = 47;
    int lo78 = 7;
    int y83 = 55;
    int dat93 = 25;
    int a46 = 35;
    int dat67 = 57972;
    int y12 = 62059;
    int lo32 = 47;
    int sum49 = 36416;
    int *ptr = &dat67;
    int i;
    for (i = 0; i < 30; i++) {
        a46 = x12 + a46;
        sum49 = x12 / sum49;
        lo78 = cur21;
        x12 = x12 - 5;
        sum49 = a46 - y12;
        y12 = a46 + lo32;
        lo32 = lo78 + lo32;
        cur21 = a46;
        *ptr = *ptr + 5;
        if (x12 > 12) {
        dat93 = sum49 + lo32;
        }
    }
}
int main() { test_func(); return 0; }

