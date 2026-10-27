// RTPG_7190: vars=3 stmts=3
void test_func(void) {
    int y51 = 8;
    int prev74 = 20;
    int prev27 = 5;
    int *ptr = &prev74;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 79; i++) {
        prev27 = prev74 * -28;
        y51 = prev74 * 36;
        prev27 = prev74 * -22;
        *ptr = *ptr + 1;
        if (prev27 >= -36) {
        prev27 = y51 + prev27;
        }
    }
}
int main() { test_func(); return 0; }

