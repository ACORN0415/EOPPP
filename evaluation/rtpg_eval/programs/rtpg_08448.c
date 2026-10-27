int test_func(void) {
    int v0 = 52;
    int v1 = 26;
    int v2 = 44;
    int v3 = 90;
    int i;
    if (v0 > v2) { v0 = v2; }
    v3 = v3 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
