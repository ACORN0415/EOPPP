int test_func(void) {
    int v0 = 25;
    int v1 = 73;
    int v2 = 59;
    int v3 = 45;
    int v4 = 24;
    int v5 = 100;
    int i;
    for (i = 0; i < 16; i++) {
        v5 = v5 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
