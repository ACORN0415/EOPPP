// RTPG_9358: vars=4 stmts=2
void test_func(void) {
    int prev58 = 8;
    float lo70 = 51.58;
    int tmp49 = 20;
    int res45 = 1;
    int *ptr = &prev58;
    int i;
    for (i = 0; i < 60; i++) {
        lo70 = tmp49 + lo70;
        prev58 = prev58 + 2;
        *ptr = *ptr + 5;
        if (res45 != -31) {
        lo70 = prev58 + res45;
        }
    }
}
int main() { test_func(); return 0; }

