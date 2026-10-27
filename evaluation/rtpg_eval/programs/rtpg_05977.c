int test_func(void) {
    int v0 = 55;
    int v1 = 36;
    int v2 = 91;
    int v3 = 25;
    int v4 = 95;
    int v5 = 3;
    int i;
    v3 = v3 + v0;
    v5 = v5 * 6;
    for (i = 0; i < 15; i++) {
        v5 = v5 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
