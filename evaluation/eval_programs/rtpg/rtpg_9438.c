// RTPG_9438: vars=3 stmts=5
void test_func(void) {
    int tmp81 = 88;
    int tmp52 = 28786;
    int z53 = 0;
    int h0 = 12229;
    int sv0 = 0;
    int h1 = 38;
    int sv1 = 0;
    int i;
    for (i = 0; i < 75; i++) {
        tmp81 = tmp81 * 7;
        tmp52 = z53 * 4;
        z53 = z53 + tmp52;
        tmp81 = tmp52;
        z53 = tmp52 % tmp81;
    }
}
int main() { test_func(); return 0; }

