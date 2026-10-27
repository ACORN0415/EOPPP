// RTPG_7520: vars=3 stmts=5
void test_func(void) {
    int sum13 = 90;
    int cnt65 = 75;
    int z38 = 2;
    int *ptr = &cnt65;
    int i;
    for (i = 0; i < 14; i++) {
        z38 = cnt65;
        z38 = z38;
        z38 = cnt65 + 65054;
        z38 = cnt65;
        z38 = z38 + cnt65;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

