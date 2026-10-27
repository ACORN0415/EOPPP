// RTPG_9961: vars=3 stmts=3
void test_func(void) {
    int sum56 = 76;
    float z33 = 74.09;
    int c49 = 87;
    int i;
    for (i = 0; i < 6; i++) {
        sum56 = sum56 + 29;
        z33 = z33 + c49;
        z33 = z33 - 4;
    }
}
int main() { test_func(); return 0; }

