// RTPG_4432: vars=4 stmts=9
void test_func(void) {
    int hi1 = -44;
    int acc99 = 57;
    int hi24 = 0;
    int y39 = 23681;
    int i;
    for (i = 0; i < 51; i++) {
        hi1 = acc99 + 30;
        y39 = hi24 - hi24;
        hi24 = hi1 - y39;
        hi1 = hi1 - hi1;
        y39 = hi24 + 97;
        hi24 = hi1;
        acc99 = acc99 - hi24;
        hi1 = hi1 + 4;
        hi24 = hi24 + 2;
        if (hi24 != -10) {
        y39 = hi1 - 15;
        }
    }
}
int main() { test_func(); return 0; }

