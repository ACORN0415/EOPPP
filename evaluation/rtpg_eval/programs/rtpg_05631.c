int test_func(void) {
    int v0 = 36;
    int v1 = 55;
    int v2 = 8;
    int v3 = 25;
    int v4 = 71;
    int v5 = 25;
    int i;
    v5 = v5 * 7;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v1;
    }
    v1 = v1 + v0;
    return v0;
}
int main(void) { return test_func(); }
