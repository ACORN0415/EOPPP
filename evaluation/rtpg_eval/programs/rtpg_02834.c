int test_func(void) {
    int v0 = 58;
    int v1 = 78;
    int v2 = 96;
    int v3 = 26;
    int v4 = 64;
    int v5 = 26;
    int i;
    v0 = v0 - v5;
    v5 = v5 + v1;
    if (v4 > v3) { v4 = v3; }
    return v0;
}
int main(void) { return test_func(); }
