// RTPG_9150: vars=7 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int c61 = 21872;
    int b57 = 7;
    int sum39 = 14059;
    int cur51 = 44886;
    int res12 = 9;
    int res97 = 28;
    int sum16 = 8499;
    int i;
    for (i = 0; i < 16; i++) {
        sum16 = xn[i];
        c61 = cur51 + res97;
        c61 = sum39 - 3;
        cur51 = cur51 + 4;
        cur51 = c61 + res97;
        res97 = sum16 + 4;
        c61 = res97 - c61;
        yo[i] = res97;
    }
}
int main() { test_func(); return 0; }

