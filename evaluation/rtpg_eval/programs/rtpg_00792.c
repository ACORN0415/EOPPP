int test_func(void) {
    int v0 = 12;
    int v1 = 28;
    int v2 = 6;
    int i;
    if (v1 > v2) { v1 = v2; }
    v2 = 74;
    v1 = v1 * 7;
    return v0;
}
int main(void) { return test_func(); }
