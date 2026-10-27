int test_func(void) {
    int v0 = 45;
    int v1 = 48;
    int v2 = 47;
    int i;
    if (v0 > v1) { v0 = v1; }
    v2 = v2 * 6;
    v2 = v2 | v1;
    return v0;
}
int main(void) { return test_func(); }
