int test_func(void) {
    int v0 = 50;
    int v1 = 82;
    int v2 = 80;
    int v3 = 87;
    int v4 = 47;
    int i;
    if (v0 > v2) { v0 = v2; }
    return v0;
}
int main(void) { return test_func(); }
