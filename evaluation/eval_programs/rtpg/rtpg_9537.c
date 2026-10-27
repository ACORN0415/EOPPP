// RTPG_9537: vars=3 stmts=4
void test_func(void) {
    int acc74 = 32;
    float lo24 = 66.83;
    int val53 = -37;
    int i;
    for (i = 0; i < 23; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        val53 = acc74;
        acc74 = acc74;
        acc74 = lo24 - 32;
        acc74 = acc74 - acc74;
        }
    }
}
int main() { test_func(); return 0; }

