// RTPG_6305: vars=4 stmts=12
int xn[64];
int yo[64];
void test_func(void) {
    int val97 = 48;
    int res71 = 35;
    int a86 = 15322;
    int a96 = 31;
    int i;
    for (i = 0; i < 64; i++) {
        a86 = xn[i];
        a86 = val97;
        a86 = val97 - a86;
        a96 = a96 + 1;
        res71 = a86 - res71;
        res71 = a86 + val97;
        a86 = a96 - 73;
        res71 = a86;
        val97 = a86 + 10;
        a96 = a96;
        a96 = val97 + a96;
        a96 = a96 - 5;
        res71 = a96 + val97;
        if (val97 < 57) {
        val97 = val97 + 1;
        }
        yo[i] = a86;
    }
}
int main() { test_func(); return 0; }

