// RTPG_1641: vars=4 stmts=11
void test_func(void) {
    int tmp86 = -42;
    int c25 = 49729;
    int dat58 = 6760;
    int y56 = -21;
    int i;
    for (i = 0; i < 98; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        c25 = tmp86 - c25;
        c25 = y56;
        tmp86 = tmp86 - dat58;
        tmp86 = y56 - c25;
        y56 = tmp86;
        dat58 = dat58;
        y56 = dat58 + c25;
        c25 = tmp86;
        y56 = y56 - 3;
        c25 = y56;
        c25 = tmp86 + c25;
        }
    }
}
int main() { test_func(); return 0; }

