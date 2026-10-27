int test_func(void) {
    int v0 = 100;
    int v1 = 36;
    int v2 = 45;
    int v3 = 48;
    int i;
    v2 = 58;
    v3 = v3 * 8;
    if (v3 > v1) { v3 = v1; }
    return v0;
}
int main(void) { return test_func(); }
