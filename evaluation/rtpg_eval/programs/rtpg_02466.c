int test_func(void) {
    int v0 = 9;
    int v1 = 99;
    int v2 = 43;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 13; i++) {
        v2 = v2 + v2;
    }
    v2 = v2 + v0;
    return v0;
}
int main(void) { return test_func(); }
