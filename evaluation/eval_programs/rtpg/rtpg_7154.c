// RTPG_7154: vars=6 stmts=5
void test_func(void) {
    int dat18 = 31;
    int b68 = 1;
    int c31 = 7;
    int tmp69 = 16381;
    int cur12 = 18;
    int cur8 = 64;
    int *ptr = &cur12;
    int i;
    for (i = 0; i < 50; i++) {
        int j;
        for (j = 0; j < 7; j++) {
        dat18 = b68 - dat18;
        dat18 = cur12 - c31;
        tmp69 = cur8;
        dat18 = cur8 + dat18;
        cur12 = cur8 + 81;
        }
    }
}
int main() { test_func(); return 0; }

