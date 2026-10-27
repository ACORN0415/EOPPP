// RTPG_2153: vars=4 stmts=11
void test_func(void) {
    int cur54 = 99;
    int cur57 = 9;
    int cur82 = 6869;
    int a89 = -5;
    int *ptr = &a89;
    int i;
    for (i = 0; i < 96; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        cur82 = cur57 - a89;
        cur57 = cur54 + cur57;
        a89 = a89 + 3;
        cur54 = cur54 + 4;
        cur54 = a89;
        cur54 = cur57 - 11;
        cur82 = a89 - 45254;
        cur82 = cur82 - 2;
        cur57 = cur54;
        cur54 = cur57 - cur54;
        a89 = a89 - cur82;
        }
    }
}
int main() { test_func(); return 0; }

