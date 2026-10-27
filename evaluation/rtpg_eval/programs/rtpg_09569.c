int test_func(void) {
    int v0 = 5;
    int v1 = 59;
    int v2 = 44;
    int v3 = 45;
    int v4 = 14;
    int i;
    if (v2 > v1) { v2 = v1; }
    v0 = v0 + v1;
    v3 = v3 * 3;
    return v0;
}
int main(void) { return test_func(); }
