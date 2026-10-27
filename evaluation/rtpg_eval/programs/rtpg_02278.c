int test_func(void) {
    int v0 = 99;
    int v1 = 92;
    int v2 = 94;
    int i;
    v2 = v2 - v1;
    v2 = 36;
    if (v0 > v2) { v0 = v2; }
    return v0;
}
int main(void) { return test_func(); }
