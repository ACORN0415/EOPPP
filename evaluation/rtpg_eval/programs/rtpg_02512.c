int test_func(void) {
    int v0 = 84;
    int v1 = 44;
    int v2 = 46;
    int i;
    v0 = v0 + v1;
    v1 = 96;
    if (v2 > v1) { v2 = v1; }
    v2 = v2 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
