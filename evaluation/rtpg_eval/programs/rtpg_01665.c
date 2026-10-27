int test_func(void) {
    int v0 = 35;
    int v1 = 85;
    int v2 = 74;
    int i;
    if (v0 > v2) { v0 = v2; }
    v1 = v1 * 6;
    v2 = v2 + v2;
    v2 = 7;
    return v0;
}
int main(void) { return test_func(); }
