int test_func(void) {
    int v0 = 71;
    int v1 = 60;
    int v2 = 9;
    int i;
    if (v2 > v1) { v2 = v1; }
    v0 = v0 * 7;
    return v0;
}
int main(void) { return test_func(); }
