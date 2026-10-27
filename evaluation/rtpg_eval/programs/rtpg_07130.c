int test_func(void) {
    int v0 = 72;
    int v1 = 7;
    int v2 = 9;
    int i;
    v2 = v2 * 10;
    if (v1 > v2) { v1 = v2; }
    v0 = v0 + v1;
    return v0;
}
int main(void) { return test_func(); }
