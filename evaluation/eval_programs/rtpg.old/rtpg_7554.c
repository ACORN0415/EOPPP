// RTPG_7554: vars=9 stmts=12
void test_func(void) {
    int acc38 = 10;
    int out58 = 0;
    int b25 = 12;
    int a52 = 9;
    int v37 = 27817;
    int v57 = 47;
    int v88 = 34;
    int c74 = 4;
    int tmp62 = 18;
    int i;
    for (i = 0; i < 74; i++) {
        v37 = acc38 % tmp62;
        b25 = out58;
        out58 = c74 - b25;
        v57 = tmp62 / v37;
        v88 = b25 - acc38;
        v88 = v88 + 3;
        acc38 = acc38 / v88;
        c74 = c74 & tmp62;
        v57 = a52 | v88;
        v88 = v57 - acc38;
        out58 = v88 - 10741;
        v37 = v37 - out58;
        if (out58 >= 29) {
        v57 = v57 - 28022;
        }
    }
}
int main() { test_func(); return 0; }

