// RTPG_7148: vars=4 stmts=3
void test_func(void) {
    int y28 = 10192;
    int out81 = 59127;
    int z49 = 31703;
    int lo63 = 42;
    int i;
    for (i = 0; i < 40; i++) {
        int j;
        for (j = 0; j < 19; j++) {
        y28 = y28 + 5;
        z49 = z49 - 1;
        z49 = out81 - y28;
        }
    }
}
int main() { test_func(); return 0; }

