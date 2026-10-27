int test_func(void) {
    int v0 = 82;
    int v1 = 58;
    int v2 = 7;
    int v3 = 39;
    int v4 = 42;
    int v5 = 85;
    int i;
    if (v1 > v5) { v1 = v5; }
    v5 = v5 + v4;
    v0 = v0 * 9;
    return v0;
}
int main(void) { return test_func(); }
