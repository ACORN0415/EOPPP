// RTPG_9900: vars=4 stmts=7
void test_func(void) {
    int sum68 = 4;
    int b48 = 35458;
    int prev81 = 10;
    int out90 = 73;
    int i;
    for (i = 0; i < 25; i++) {
        prev81 = prev81 - 2;
        prev81 = sum68;
        prev81 = b48;
        sum68 = b48 - sum68;
        prev81 = out90 + sum68;
        sum68 = prev81;
        b48 = prev81 - b48;
    }
}
int main() { test_func(); return 0; }

