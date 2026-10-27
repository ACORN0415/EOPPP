int test_func(void) {
    int v0 = 74;
    int v1 = 89;
    int v2 = 31;
    int v3 = 96;
    int i;
    v3 = v3 * 8;
    if (v2 > v3) { v2 = v3; }
    return v0;
}
int main(void) { return test_func(); }
