int test_func(void) {
    int v0 = 71;
    int v1 = 58;
    int v2 = 85;
    int i;
    v0 = 12;
    if (v2 > v0) { v2 = v0; }
    v1 = v1 * 4;
    return v0;
}
int main(void) { return test_func(); }
