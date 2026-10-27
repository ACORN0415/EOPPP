int test_func(void) {
    int v0 = 90;
    int v1 = 6;
    int v2 = 68;
    int v3 = 92;
    int v4 = 30;
    int i;
    v3 = v3 * 8;
    v2 = v2 + v1;
    if (v1 > v0) { v1 = v0; }
    return v0;
}
int main(void) { return test_func(); }
