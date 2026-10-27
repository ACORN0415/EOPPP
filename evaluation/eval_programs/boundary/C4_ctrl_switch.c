// BOUNDARY: switch-case
void test_func(void) {
    int x = 5, y = 0, i;
    for (i = 0; i < 28; i++) {
        switch (x) {
            case 0: y = y + 5; break;
            case 1: y = y + 1; break;
            case 2: y = y + 9; break;
            case 3: y = y + 4; break;
            default: y = y + 1; break;
        }
        x = x + 1;
    }
}
int main() { test_func(); return 0; }

