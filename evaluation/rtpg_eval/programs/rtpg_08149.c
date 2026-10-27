int test_func(void) {
    int v0 = 35;
    int v1 = 0;
    int v2 = 11;
    int v3 = 75;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 18; i++) {
        v3 = v3 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
