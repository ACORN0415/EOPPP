// RTPG_3815: vars=6 stmts=10
void test_func(void) {
    int c74 = 9;
    int y67 = 3961;
    int x76 = 0;
    int c61 = 0;
    int sum27 = -17;
    int v19 = 17;
    int i;
    for (i = 0; i < 5; i++) {
        v19 = y67;
        c74 = v19 - 7;
        x76 = sum27 - v19;
        c61 = c61 + 5;
        v19 = c61 - c74;
        y67 = c61 - sum27;
        x76 = x76 + 1;
        c74 = x76 + -7;
        sum27 = c74 + x76;
        c74 = c74 + 3;
        if (sum27 > 62) {
        y67 = y67 + c61;
        }
    }
}
int main() { test_func(); return 0; }

