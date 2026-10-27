int test_func(void) {
    int v0 = 67;
    int v1 = 90;
    int v2 = 77;
    int v3 = 54;
    int v4 = 87;
    int i;
    v3 = v3 + v3;
    v1 = 97;
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 13; i++) {
        v0 = v0 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
