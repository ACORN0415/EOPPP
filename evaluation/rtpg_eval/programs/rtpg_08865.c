int test_func(void) {
    int v0 = 59;
    int v1 = 18;
    int v2 = 0;
    int v3 = 46;
    int i;
    v2 = v2 - v1;
    if (v0 > v2) { v0 = v2; }
    return v0;
}
int main(void) { return test_func(); }
