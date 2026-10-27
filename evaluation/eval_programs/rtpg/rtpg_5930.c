// RTPG_5930: vars=3 stmts=4
void test_func(void) {
    int cur14 = 29642;
    int cnt97 = 1;
    int prev12 = 11506;
    int i;
    for (i = 0; i < 78; i++) {
        cnt97 = cnt97 + prev12;
        cnt97 = cur14 + cnt97;
        cur14 = cur14 - 2;
        cnt97 = cnt97 + 90;
    }
}
int main() { test_func(); return 0; }

