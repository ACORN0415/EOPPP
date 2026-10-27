// RTPG_2714: vars=6 stmts=2
void test_func(void) {
    int val99 = 47;
    int dat8 = -25;
    float b96 = 71.97;
    int v84 = 10;
    int val84 = 4;
    int a15 = 5;
    int *ptr = &a15;
    int i;
    for (i = 0; i < 46; i++) {
        a15 = b96 - a15;
        dat8 = val84 % dat8;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

