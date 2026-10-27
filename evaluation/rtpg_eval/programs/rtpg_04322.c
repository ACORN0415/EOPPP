int test_func(void) {
    int v0 = 95;
    int v1 = 100;
    int v2 = 78;
    int v3 = 96;
    int v4 = 11;
    int i;
    if (v0 > v2) { v0 = v2; }
    v2 = 41;
    return v0;
}
int main(void) { return test_func(); }
