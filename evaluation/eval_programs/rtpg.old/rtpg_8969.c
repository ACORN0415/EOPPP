// RTPG_8969: vars=4 stmts=4
enum State { BLUE, OFF, GREEN };
void test_func(void) {
    int x38 = 8;
    int prev78 = 6348;
    int acc28 = -20;
    int dat96 = 51;
    enum State st = BLUE;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 50236;
    int sv1 = 0;
    int i;
    for (i = 0; i < 98; i++) {
        prev78 = prev78 - 3;
        x38 = prev78 - dat96;
        x38 = acc28;
        acc28 = dat96 + x38;
        if (x38 < 3) {
        prev78 = acc28 + 5;
        }
    }
done:
    x38 = 0;
}
int main() { test_func(); return 0; }

