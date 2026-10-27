int test_func(void) {
    int v0 = 1;
    int v1 = 33;
    int v2 = 46;
    int v3 = 95;
    int v4 = 43;
    int i;
    v3 = v3 - v0;
    if (v3 > v2) { v3 = v2; }
    for (i = 0; i < 11; i++) {
        v0 = v0 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
