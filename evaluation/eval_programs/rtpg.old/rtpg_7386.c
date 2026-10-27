// RTPG_7386: vars=5 stmts=5
void test_func(void) {
    int b68 = 9;
    int cur43 = 31865;
    int acc75 = 3289;
    int val81 = 10;
    int prev7 = 64705;
    int i;
    for (i = 0; i < 98; i++) {
        acc75 = cur43;
        val81 = val81 + 3;
        val81 = cur43 + val81;
        b68 = b68 + val81;
        prev7 = prev7 - 25;
        if (val81 <= 62) {
        acc75 = prev7 - b68;
        }
    }
}
int main() { test_func(); return 0; }

