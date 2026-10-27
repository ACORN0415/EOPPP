// RTPG_9083: vars=5 stmts=2
void test_func(void) {
    int b25 = 16;
    int cur86 = 37636;
    int cur46 = 50031;
    int a6 = 29917;
    int cur39 = 6;
    int i;
    for (i = 0; i < 41; i++) {
        cur86 = cur46 | b25;
        cur46 = b25 - cur86;
        if (b25 > 9) goto done;
    }
done:
    cur39 = 0;
}
int main() { test_func(); return 0; }

