// RTPG_4766: vars=6 stmts=3
void test_func(void) {
    double val8 = 42.16;
    double dat81 = 90.89;
    int tmp15 = -12;
    float lo63 = 79.55;
    int z18 = 4;
    int res19 = 40279;
    int i;
    for (i = 0; i < 66; i++) {
        val8 = lo63 + val8;
        tmp15 = lo63 | tmp15;
        tmp15 = dat81 + res19;
    }
}
int main() { test_func(); return 0; }

