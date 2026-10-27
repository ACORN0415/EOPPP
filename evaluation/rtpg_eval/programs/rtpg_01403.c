int test_func(void) {
    int v0 = 11;
    int v1 = 42;
    int v2 = 77;
    int v3 = 61;
    int v4 = 59;
    int i;
    if (v1 > v4) { v1 = v4; }
    for (i = 0; i < 13; i++) {
        v0 = v0 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
