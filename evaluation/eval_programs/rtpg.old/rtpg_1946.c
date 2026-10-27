// RTPG_1946: vars=5 stmts=7
void test_func(void) {
    int acc25 = 62375;
    int b15 = 8;
    int b22 = 55;
    int z89 = 7;
    double a84 = 6.42;
    int *ptr = &b15;
    int i;
    for (i = 0; i < 98; i++) {
        b15 = b15 - z89;
        a84 = b15;
        b15 = a84;
        b22 = acc25 - -44;
        acc25 = a84 + z89;
        z89 = b15 + b22;
        z89 = a84 - a84;
        *ptr = *ptr + 2;
    }
done:
    b22 = 0;
}
int main() { test_func(); return 0; }

