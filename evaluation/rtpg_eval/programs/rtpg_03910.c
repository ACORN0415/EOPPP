int test_func(void) {
    int v0 = 18;
    int v1 = 13;
    int v2 = 85;
    int v3 = 5;
    int v4 = 86;
    int v5 = 18;
    int i;
    if (v1 > v0) { v1 = v0; }
    v3 = v3 + v2;
    v0 = v0 * 7;
    v0 = v0 - v2;
    return v0;
}
int main(void) { return test_func(); }
