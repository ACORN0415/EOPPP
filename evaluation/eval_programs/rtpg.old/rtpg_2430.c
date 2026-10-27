// RTPG_2430: vars=6 stmts=10
void test_func(void) {
    int y36 = 48434;
    int val86 = 2;
    int v0 = 11172;
    int z1 = 5519;
    int b81 = 12803;
    int a85 = 85;
    int i;
    for (i = 0; i < 78; i++) {
        a85 = a85 + b81;
        b81 = b81 - 1;
        val86 = y36 - a85;
        z1 = v0;
        b81 = z1 + y36;
        a85 = val86;
        y36 = val86 ^ b81;
        val86 = v0 & b81;
        val86 = a85 + y36;
        z1 = y36 + a85;
    }
}
int main() { test_func(); return 0; }

