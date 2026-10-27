// RTPG_1659: vars=6 stmts=8
void test_func(void) {
    int lo10 = -20;
    int cur41 = 90;
    int z7 = 85;
    int z78 = 53777;
    int v79 = 12;
    int out81 = 16;
    int i;
    for (i = 0; i < 59; i++) {
        v79 = v79 - 4;
        z78 = lo10 - z7;
        out81 = v79 - z78;
        out81 = v79 - cur41;
        z7 = z7 + 4;
        v79 = z78 - v79;
        v79 = v79 + 2;
        z78 = lo10;
    }
}
int main() { test_func(); return 0; }

