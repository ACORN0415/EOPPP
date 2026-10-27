int test_func(void) {
    int v0 = 42;
    int v1 = 60;
    int v2 = 15;
    int v3 = 18;
    int v4 = 32;
    int i;
    v2 = 51;
    if (v0 > v3) { v0 = v3; }
    v3 = v3 * 6;
    return v0;
}
int main(void) { return test_func(); }
