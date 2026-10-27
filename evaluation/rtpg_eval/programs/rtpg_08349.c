int test_func(void) {
    int v0 = 61;
    int v1 = 11;
    int v2 = 50;
    int v3 = 33;
    int v4 = 91;
    int v5 = 51;
    int i;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 6; i++) {
        v2 = v2 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
