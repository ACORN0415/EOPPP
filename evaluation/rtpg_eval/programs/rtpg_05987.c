int test_func(void) {
    int v0 = 58;
    int v1 = 83;
    int v2 = 71;
    int v3 = 88;
    int i;
    if (v0 > v3) { v0 = v3; }
    v1 = v1 + v3;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
