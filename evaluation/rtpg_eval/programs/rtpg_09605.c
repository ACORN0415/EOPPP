int test_func(void) {
    int v0 = 7;
    int v1 = 38;
    int v2 = 69;
    int v3 = 70;
    int v4 = 6;
    int i;
    v1 = 58;
    if (v0 > v4) { v0 = v4; }
    v4 = v4 + v1;
    return v0;
}
int main(void) { return test_func(); }
