int test_func(void) {
    int v0 = 58;
    int v1 = 58;
    int v2 = 98;
    int v3 = 79;
    int i;
    v3 = 48;
    if (v3 > v2) { v3 = v2; }
    v2 = v2 + v1;
    return v0;
}
int main(void) { return test_func(); }
