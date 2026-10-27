// RTPG_4849: vars=8 stmts=3
void test_func(void) {
    double x85 = 63.12;
    int b17 = 79;
    int b21 = 9;
    int lo68 = -26;
    int hi81 = 0;
    int cur35 = 9229;
    float c56 = 80.58;
    int lo82 = 10;
    int *ptr = &hi81;
    int i;
    for (i = 0; i < 82; i++) {
        hi81 = cur35 + lo82;
        hi81 = b17 + c56;
        b17 = c56 + b21;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

