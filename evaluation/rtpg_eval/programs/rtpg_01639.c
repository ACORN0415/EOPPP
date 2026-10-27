int test_func(void) {
    int v0 = 38;
    int v1 = 46;
    int v2 = 100;
    int v3 = 30;
    int v4 = 67;
    int v5 = 58;
    int v6 = 29;
    int i;
    if (v3 > v5) { v3 = v5; }
    for (i = 0; i < 8; i++) {
        v1 = v1 + v4;
    }
    v6 = 60;
    return v0;
}
int main(void) { return test_func(); }
