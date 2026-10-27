// RTPG_358: vars=6 stmts=4
void test_func(void) {
    int b0 = 0;
    int sum38 = 3;
    int sum62 = 10;
    int sum70 = -6;
    int lo34 = -41;
    int cur86 = 0;
    int *ptr = &sum38;
    int i;
    for (i = 0; i < 78; i++) {
        cur86 = sum38 + lo34;
        b0 = lo34 - 44;
        sum62 = sum38 - sum38;
        sum70 = cur86 + sum70;
        *ptr = *ptr + 5;
        if (sum70 != 4) {
        sum38 = sum38 + sum62;
        }
    }
}
int main() { test_func(); return 0; }

