int test_func(void) {
    int v0 = 91;
    int v1 = 60;
    int v2 = 24;
    int v3 = 81;
    int v4 = 24;
    int v5 = 28;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v4;
    }
    v3 = v3 + v0;
    return v0;
}
int main(void) { return test_func(); }
