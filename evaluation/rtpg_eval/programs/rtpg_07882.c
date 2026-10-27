int test_func(void) {
    int v0 = 3;
    int v1 = 96;
    int v2 = 94;
    int v3 = 30;
    int i;
    v0 = v0 * 8;
    if (v2 > v3) { v2 = v3; }
    v3 = v3 - v2;
    return v0;
}
int main(void) { return test_func(); }
