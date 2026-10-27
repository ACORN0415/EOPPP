// RTPG_585: vars=7 stmts=8
void test_func(void) {
    int b36 = -23;
    int acc61 = 0;
    int acc48 = 4;
    int out78 = 17482;
    int prev41 = 39347;
    int val54 = -25;
    int b8 = 0;
    int h0 = 52214;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 21; i++) {
        b36 = b8 + 1;
        b8 = b8 + 4;
        acc61 = acc61 + 2;
        prev41 = b36 + acc48;
        b8 = acc61 - 7;
        prev41 = acc61 - 61378;
        prev41 = acc48 + val54;
        acc61 = prev41 - val54;
    }
}
int main() { test_func(); return 0; }

