// RTPG_1485: vars=5 stmts=4
void test_func(void) {
    int z7 = 71;
    int y85 = 48032;
    float z60 = 63.02;
    float prev54 = 83.68;
    double lo63 = 12.69;
    int *ptr = &lo63;
    int i;
    for (i = 0; i < 80; i++) {
        prev54 = y85 + z60;
        prev54 = lo63;
        y85 = y85 + 5;
        y85 = prev54;
        *ptr = *ptr + 4;
        if (z7 >= 27) {
        z7 = z60 + z7;
        }
    }
}
int main() { test_func(); return 0; }

