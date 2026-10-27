// RTPG_9628: vars=4 stmts=3
void test_func(void) {
    int res17 = 81;
    int res72 = 59152;
    int z82 = 28;
    int res69 = 57816;
    int i;
    for (i = 0; i < 67; i++) {
        res72 = res72 & res69;
        res72 = z82 % res69;
        res72 = res69 - res72;
    }
}
int main() { test_func(); return 0; }

