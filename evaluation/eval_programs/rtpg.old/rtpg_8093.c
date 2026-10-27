// RTPG_8093: vars=6 stmts=3
void test_func(void) {
    int y23 = 34;
    int res64 = 45902;
    int v81 = 63;
    int y88 = 4;
    int y26 = 21;
    int cur75 = 6;
    int i;
    for (i = 0; i < 57; i++) {
        res64 = y23 - y26;
        cur75 = cur75 - 1;
        res64 = cur75 + y26;
    }
}
int main() { test_func(); return 0; }

