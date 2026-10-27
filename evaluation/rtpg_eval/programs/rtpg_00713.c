int test_func(void) {
    int v0 = 71;
    int v1 = 75;
    int v2 = 77;
    int v3 = 13;
    int i;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v2;
    }
    v3 = 72;
    if (v2 > v3) { v2 = v3; }
    return v0;
}
int main(void) { return test_func(); }
